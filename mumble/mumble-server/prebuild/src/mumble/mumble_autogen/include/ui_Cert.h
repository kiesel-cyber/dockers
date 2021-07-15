/********************************************************************************
** Form generated from reading UI file 'Cert.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CERT_H
#define UI_CERT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>
#include "Cert.h"
#include "CompletablePage.h"

QT_BEGIN_NAMESPACE

class Ui_Certificates
{
public:
    QWizardPage *qwpWelcome;
    QVBoxLayout *verticalLayout;
    QLabel *qlIntroText;
    CertView *cvWelcome;
    QRadioButton *qrbQuick;
    QRadioButton *qrbCreate;
    QRadioButton *qrbImport;
    QRadioButton *qrbExport;
    CompletablePage *qwpImport;
    QGridLayout *gridLayout;
    QLabel *qlImportText;
    QLabel *qlImportFile;
    QLineEdit *qleImportFile;
    QPushButton *qpbImportFile;
    QLabel *qlPassword;
    QLineEdit *qlePassword;
    QLabel *qlPasswordNotice;
    CertView *cvImport;
    QWizardPage *qwpReplace;
    QGridLayout *gridLayout_2;
    QLabel *qlReplace;
    CertView *cvCurrent;
    CertView *cvNew;
    CompletablePage *qwpExport;
    QGridLayout *gridLayout_4;
    QLabel *qlExport;
    QLabel *qlExportFile;
    QLineEdit *qleExportFile;
    QPushButton *qpbExportFile;
    CertView *cvExport;
    CompletablePage *qwpNew;
    QGridLayout *gridLayout_3;
    QLabel *qlNewText;
    QLabel *qlName;
    QLabel *qlEmail;
    QLineEdit *qleEmail;
    QLabel *qlError;
    QLineEdit *qleName;
    QWizardPage *qwpFinish;
    QVBoxLayout *verticalLayout_2;
    QLabel *qlFinishText;

    void setupUi(QWizard *Certificates)
    {
        if (Certificates->objectName().isEmpty())
            Certificates->setObjectName(QString::fromUtf8("Certificates"));
        Certificates->resize(669, 606);
        Certificates->setWizardStyle(QWizard::ClassicStyle);
        qwpWelcome = new QWizardPage();
        qwpWelcome->setObjectName(QString::fromUtf8("qwpWelcome"));
        verticalLayout = new QVBoxLayout(qwpWelcome);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qlIntroText = new QLabel(qwpWelcome);
        qlIntroText->setObjectName(QString::fromUtf8("qlIntroText"));
        qlIntroText->setWordWrap(true);

        verticalLayout->addWidget(qlIntroText);

        cvWelcome = new CertView(qwpWelcome);
        cvWelcome->setObjectName(QString::fromUtf8("cvWelcome"));

        verticalLayout->addWidget(cvWelcome);

        qrbQuick = new QRadioButton(qwpWelcome);
        qrbQuick->setObjectName(QString::fromUtf8("qrbQuick"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("skin:actions/bookmark-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qrbQuick->setIcon(icon);
        qrbQuick->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(qrbQuick);

        qrbCreate = new QRadioButton(qwpWelcome);
        qrbCreate->setObjectName(QString::fromUtf8("qrbCreate"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("skin:actions/document-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qrbCreate->setIcon(icon1);
        qrbCreate->setIconSize(QSize(32, 32));
        qrbCreate->setChecked(true);

        verticalLayout->addWidget(qrbCreate);

        qrbImport = new QRadioButton(qwpWelcome);
        qrbImport->setObjectName(QString::fromUtf8("qrbImport"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("skin:actions/document-open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qrbImport->setIcon(icon2);
        qrbImport->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(qrbImport);

        qrbExport = new QRadioButton(qwpWelcome);
        qrbExport->setObjectName(QString::fromUtf8("qrbExport"));
        qrbExport->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("skin:actions/document-save-as.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qrbExport->setIcon(icon3);
        qrbExport->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(qrbExport);

        Certificates->setPage(0, qwpWelcome);
        qwpImport = new CompletablePage();
        qwpImport->setObjectName(QString::fromUtf8("qwpImport"));
        gridLayout = new QGridLayout(qwpImport);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qlImportText = new QLabel(qwpImport);
        qlImportText->setObjectName(QString::fromUtf8("qlImportText"));
        qlImportText->setWordWrap(true);

        gridLayout->addWidget(qlImportText, 0, 0, 1, 3);

        qlImportFile = new QLabel(qwpImport);
        qlImportFile->setObjectName(QString::fromUtf8("qlImportFile"));

        gridLayout->addWidget(qlImportFile, 1, 0, 1, 1);

        qleImportFile = new QLineEdit(qwpImport);
        qleImportFile->setObjectName(QString::fromUtf8("qleImportFile"));

        gridLayout->addWidget(qleImportFile, 1, 1, 1, 1);

        qpbImportFile = new QPushButton(qwpImport);
        qpbImportFile->setObjectName(QString::fromUtf8("qpbImportFile"));
        qpbImportFile->setIcon(icon2);

        gridLayout->addWidget(qpbImportFile, 1, 2, 1, 1);

        qlPassword = new QLabel(qwpImport);
        qlPassword->setObjectName(QString::fromUtf8("qlPassword"));

        gridLayout->addWidget(qlPassword, 2, 0, 1, 1);

        qlePassword = new QLineEdit(qwpImport);
        qlePassword->setObjectName(QString::fromUtf8("qlePassword"));
        qlePassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(qlePassword, 2, 1, 1, 1);

        qlPasswordNotice = new QLabel(qwpImport);
        qlPasswordNotice->setObjectName(QString::fromUtf8("qlPasswordNotice"));
        QFont font;
        font.setItalic(true);
        qlPasswordNotice->setFont(font);
        qlPasswordNotice->setStyleSheet(QString::fromUtf8("color:#ff0000;"));
        qlPasswordNotice->setWordWrap(true);

        gridLayout->addWidget(qlPasswordNotice, 3, 0, 1, 3);

        cvImport = new CertView(qwpImport);
        cvImport->setObjectName(QString::fromUtf8("cvImport"));

        gridLayout->addWidget(cvImport, 4, 0, 1, 3);

        Certificates->setPage(2, qwpImport);
        qwpReplace = new QWizardPage();
        qwpReplace->setObjectName(QString::fromUtf8("qwpReplace"));
        gridLayout_2 = new QGridLayout(qwpReplace);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        qlReplace = new QLabel(qwpReplace);
        qlReplace->setObjectName(QString::fromUtf8("qlReplace"));
        qlReplace->setEnabled(true);
        qlReplace->setWordWrap(true);

        gridLayout_2->addWidget(qlReplace, 0, 0, 1, 2);

        cvCurrent = new CertView(qwpReplace);
        cvCurrent->setObjectName(QString::fromUtf8("cvCurrent"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cvCurrent->sizePolicy().hasHeightForWidth());
        cvCurrent->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(cvCurrent, 1, 0, 1, 1);

        cvNew = new CertView(qwpReplace);
        cvNew->setObjectName(QString::fromUtf8("cvNew"));
        sizePolicy.setHeightForWidth(cvNew->sizePolicy().hasHeightForWidth());
        cvNew->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(cvNew, 1, 1, 1, 1);

        Certificates->setPage(4, qwpReplace);
        qwpExport = new CompletablePage();
        qwpExport->setObjectName(QString::fromUtf8("qwpExport"));
        gridLayout_4 = new QGridLayout(qwpExport);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        qlExport = new QLabel(qwpExport);
        qlExport->setObjectName(QString::fromUtf8("qlExport"));
        qlExport->setWordWrap(true);

        gridLayout_4->addWidget(qlExport, 0, 0, 1, 3);

        qlExportFile = new QLabel(qwpExport);
        qlExportFile->setObjectName(QString::fromUtf8("qlExportFile"));

        gridLayout_4->addWidget(qlExportFile, 1, 0, 1, 1);

        qleExportFile = new QLineEdit(qwpExport);
        qleExportFile->setObjectName(QString::fromUtf8("qleExportFile"));

        gridLayout_4->addWidget(qleExportFile, 1, 1, 1, 1);

        qpbExportFile = new QPushButton(qwpExport);
        qpbExportFile->setObjectName(QString::fromUtf8("qpbExportFile"));
        qpbExportFile->setIcon(icon3);

        gridLayout_4->addWidget(qpbExportFile, 1, 2, 1, 1);

        cvExport = new CertView(qwpExport);
        cvExport->setObjectName(QString::fromUtf8("cvExport"));

        gridLayout_4->addWidget(cvExport, 2, 0, 1, 3);

        Certificates->setPage(3, qwpExport);
        qwpNew = new CompletablePage();
        qwpNew->setObjectName(QString::fromUtf8("qwpNew"));
        gridLayout_3 = new QGridLayout(qwpNew);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        qlNewText = new QLabel(qwpNew);
        qlNewText->setObjectName(QString::fromUtf8("qlNewText"));
        qlNewText->setWordWrap(true);

        gridLayout_3->addWidget(qlNewText, 0, 0, 1, 2);

        qlName = new QLabel(qwpNew);
        qlName->setObjectName(QString::fromUtf8("qlName"));

        gridLayout_3->addWidget(qlName, 1, 0, 1, 1);

        qlEmail = new QLabel(qwpNew);
        qlEmail->setObjectName(QString::fromUtf8("qlEmail"));

        gridLayout_3->addWidget(qlEmail, 2, 0, 1, 1);

        qleEmail = new QLineEdit(qwpNew);
        qleEmail->setObjectName(QString::fromUtf8("qleEmail"));

        gridLayout_3->addWidget(qleEmail, 2, 1, 1, 1);

        qlError = new QLabel(qwpNew);
        qlError->setObjectName(QString::fromUtf8("qlError"));

        gridLayout_3->addWidget(qlError, 3, 1, 1, 1);

        qleName = new QLineEdit(qwpNew);
        qleName->setObjectName(QString::fromUtf8("qleName"));

        gridLayout_3->addWidget(qleName, 1, 1, 1, 1);

        Certificates->setPage(1, qwpNew);
        qwpFinish = new QWizardPage();
        qwpFinish->setObjectName(QString::fromUtf8("qwpFinish"));
        verticalLayout_2 = new QVBoxLayout(qwpFinish);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        qlFinishText = new QLabel(qwpFinish);
        qlFinishText->setObjectName(QString::fromUtf8("qlFinishText"));
        qlFinishText->setWordWrap(true);

        verticalLayout_2->addWidget(qlFinishText);

        Certificates->setPage(5, qwpFinish);
#ifndef QT_NO_SHORTCUT
        qlImportFile->setBuddy(qleImportFile);
        qlPassword->setBuddy(qlePassword);
        qlExportFile->setBuddy(qleExportFile);
        qlName->setBuddy(qleName);
        qlEmail->setBuddy(qleEmail);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(qrbQuick, qrbCreate);
        QWidget::setTabOrder(qrbCreate, qrbImport);
        QWidget::setTabOrder(qrbImport, qrbExport);
        QWidget::setTabOrder(qrbExport, qleImportFile);
        QWidget::setTabOrder(qleImportFile, qpbImportFile);
        QWidget::setTabOrder(qpbImportFile, qlePassword);
        QWidget::setTabOrder(qlePassword, qleExportFile);
        QWidget::setTabOrder(qleExportFile, qpbExportFile);
        QWidget::setTabOrder(qpbExportFile, qleName);
        QWidget::setTabOrder(qleName, qleEmail);

        retranslateUi(Certificates);

        QMetaObject::connectSlotsByName(Certificates);
    } // setupUi

    void retranslateUi(QWizard *Certificates)
    {
        Certificates->setWindowTitle(QApplication::translate("Certificates", "Certificate Management", nullptr));
        qwpWelcome->setTitle(QApplication::translate("Certificates", "Certificate Authentication", nullptr));
        qwpWelcome->setSubTitle(QApplication::translate("Certificates", "Authenticating to servers without using passwords", nullptr));
        qlIntroText->setText(QApplication::translate("Certificates", "<p>Mumble can use certificates to authenticate with servers. Using certificates avoids passwords, meaning you don't need to disclose any password to the remote site. It also enables very easy user registration and a client side friends list independent of servers.</p><p>While Mumble can work without certificates, the majority of servers will expect you to have one.</p><p>Creating a new certificate automatically is sufficient for most use cases. But Mumble also supports certificates representing trust in the users ownership of an email address. These certificates are issued by third parties. For more information see our <a href=\"http://mumble.info/certificate.php\">user certificate documentation</a>. </p>", nullptr));
#ifndef QT_NO_TOOLTIP
        cvWelcome->setToolTip(QApplication::translate("Certificates", "Current certificate", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cvWelcome->setWhatsThis(QApplication::translate("Certificates", "This is the certificate Mumble currently uses.", nullptr));
#endif // QT_NO_WHATSTHIS
        cvWelcome->setTitle(QApplication::translate("Certificates", "Current Certificate", nullptr));
        qrbQuick->setText(QApplication::translate("Certificates", "Automatic certificate creation", nullptr));
#ifndef QT_NO_TOOLTIP
        qrbCreate->setToolTip(QApplication::translate("Certificates", "Create a new certificate", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qrbCreate->setWhatsThis(QApplication::translate("Certificates", "This will create a new certificate.", nullptr));
#endif // QT_NO_WHATSTHIS
        qrbCreate->setText(QApplication::translate("Certificates", "Create a new certificate", nullptr));
#ifndef QT_NO_TOOLTIP
        qrbImport->setToolTip(QApplication::translate("Certificates", "Import certificate from file", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qrbImport->setWhatsThis(QApplication::translate("Certificates", "This will import a certificate from file.", nullptr));
#endif // QT_NO_WHATSTHIS
        qrbImport->setText(QApplication::translate("Certificates", "Import a certificate", nullptr));
#ifndef QT_NO_TOOLTIP
        qrbExport->setToolTip(QApplication::translate("Certificates", "Export Certificate", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qrbExport->setWhatsThis(QApplication::translate("Certificates", "This will export a certificate to file.", nullptr));
#endif // QT_NO_WHATSTHIS
        qrbExport->setText(QApplication::translate("Certificates", "Export current certificate", nullptr));
        qwpImport->setTitle(QApplication::translate("Certificates", "Import Certificate", nullptr));
        qwpImport->setSubTitle(QApplication::translate("Certificates", "PKCS #12 Certificate import", nullptr));
        qlImportText->setText(QApplication::translate("Certificates", "<p>Mumble can import certificates stored in PKCS #12 format. This is the format used when exporting a key from Mumble, and also when exporting keys from Firefox, Internet Explorer, Opera etc.</p><p>If the file is password protected, you will need the password to import the certificate.</p>", nullptr));
        qlImportFile->setText(QApplication::translate("Certificates", "Import from", nullptr));
#ifndef QT_NO_TOOLTIP
        qleImportFile->setToolTip(QApplication::translate("Certificates", "Filename to import from", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qleImportFile->setWhatsThis(QApplication::translate("Certificates", "This is the filename you wish to import a certificate from.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qpbImportFile->setToolTip(QApplication::translate("Certificates", "Select file to import from", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qpbImportFile->setWhatsThis(QApplication::translate("Certificates", "This opens a file selection dialog to choose a file to import a certificate from.", nullptr));
#endif // QT_NO_WHATSTHIS
        qpbImportFile->setText(QApplication::translate("Certificates", "Open...", nullptr));
        qlPassword->setText(QApplication::translate("Certificates", "Password", nullptr));
#ifndef QT_NO_TOOLTIP
        qlePassword->setToolTip(QApplication::translate("Certificates", "Password for PKCS#12 file", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qlePassword->setWhatsThis(QApplication::translate("Certificates", "This is the password for the PKCS#12 file containing your certificate.", nullptr));
#endif // QT_NO_WHATSTHIS
        qlPasswordNotice->setText(QString());
#ifndef QT_NO_TOOLTIP
        cvImport->setToolTip(QApplication::translate("Certificates", "Certificate to import", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cvImport->setWhatsThis(QApplication::translate("Certificates", "This is the certificate you are importing.", nullptr));
#endif // QT_NO_WHATSTHIS
        cvImport->setTitle(QApplication::translate("Certificates", "Certificate Details", nullptr));
        qwpReplace->setTitle(QApplication::translate("Certificates", "Replace Certificate", nullptr));
        qwpReplace->setSubTitle(QApplication::translate("Certificates", "Replace existing certificate with new certificate?", nullptr));
        qlReplace->setText(QApplication::translate("Certificates", "<p>You already have a certificate stored in Mumble, and you are about to replace it.</p>\n"
"<p>If you are upgrading to a certificate issued to you by a trusted CA and the email addresses match your current certificate, this is completely safe, and servers you connect to will automatically recognize the strong certificate for your email address.\n"
"</p>\n"
"<p>If this is not the case, you will no longer be recognized by any server you previously have authenticated with. If you haven't been registered on any server yet, this is nothing to worry about.\n"
"</p>\n"
"<p>\n"
"Are you sure you wish to replace your certificate?\n"
"</p>\n"
"", nullptr));
#ifndef QT_NO_TOOLTIP
        cvCurrent->setToolTip(QApplication::translate("Certificates", "Current certificate", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cvCurrent->setWhatsThis(QApplication::translate("Certificates", "This is the certificate Mumble currently uses. It will be replaced.", nullptr));
#endif // QT_NO_WHATSTHIS
        cvCurrent->setTitle(QApplication::translate("Certificates", "Current Certificate", nullptr));
#ifndef QT_NO_TOOLTIP
        cvNew->setToolTip(QApplication::translate("Certificates", "New certificate", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cvNew->setWhatsThis(QApplication::translate("Certificates", "This is the new certificate that will replace the old one.", nullptr));
#endif // QT_NO_WHATSTHIS
        cvNew->setTitle(QApplication::translate("Certificates", "New Certificate", nullptr));
        qwpExport->setTitle(QApplication::translate("Certificates", "Export Certificate", nullptr));
        qwpExport->setSubTitle(QApplication::translate("Certificates", "Make a backup of your certificate", nullptr));
        qlExport->setText(QApplication::translate("Certificates", "<p>If you ever lose your current certificate, which will happen if your computer suffers a hardware failure or you reinstall your machine, you will no longer be able to authenticate to any server you are registered on. It is therefore <b>mandatory</b> that you make a backup of your certificate. We strongly recommend you store this backup on removable storage, such as a USB flash drive.</p>\n"
"<p>Note that this file will not be encrypted, and if anyone gains access to it, they will be able to impersonate you, so take good care of it.</p>", nullptr));
        qlExportFile->setText(QApplication::translate("Certificates", "Export to", nullptr));
#ifndef QT_NO_TOOLTIP
        qleExportFile->setToolTip(QApplication::translate("Certificates", "Filename to export to", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qleExportFile->setWhatsThis(QApplication::translate("Certificates", "This is the filename you wish to export a certificate to.", nullptr));
#endif // QT_NO_WHATSTHIS
        qpbExportFile->setText(QApplication::translate("Certificates", "Save As...", nullptr));
#ifndef QT_NO_TOOLTIP
        cvExport->setToolTip(QApplication::translate("Certificates", "Current certificate", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cvExport->setWhatsThis(QApplication::translate("Certificates", "This is the certificate Mumble currently uses. It will be exported.", nullptr));
#endif // QT_NO_WHATSTHIS
        cvExport->setTitle(QApplication::translate("Certificates", "Certificate Details", nullptr));
        qwpNew->setTitle(QApplication::translate("Certificates", "New Certificate", nullptr));
        qwpNew->setSubTitle(QApplication::translate("Certificates", "Generate a new certificate for strong authentication", nullptr));
        qlNewText->setText(QApplication::translate("Certificates", "<p>Mumble will now generate a strong certificate for authentication to servers.</p><p>If you wish, you may provide some additional information to be stored in the certificate, which will be presented to servers when you connect. If you provide a valid email address, you can upgrade to a CA issued email certificate later on, which provides strong identification.</p>", nullptr));
        qlName->setText(QApplication::translate("Certificates", "Name", nullptr));
        qlEmail->setText(QApplication::translate("Certificates", "Email", nullptr));
#ifndef QT_NO_TOOLTIP
        qleEmail->setToolTip(QApplication::translate("Certificates", "Your email address (e.g. johndoe@mumble.info)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qleEmail->setWhatsThis(QApplication::translate("Certificates", "This is your email address. It is strongly recommended to provide a valid email address, as this will allow you to upgrade to a strong certificate without authentication problems.", nullptr));
#endif // QT_NO_WHATSTHIS
        qlError->setText(QString());
#ifndef QT_NO_TOOLTIP
        qleName->setToolTip(QApplication::translate("Certificates", "Your name (e.g. John Doe)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qleName->setWhatsThis(QApplication::translate("Certificates", "This is your name, and will be filled out in the certificate. This field is entirely optional.", nullptr));
#endif // QT_NO_WHATSTHIS
        qwpFinish->setTitle(QApplication::translate("Certificates", "Finish", nullptr));
        qwpFinish->setSubTitle(QApplication::translate("Certificates", "Certificate-based authentication is ready for use", nullptr));
        qlFinishText->setText(QApplication::translate("Certificates", "Enjoy using Mumble with strong authentication.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Certificates: public Ui_Certificates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CERT_H
