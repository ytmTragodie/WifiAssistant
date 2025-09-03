/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *Label;
    QComboBox *PortBox;
    QLabel *Label_2;
    QComboBox *BoderateBox;
    QLabel *Label_3;
    QComboBox *DataBitBox;
    QLabel *Label_4;
    QComboBox *StopBitBox;
    QLabel *Label_5;
    QComboBox *CheckBox;
    QLabel *Label_6;
    QComboBox *FlowControlBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *ConnectButton;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_rechex;
    QCheckBox *checkBox_timestamp;
    QPushButton *clearRecButton;
    QPushButton *saveFileButton;
    QTextEdit *textEdit;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_sendhex;
    QCheckBox *checkBox_autoNewline;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QTextEdit *textEdit_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *MainconnectLabel;
    QLabel *ReceiveByteLabel;
    QLabel *SendByteLabel;
    QLabel *SpeedLabel;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 200, 600));
        tab_1 = new QWidget();
        tab_1->setObjectName("tab_1");
        formLayoutWidget = new QWidget(tab_1);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 30, 171, 161));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        Label = new QLabel(formLayoutWidget);
        Label->setObjectName("Label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, Label);

        PortBox = new QComboBox(formLayoutWidget);
        PortBox->addItem(QString());
        PortBox->setObjectName("PortBox");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, PortBox);

        Label_2 = new QLabel(formLayoutWidget);
        Label_2->setObjectName("Label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, Label_2);

        BoderateBox = new QComboBox(formLayoutWidget);
        BoderateBox->addItem(QString());
        BoderateBox->addItem(QString());
        BoderateBox->addItem(QString());
        BoderateBox->addItem(QString());
        BoderateBox->addItem(QString());
        BoderateBox->setObjectName("BoderateBox");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, BoderateBox);

        Label_3 = new QLabel(formLayoutWidget);
        Label_3->setObjectName("Label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, Label_3);

        DataBitBox = new QComboBox(formLayoutWidget);
        DataBitBox->addItem(QString());
        DataBitBox->addItem(QString());
        DataBitBox->addItem(QString());
        DataBitBox->addItem(QString::fromUtf8("5"));
        DataBitBox->setObjectName("DataBitBox");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, DataBitBox);

        Label_4 = new QLabel(formLayoutWidget);
        Label_4->setObjectName("Label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, Label_4);

        StopBitBox = new QComboBox(formLayoutWidget);
        StopBitBox->addItem(QString());
        StopBitBox->addItem(QString());
        StopBitBox->addItem(QString());
        StopBitBox->setObjectName("StopBitBox");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, StopBitBox);

        Label_5 = new QLabel(formLayoutWidget);
        Label_5->setObjectName("Label_5");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, Label_5);

        CheckBox = new QComboBox(formLayoutWidget);
        CheckBox->addItem(QString());
        CheckBox->addItem(QString());
        CheckBox->addItem(QString());
        CheckBox->setObjectName("CheckBox");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, CheckBox);

        Label_6 = new QLabel(formLayoutWidget);
        Label_6->setObjectName("Label_6");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, Label_6);

        FlowControlBox = new QComboBox(formLayoutWidget);
        FlowControlBox->addItem(QString());
        FlowControlBox->addItem(QString());
        FlowControlBox->addItem(QString());
        FlowControlBox->setObjectName("FlowControlBox");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, FlowControlBox);

        verticalLayoutWidget = new QWidget(tab_1);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 230, 121, 61));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        ConnectButton = new QPushButton(verticalLayoutWidget);
        ConnectButton->setObjectName("ConnectButton");

        verticalLayout->addWidget(ConnectButton);

        tabWidget->addTab(tab_1, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(220, 20, 531, 231));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        checkBox_rechex = new QCheckBox(verticalLayoutWidget_2);
        checkBox_rechex->setObjectName("checkBox_rechex");

        horizontalLayout_2->addWidget(checkBox_rechex);

        checkBox_timestamp = new QCheckBox(verticalLayoutWidget_2);
        checkBox_timestamp->setObjectName("checkBox_timestamp");

        horizontalLayout_2->addWidget(checkBox_timestamp);

        clearRecButton = new QPushButton(verticalLayoutWidget_2);
        clearRecButton->setObjectName("clearRecButton");

        horizontalLayout_2->addWidget(clearRecButton);

        saveFileButton = new QPushButton(verticalLayoutWidget_2);
        saveFileButton->setObjectName("saveFileButton");

        horizontalLayout_2->addWidget(saveFileButton);

        horizontalLayout_2->setStretch(1, 20);
        horizontalLayout_2->setStretch(2, 10);
        horizontalLayout_2->setStretch(3, 10);

        verticalLayout_2->addLayout(horizontalLayout_2);

        textEdit = new QTextEdit(verticalLayoutWidget_2);
        textEdit->setObjectName("textEdit");

        verticalLayout_2->addWidget(textEdit);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(220, 280, 531, 141));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        checkBox_sendhex = new QCheckBox(verticalLayoutWidget_3);
        checkBox_sendhex->setObjectName("checkBox_sendhex");

        horizontalLayout_3->addWidget(checkBox_sendhex);

        checkBox_autoNewline = new QCheckBox(verticalLayoutWidget_3);
        checkBox_autoNewline->setObjectName("checkBox_autoNewline");

        horizontalLayout_3->addWidget(checkBox_autoNewline);

        pushButton_4 = new QPushButton(verticalLayoutWidget_3);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout_3->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(verticalLayoutWidget_3);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_3->addWidget(pushButton_3);

        horizontalLayout_3->setStretch(1, 20);
        horizontalLayout_3->setStretch(2, 10);
        horizontalLayout_3->setStretch(3, 10);

        verticalLayout_3->addLayout(horizontalLayout_3);

        textEdit_2 = new QTextEdit(verticalLayoutWidget_3);
        textEdit_2->setObjectName("textEdit_2");

        verticalLayout_3->addWidget(textEdit_2);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(220, 520, 531, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        MainconnectLabel = new QLabel(horizontalLayoutWidget_3);
        MainconnectLabel->setObjectName("MainconnectLabel");

        horizontalLayout_4->addWidget(MainconnectLabel);

        ReceiveByteLabel = new QLabel(horizontalLayoutWidget_3);
        ReceiveByteLabel->setObjectName("ReceiveByteLabel");

        horizontalLayout_4->addWidget(ReceiveByteLabel);

        SendByteLabel = new QLabel(horizontalLayoutWidget_3);
        SendByteLabel->setObjectName("SendByteLabel");

        horizontalLayout_4->addWidget(SendByteLabel);

        SpeedLabel = new QLabel(horizontalLayoutWidget_3);
        SpeedLabel->setObjectName("SpeedLabel");

        horizontalLayout_4->addWidget(SpeedLabel);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Label->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243\357\274\232", nullptr));
        PortBox->setItemText(0, QCoreApplication::translate("MainWindow", "\346\227\240", nullptr));

        Label_2->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        BoderateBox->setItemText(0, QCoreApplication::translate("MainWindow", "9600", nullptr));
        BoderateBox->setItemText(1, QCoreApplication::translate("MainWindow", "19200", nullptr));
        BoderateBox->setItemText(2, QCoreApplication::translate("MainWindow", "38400", nullptr));
        BoderateBox->setItemText(3, QCoreApplication::translate("MainWindow", "57600", nullptr));
        BoderateBox->setItemText(4, QCoreApplication::translate("MainWindow", "115200", nullptr));

        Label_3->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        DataBitBox->setItemText(0, QCoreApplication::translate("MainWindow", "8", nullptr));
        DataBitBox->setItemText(1, QCoreApplication::translate("MainWindow", "7", nullptr));
        DataBitBox->setItemText(2, QCoreApplication::translate("MainWindow", "6", nullptr));

        Label_4->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        StopBitBox->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        StopBitBox->setItemText(1, QCoreApplication::translate("MainWindow", "1.5", nullptr));
        StopBitBox->setItemText(2, QCoreApplication::translate("MainWindow", "2", nullptr));

        Label_5->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\357\274\232", nullptr));
        CheckBox->setItemText(0, QCoreApplication::translate("MainWindow", "\346\227\240", nullptr));
        CheckBox->setItemText(1, QCoreApplication::translate("MainWindow", "\345\245\207\346\240\241\351\252\214", nullptr));
        CheckBox->setItemText(2, QCoreApplication::translate("MainWindow", "\345\201\266\346\240\241\351\252\214", nullptr));

        Label_6->setText(QCoreApplication::translate("MainWindow", "\346\265\201\346\216\247\357\274\232", nullptr));
        FlowControlBox->setItemText(0, QCoreApplication::translate("MainWindow", "\346\227\240", nullptr));
        FlowControlBox->setItemText(1, QCoreApplication::translate("MainWindow", "\347\241\254\344\273\266", nullptr));
        FlowControlBox->setItemText(2, QCoreApplication::translate("MainWindow", "\350\275\257\344\273\266", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\357\274\232\346\234\252\350\277\236\346\216\245", nullptr));
        ConnectButton->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\350\223\235\347\211\231", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "WIFI", nullptr));
        checkBox_rechex->setText(QCoreApplication::translate("MainWindow", "16\350\277\233\345\210\266\346\230\276\347\244\272", nullptr));
        checkBox_timestamp->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\227\266\351\227\264\346\210\263", nullptr));
        clearRecButton->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
        saveFileButton->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\345\210\260\346\226\207\344\273\266", nullptr));
        checkBox_sendhex->setText(QCoreApplication::translate("MainWindow", "16\350\277\233\345\210\266\345\217\221\351\200\201", nullptr));
        checkBox_autoNewline->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\345\216\206\345\217\262", nullptr));
        MainconnectLabel->setText(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\357\274\232\346\234\252\350\277\236\346\216\245", nullptr));
        ReceiveByteLabel->setText(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266\357\274\2320\345\255\227\350\212\202", nullptr));
        SendByteLabel->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\357\274\2320\345\255\227\350\212\202", nullptr));
        SpeedLabel->setText(QCoreApplication::translate("MainWindow", "\351\200\237\347\216\207\357\274\2320KB/S", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
