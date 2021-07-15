/********************************************************************************
** Form generated from reading UI file 'SearchDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "SearchDialogTree.h"

QT_BEGIN_NAMESPACE

class Ui_SearchDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *searchField;
    QPushButton *toggleOptions;
    SearchDialogTree *searchResultTree;
    QWidget *searchOptionBox;
    QGridLayout *gridLayout_2;
    QCheckBox *userOption;
    QCheckBox *caseSensitiveOption;
    QLabel *searchOptionsLabel;
    QSpacerItem *horizontalSpacer;
    QCheckBox *regexOption;
    QCheckBox *channelOption;
    QLabel *searchForLabel;

    void setupUi(QWidget *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName(QString::fromUtf8("SearchDialog"));
        SearchDialog->resize(421, 283);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SearchDialog->sizePolicy().hasHeightForWidth());
        SearchDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(SearchDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        searchField = new QLineEdit(SearchDialog);
        searchField->setObjectName(QString::fromUtf8("searchField"));

        gridLayout->addWidget(searchField, 0, 0, 1, 1);

        toggleOptions = new QPushButton(SearchDialog);
        toggleOptions->setObjectName(QString::fromUtf8("toggleOptions"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        toggleOptions->setIcon(icon);
        toggleOptions->setCheckable(false);
        toggleOptions->setAutoDefault(false);
        toggleOptions->setFlat(false);

        gridLayout->addWidget(toggleOptions, 0, 1, 1, 1);

        searchResultTree = new SearchDialogTree(SearchDialog);
        searchResultTree->headerItem()->setText(0, QString());
        searchResultTree->headerItem()->setText(1, QString());
        searchResultTree->setObjectName(QString::fromUtf8("searchResultTree"));

        gridLayout->addWidget(searchResultTree, 2, 0, 1, 2);

        searchOptionBox = new QWidget(SearchDialog);
        searchOptionBox->setObjectName(QString::fromUtf8("searchOptionBox"));
        gridLayout_2 = new QGridLayout(searchOptionBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        userOption = new QCheckBox(searchOptionBox);
        userOption->setObjectName(QString::fromUtf8("userOption"));
        userOption->setChecked(false);

        gridLayout_2->addWidget(userOption, 1, 1, 1, 1);

        caseSensitiveOption = new QCheckBox(searchOptionBox);
        caseSensitiveOption->setObjectName(QString::fromUtf8("caseSensitiveOption"));

        gridLayout_2->addWidget(caseSensitiveOption, 3, 1, 1, 1);

        searchOptionsLabel = new QLabel(searchOptionBox);
        searchOptionsLabel->setObjectName(QString::fromUtf8("searchOptionsLabel"));

        gridLayout_2->addWidget(searchOptionsLabel, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 3, 1, 1);

        regexOption = new QCheckBox(searchOptionBox);
        regexOption->setObjectName(QString::fromUtf8("regexOption"));

        gridLayout_2->addWidget(regexOption, 3, 2, 1, 1);

        channelOption = new QCheckBox(searchOptionBox);
        channelOption->setObjectName(QString::fromUtf8("channelOption"));
        channelOption->setChecked(false);

        gridLayout_2->addWidget(channelOption, 1, 2, 1, 1);

        searchForLabel = new QLabel(searchOptionBox);
        searchForLabel->setObjectName(QString::fromUtf8("searchForLabel"));

        gridLayout_2->addWidget(searchForLabel, 1, 0, 1, 1);


        gridLayout->addWidget(searchOptionBox, 1, 0, 1, 2);

        QWidget::setTabOrder(searchField, toggleOptions);
        QWidget::setTabOrder(toggleOptions, searchResultTree);

        retranslateUi(SearchDialog);

        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QWidget *SearchDialog)
    {
        SearchDialog->setWindowTitle(QApplication::translate("SearchDialog", "Search", nullptr));
        searchField->setInputMask(QString());
        searchField->setPlaceholderText(QApplication::translate("SearchDialog", "Enter search String...", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        toggleOptions->setAccessibleName(QApplication::translate("SearchDialog", "Options", nullptr));
#endif // QT_NO_ACCESSIBILITY
        toggleOptions->setText(QString());
#ifndef QT_NO_TOOLTIP
        userOption->setToolTip(QApplication::translate("SearchDialog", "Whether to search for users", nullptr));
#endif // QT_NO_TOOLTIP
        userOption->setText(QApplication::translate("SearchDialog", "&Users", nullptr));
#ifndef QT_NO_TOOLTIP
        caseSensitiveOption->setToolTip(QApplication::translate("SearchDialog", "Whether the search should be performed case-sensitively", nullptr));
#endif // QT_NO_TOOLTIP
        caseSensitiveOption->setText(QApplication::translate("SearchDialog", "Case-&sensitive", nullptr));
        searchOptionsLabel->setText(QApplication::translate("SearchDialog", "Options:", nullptr));
#ifndef QT_NO_TOOLTIP
        regexOption->setToolTip(QApplication::translate("SearchDialog", "Whether the search string should be interpreted as a regular expression", nullptr));
#endif // QT_NO_TOOLTIP
        regexOption->setText(QApplication::translate("SearchDialog", "&RegEx", nullptr));
#ifndef QT_NO_TOOLTIP
        channelOption->setToolTip(QApplication::translate("SearchDialog", "Whether to search for channels", nullptr));
#endif // QT_NO_TOOLTIP
        channelOption->setText(QApplication::translate("SearchDialog", "&Channels", nullptr));
        searchForLabel->setText(QApplication::translate("SearchDialog", "Search for:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
