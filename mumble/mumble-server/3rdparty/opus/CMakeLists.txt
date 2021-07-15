cmake_minimum_required(VERSION 3.1)

include(opus_functions.cmake)

project(Opus LANGUAGES C VERSION 1.3.1)

message(STATUS "Opus version: ${PROJECT_VERSION}")

include(opus_buildtype.cmake)

option(OPUS_BUILD_SHARED_LIBRARY "Build shared library" OFF)
option(OPUS_STACK_PROTECTOR "Use stack protection" ON)
option(OPUS_USE_ALLOCA "Use alloca for stack arrays (on non-C99 compilers)" OFF)
option(OPUS_CUSTOM_MODES "Enable non-Opus modes, e.g. 44.1 kHz & 2^n frames"
       OFF)
option(OPUS_BUILD_PROGRAMS "Build programs" OFF)
option(OPUS_FIXED_POINT
       "Compile as fixed-point (for machines without a fast enough FPU)" OFF)
option(OPUS_ENABLE_FLOAT_API
       "Compile with the floating point API (for machines with float library"
       ON)

include(opus_config.cmake)
include(opus_sources.cmake)
include(CMakeDependentOption)
include(FeatureSummary)

if(OPUS_BUILD_SHARED_LIBRARY)
  # Global flag to cause add_library() to create shared libraries if on.
  set(BUILD_SHARED_LIBS ON)
endif()

if(OPUS_STACK_PROTECTOR)
  if(NOT MSVC) # GC on by default on MSVC
    check_and_set_flag(STACK_PROTECTION_STRONG -fstack-protector-strong)
  endif()
else()
  if(MSVC)
    check_and_set_flag(BUFFER_SECURITY_CHECK /GS-)
  endif()
endif()

if(OPUS_CPU_X86 OR OPUS_CPU_X64)
  cmake_dependent_option(OPUS_X86_MAY_HAVE_SSE
                         "Does runtime check for SSE1 support"
                         ON
                         "SSE1_SUPPORTED"
                         OFF)
  cmake_dependent_option(OPUS_X86_MAY_HAVE_SSE2
                         "Does runtime check for SSE2 support"
                         ON
                         "SSE2_SUPPORTED"
                         OFF)
  cmake_dependent_option(OPUS_X86_MAY_HAVE_SSE4_1
                         "Does runtime check for SSE4.1 support"
                         ON
                         "SSE4_1_SUPPORTED"
                         OFF)
  cmake_dependent_option(OPUS_X86_MAY_HAVE_AVX
                         "Does runtime check for AVX support"
                         ON
                         "AVX_SUPPORTED"
                         OFF)

  if(OPUS_CPU_X64) # Assume 64 bit has SSE2 support
    cmake_dependent_option(OPUS_X86_PRESUME_SSE
                           "Assume target CPU has SSE1 support"
                           ON
                           "OPUS_X86_MAY_HAVE_SSE"
                           OFF)
    cmake_dependent_option(OPUS_X86_PRESUME_SSE2
                           "Assume target CPU has SSE2 support"
                           ON
                           "OPUS_X86_MAY_HAVE_SSE2"
                           OFF)
  else()
    cmake_dependent_option(OPUS_X86_PRESUME_SSE
                           "Assume target CPU has SSE1 support"
                           OFF
                           "OPUS_X86_MAY_HAVE_SSE"
                           OFF)
    cmake_dependent_option(OPUS_X86_PRESUME_SSE2
                           "Assume target CPU has SSE2 support"
                           OFF
                           "OPUS_X86_MAY_HAVE_SSE2"
                           OFF)
  endif()
  cmake_dependent_option(OPUS_X86_PRESUME_SSE4_1
                         "Assume target CPU has SSE4.1 support"
                         OFF
                         "OPUS_X86_MAY_HAVE_SSE4_1"
                         OFF)
  cmake_dependent_option(OPUS_X86_PRESUME_AVX
                         "Assume target CPU has AVX support"
                         OFF
                         "OPUS_X86_MAY_HAVE_AVX"
                         OFF)
endif()

set_package_properties(Git
                       PROPERTIES
                       TYPE
                       REQUIRED
                       DESCRIPTION
                       "fast, scalable, distributed revision control system"
                       URL
                       "https://git-scm.com/"
                       PURPOSE
                       "required to set up package version")

add_feature_info(STACK_PROTECTOR OPUS_STACK_PROTECTOR "Use stack protection")
add_feature_info(USE_ALLOCA OPUS_USE_ALLOCA
                 "Use alloca for stack arrays (on non-C99 compilers)")
add_feature_info(CUSTOM_MODES OPUS_CUSTOM_MODES
                 "Enable non-Opus modes, e.g. 44.1 kHz & 2^n frames")
add_feature_info(BUILD_PROGRAMS OPUS_BUILD_PROGRAMS "Build programs")
add_feature_info(
  FIXED_POINT OPUS_FIXED_POINT
  "compile as fixed-point (for machines without a fast enough FPU)")
