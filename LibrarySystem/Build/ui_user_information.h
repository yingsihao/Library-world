/********************************************************************************
** Form generated from reading UI file 'user_information.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_INFORMATION_H
#define UI_USER_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_information
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *search_id_edit;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *email_edit;
    QSpacerItem *verticalSpacer;
    QLineEdit *name_edit;
    QHBoxLayout *horizontalLayout;
    QPushButton *modify_but;
    QPushButton *insert_but;
    QPushButton *delete_but;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *search_edit;
    QPushButton *search_but;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *exit_but;
    QLineEdit *phone_edit;
    QLabel *label_2;
    QLineEdit *id_edit;
    QLabel *label_8;
    QLabel *label_7;
    QLineEdit *key_edit;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *search_id_but;
    QLineEdit *level_edit;
    QTableWidget *user_table;

    void setupUi(QMainWindow *user_information)
    {
        if (user_information->objectName().isEmpty())
            user_information->setObjectName(QStringLiteral("user_information"));
        user_information->resize(850, 597);
        centralwidget = new QWidget(user_information);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(560, 50, 246, 431));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        search_id_edit = new QLineEdit(gridLayoutWidget);
        search_id_edit->setObjectName(QStringLiteral("search_id_edit"));

        horizontalLayout_3->addWidget(search_id_edit);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 2);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 6, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 9, 0, 1, 1);

        email_edit = new QLineEdit(gridLayoutWidget);
        email_edit->setObjectName(QStringLiteral("email_edit"));

        gridLayout_2->addWidget(email_edit, 7, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 11, 0, 1, 1);

        name_edit = new QLineEdit(gridLayoutWidget);
        name_edit->setObjectName(QStringLiteral("name_edit"));

        gridLayout_2->addWidget(name_edit, 6, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        modify_but = new QPushButton(gridLayoutWidget);
        modify_but->setObjectName(QStringLiteral("modify_but"));

        horizontalLayout->addWidget(modify_but);

        insert_but = new QPushButton(gridLayoutWidget);
        insert_but->setObjectName(QStringLiteral("insert_but"));

        horizontalLayout->addWidget(insert_but);

        delete_but = new QPushButton(gridLayoutWidget);
        delete_but->setObjectName(QStringLiteral("delete_but"));

        horizontalLayout->addWidget(delete_but);


        gridLayout_2->addLayout(horizontalLayout, 10, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        search_edit = new QLineEdit(gridLayoutWidget);
        search_edit->setObjectName(QStringLiteral("search_edit"));

        horizontalLayout_2->addWidget(search_edit);

        search_but = new QPushButton(gridLayoutWidget);
        search_but->setObjectName(QStringLiteral("search_but"));

        horizontalLayout_2->addWidget(search_but);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));

        gridLayout_2->addLayout(horizontalLayout_4, 12, 0, 1, 2);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        exit_but = new QPushButton(gridLayoutWidget);
        exit_but->setObjectName(QStringLiteral("exit_but"));

        horizontalLayout_5->addWidget(exit_but);


        gridLayout_2->addLayout(horizontalLayout_5, 13, 0, 1, 2);

        phone_edit = new QLineEdit(gridLayoutWidget);
        phone_edit->setObjectName(QStringLiteral("phone_edit"));

        gridLayout_2->addWidget(phone_edit, 8, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 5, 0, 1, 1);

        id_edit = new QLineEdit(gridLayoutWidget);
        id_edit->setObjectName(QStringLiteral("id_edit"));

        gridLayout_2->addWidget(id_edit, 4, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 8, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 7, 0, 1, 1);

        key_edit = new QLineEdit(gridLayoutWidget);
        key_edit->setObjectName(QStringLiteral("key_edit"));

        gridLayout_2->addWidget(key_edit, 5, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        search_id_but = new QPushButton(gridLayoutWidget);
        search_id_but->setObjectName(QStringLiteral("search_id_but"));

        horizontalLayout_6->addWidget(search_id_but);


        gridLayout_2->addLayout(horizontalLayout_6, 3, 1, 1, 1);

        level_edit = new QLineEdit(gridLayoutWidget);
        level_edit->setObjectName(QStringLiteral("level_edit"));

        gridLayout_2->addWidget(level_edit, 9, 1, 1, 1);

        user_table = new QTableWidget(centralwidget);
        if (user_table->columnCount() < 5)
            user_table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        user_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        user_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        user_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        user_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        user_table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        user_table->setObjectName(QStringLiteral("user_table"));
        user_table->setGeometry(QRect(30, 50, 511, 431));
        user_information->setCentralWidget(centralwidget);

        retranslateUi(user_information);

        QMetaObject::connectSlotsByName(user_information);
    } // setupUi

    void retranslateUi(QMainWindow *user_information)
    {
        user_information->setWindowTitle(QApplication::translate("user_information", "MainWindow", 0));
        label_4->setText(QApplication::translate("user_information", "\345\270\220\345\217\267", 0));
        label_6->setText(QApplication::translate("user_information", "\347\224\250\346\210\267\345\220\215", 0));
        label_5->setText(QApplication::translate("user_information", "\347\255\211\347\272\247", 0));
        modify_but->setText(QApplication::translate("user_information", "\344\277\256\346\224\271", 0));
        insert_but->setText(QApplication::translate("user_information", "\346\267\273\345\212\240", 0));
        delete_but->setText(QApplication::translate("user_information", "\345\210\240\351\231\244", 0));
        search_but->setText(QApplication::translate("user_information", "\347\224\250\346\210\267\345\220\215\346\220\234\347\264\242", 0));
        label->setText(QApplication::translate("user_information", "\345\270\220\345\217\267", 0));
        exit_but->setText(QApplication::translate("user_information", "\351\200\200\345\207\272", 0));
        label_2->setText(QApplication::translate("user_information", "\351\207\215\347\275\256\345\257\206\347\240\201", 0));
        label_8->setText(QApplication::translate("user_information", "\346\211\213\346\234\272", 0));
        label_7->setText(QApplication::translate("user_information", "\351\202\256\347\256\261", 0));
        search_id_but->setText(QApplication::translate("user_information", "\346\237\245\350\257\242", 0));
        QTableWidgetItem *___qtablewidgetitem = user_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("user_information", "\345\270\220\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = user_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("user_information", "\347\224\250\346\210\267\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem2 = user_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("user_information", "\351\202\256\347\256\261", 0));
        QTableWidgetItem *___qtablewidgetitem3 = user_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("user_information", "\346\211\213\346\234\272", 0));
        QTableWidgetItem *___qtablewidgetitem4 = user_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("user_information", "\347\255\211\347\272\247", 0));
    } // retranslateUi

};

namespace Ui {
    class user_information: public Ui_user_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_INFORMATION_H