add_feature_info(
  FLOAT_API OPUS_ENABLE_FLOAT_API
  "compile with the floating point API (for machines with float library)")

if(OPUS_CPU_X86 OR OPUS_CPU_X64)
  add_feature_info(X86_MAY_HAVE_SSE OPUS_X86_MAY_HAVE_SSE
                   "does runtime check for SSE1 support")
  add_feature_info(X86_MAY_HAVE_SSE2 OPUS_X86_MAY_HAVE_SSE2
                   "does runtime check for SSE2 support")
  add_feature_info(X86_MAY_HAVE_SSE4_1 OPUS_X86_MAY_HAVE_SSE4_1
                   "does runtime check for SSE4_1 support")
  add_feature_info(X86_MAY_HAVE_AVX OPUS_X86_MAY_HAVE_AVX
                   "does runtime check for AVX support")
  add_feature_info(X86_PRESUME_SSE OPUS_X86_PRESUME_SSE
                   "assume target CPU has SSE1 support")
  add_feature_info(X86_PRESUME_SSE2 OPUS_X86_PRESUME_SSE2
                   "assume target CPU has SSE2 support")
  add_feature_info(X86_PRESUME_SSE4_1 OPUS_X86_PRESUME_SSE4_1
                   "assume target CPU has SSE4_1 support")
  add_feature_info(X86_PRESUME_AVX OPUS_X86_PRESUME_AVX
                   "assume target CPU has AVX support")
endif()

feature_summary(WHAT ALL)

add_library(opus ${opus_sources} ${opus_sources_float})

set_target_properties(opus
                      PROPERTIES
                                 VERSION
                                 ${PROJECT_VERSION})

target_include_directories(
  opus
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
          ${CMAKE_CURRENT_SOURCE_DIR}
          celt
          silk)

target_link_libraries(opus PRIVATE ${OPUS_REQUIRED_LIBRARIES})
target_compile_definitions(
  opus
  PRIVATE PACKAGE_VERSION="${PROJECT_VERSION}"
          OPUS_BUILD ENABLE_HARDENING)

if(NOT MSVC)
  target_compile_definitions(opus PRIVATE FORTIFY_SOURCE=2)
endif()

# It is strongly recommended to uncomment one of these VAR_ARRAYS: Use C99
# variable-length arrays for stack allocation USE_ALLOCA: Use alloca() for stack
# allocation If none is defined, then the fallback is a non-threadsafe global
# array
if(OPUS_USE_ALLOCA OR MSVC)
  target_compile_definitions(opus PRIVATE USE_ALLOCA)
else()
  target_compile_definitions(opus PRIVATE VAR_ARRAYS)
endif()

if(OPUS_CUSTOM_MODES)
  target_compile_definitions(opus PRIVATE CUSTOM_MODES)
endif()

if(BUILD_SHARED_LIBS)
  if(WIN32)
    target_compile_definitions(opus PRIVATE DLL_EXPORT)
  else()
    include(CheckCCompilerFlag)
    check_c_compiler_flag(-fvisibility=hidden COMPILER_HAS_HIDDEN_VISIBILITY)
    if(COMPILER_HAS_HIDDEN_VISIBILITY)
      set_target_properties(opus PROPERTIES C_VISIBILITY_PRESET hidden)
    endif()
  endif()
endif()

add_sources_group(opus silk ${silk_sources})
add_sources_group(opus celt ${celt_sources})

if(OPUS_FIXED_POINT)
  add_sources_group(opus silk ${silk_sources_fixed})
  target_include_directories(opus PRIVATE silk/fixed)
  target_compile_definitions(opus PRIVATE FIXED_POINT=1)
else()
  add_sources_group(opus silk ${silk_sources_float})
  target_include_directories(opus PRIVATE silk/float)
endif()

if(NOT OPUS_ENABLE_FLOAT_API)
  target_compile_definitions(opus PRIVATE DISABLE_FLOAT_API)
endif()

if(OPUS_X86_MAY_HAVE_SSE
   OR OPUS_X86_MAY_HAVE_SSE2
   OR OPUS_X86_MAY_HAVE_SSE4_1
   OR OPUS_X86_MAY_HAVE_AVX)
  target_compile_definitions(opus PRIVATE OPUS_HAVE_RTCD)
endif()

if(OPUS_X86_MAY_HAVE_SSE)
  add_sources_group(opus celt ${celt_sources_sse})
  target_compile_definitions(opus PRIVATE OPUS_X86_MAY_HAVE_SSE)
endif()
if(OPUS_X86_PRESUME_SSE)
  target_compile_definitions(opus PRIVATE OPUS_X86_PRESUME_SSE)
endif()

if(OPUS_X86_MAY_HAVE_SSE2)
  add_sources_group(opus celt ${celt_sources_sse2})
  target_compile_definitions(opus PRIVATE OPUS_X86_MAY_HAVE_SSE2)
endif()
if(OPUS_X86_PRESUME_SSE2)
  target_compile_definitions(opus PRIVATE OPUS_X86_PRESUME_SSE2)
endif()

if(OPUS_X86_MAY_HAVE_SSE)
  add_sources_group(opus celt ${celt_sources_sse4_1})
  add_sources_group(opus silk ${silk_sources_sse4_1})
  if(OPUS_FIXED_POINT)
    add_sources_group(opus silk ${silk_sources_fixed_sse4_1})
  endif()
  target_compile_definitions(opus PRIVATE OPUS_X86_MAY_HAVE_SSE4_1)
endif()
if(OPUS_X86_PRESUME_SSE4_1)
  target_compile_definitions(opus PRIVATE OPUS_X86_PRESUME_SSE4_1)
endif()

if(CMAKE_SYSTEM_PROCESSOR MATCHES "(armv7-a)")
  add_sources_group(opus celt ${celt_sources_arm})
endif()

if(COMPILER_SUPPORT_NEON AND OPUS_USE_NEON)

  if(OPUS_MAY_HAVE_NEON)
    if(RUNTIME_CPU_CAPABILITY_DETECTION)
      message(STATUS "OPUS_MAY_HAVE_NEON enabling runtime detection")
      target_compile_definitions(opus PRIVATE OPUS_HAVE_RTCD)
    else()
      message(ERROR "Runtime cpu capability detection needed for MAY_HAVE_NEON")
    endif()
    # Do runtime check for NEON
    target_compile_definitions(opus
                               PRIVATE
                               OPUS_ARM_MAY_HAVE_NEON
                               OPUS_ARM_MAY_HAVE_NEON_INTR)
  endif()

  add_sources_group(opus celt ${celt_sources_arm_neon_intr})
  add_sources_group(opus silk ${silk_sources_arm_neon_intr})

  # silk arm neon depends on main_Fix.h
  target_include_directories(opus PRIVATE silk/fixed)

  if(OPUS_FIXED_POINT)
    add_sources_group(opus silk ${silk_sources_fixed_arm_neon_intr})
  endif()

  if(OPUS_PRESUME_NEON)
    target_compile_definitions(opus
                               PRIVATE
                               OPUS_ARM_PRESUME_NEON
                               OPUS_ARM_PRESUME_NEON_INTR)
  endif()
endif()

if(OPUS_BUILD_PROGRAMS)
  # demo
  if(OPUS_CUSTOM_MODES)
    add_executable(opus_custom_demo ${opus_custom_demo_sources})
    target_include_directories(opus_custom_demo
                               PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
    target_link_libraries(opus_custom_demo PRIVATE opus)
  endif()

  add_executable(opus_demo ${opus_demo_sources})
  target_include_directories(opus_demo PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
  target_include_directories(opus_demo PRIVATE silk) # debug.h
  target_include_directories(opus_demo PRIVATE celt) # arch.h
  target_link_libraries(opus_demo PRIVATE opus)

  # compare
  add_executable(opus_compare ${opus_compare_sources})
  target_include_directories(opus_compare PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
  target_link_libraries(opus_compare PRIVATE opus)
endif()

if(BUILD_TESTING)
  enable_testing()

  # tests
  add_executable(test_opus_decode ${test_opus_decode_sources})
  target_include_directories(test_opus_decode
                             PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
  target_link_libraries(test_opus_decode PRIVATE opus)
  if(OPUS_FIXED_POINT)
    target_compile_definitions(test_opus_decode PRIVATE DISABLE_FLOAT_API)
  endif()
  add_test(NAME test_opus_decode COMMAND $<TARGET_FILE:test_opus_decode> WORKING_DIRECTORY ${CMAKE_BINARY_DIR})

  add_executable(test_opus_padding ${test_opus_padding_sources})
  target_include_directories(test_opus_padding
                             PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
  target_link_libraries(test_opus_padding PRIVATE opus)
  add_test(NAME test_opus_padding COMMAND $<TARGET_FILE:test_opus_padding> WORKING_DIRECTORY ${CMAKE_BINARY_DIR})

  if(NOT BUILD_SHARED_LIBS)
    # disable tests that depends on private API when building shared lib
    add_executable(test_opus_api ${test_opus_api_sources})
    target_include_directories(test_opus_api
                               PRIVATE ${CMAKE_CURRENT_BINARY_DIR} celt)
    target_link_libraries(test_opus_api PRIVATE opus)
    if(OPUS_FIXED_POINT)
      target_compile_definitions(test_opus_api PRIVATE DISABLE_FLOAT_API)
    endif()
    add_test(NAME test_opus_api COMMAND $<TARGET_FILE:test_opus_api> WORKING_DIRECTORY ${CMAKE_BINARY_DIR})

    add_executable(test_opus_encode ${test_opus_encode_sources})
    target_include_directories(test_opus_encode
                               PRIVATE ${CMAKE_CURRENT_BINARY_DIR} celt)
    target_link_libraries(test_opus_encode PRIVATE opus)
    add_test(NAME test_opus_encode COMMAND $<TARGET_FILE:test_opus_encode> WORKING_DIRECTORY ${CMAKE_BINARY_DIR})
  endif()
endif()
