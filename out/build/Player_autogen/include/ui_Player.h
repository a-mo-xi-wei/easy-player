/********************************************************************************
** Form generated from reading UI file 'Player.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYER_H
#define UI_PLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Player
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *videoWidget;
    QWidget *widget_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSlider *progressSlider;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *pastTimeLab;
    QLabel *label_3;
    QLabel *totalTimeLab;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *changeBtn;
    QPushButton *playBtn;
    QSlider *volumeSlider;
    QComboBox *playSpeedCmb;

    void setupUi(QWidget *Player)
    {
        if (Player->objectName().isEmpty())
            Player->setObjectName("Player");
        Player->resize(668, 472);
        QFont font;
        font.setBold(true);
        Player->setFont(font);
        Player->setWindowOpacity(1.000000000000000);
        verticalLayout = new QVBoxLayout(Player);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        videoWidget = new QWidget(Player);
        videoWidget->setObjectName("videoWidget");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(videoWidget->sizePolicy().hasHeightForWidth());
        videoWidget->setSizePolicy(sizePolicy);
        videoWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(videoWidget);

        widget_2 = new QWidget(Player);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(0, 80));
        widget_2->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(widget_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(2, 3, 641, 71));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        progressSlider = new QSlider(layoutWidget);
        progressSlider->setObjectName("progressSlider");
        progressSlider->setMaximum(999);
        progressSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(progressSlider, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(3, -1, 3, -1);
        pastTimeLab = new QLabel(layoutWidget);
        pastTimeLab->setObjectName("pastTimeLab");

        horizontalLayout->addWidget(pastTimeLab);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        totalTimeLab = new QLabel(layoutWidget);
        totalTimeLab->setObjectName("totalTimeLab");

        horizontalLayout->addWidget(totalTimeLab);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        changeBtn = new QPushButton(layoutWidget);
        changeBtn->setObjectName("changeBtn");
        changeBtn->setMinimumSize(QSize(60, 32));
        changeBtn->setMaximumSize(QSize(60, 32));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        changeBtn->setFont(font1);
        changeBtn->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(changeBtn);

        playBtn = new QPushButton(layoutWidget);
        playBtn->setObjectName("playBtn");
        playBtn->setMinimumSize(QSize(60, 32));
        playBtn->setMaximumSize(QSize(60, 32));
        playBtn->setFont(font1);
        playBtn->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(playBtn);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        volumeSlider = new QSlider(layoutWidget);
        volumeSlider->setObjectName("volumeSlider");
        volumeSlider->setMaximumSize(QSize(150, 16777215));
        volumeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(volumeSlider);

        playSpeedCmb = new QComboBox(layoutWidget);
        playSpeedCmb->setObjectName("playSpeedCmb");
        playSpeedCmb->setMinimumSize(QSize(92, 0));
        playSpeedCmb->setMaximumSize(QSize(92, 16777215));

        horizontalLayout_4->addWidget(playSpeedCmb);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        verticalLayout->addWidget(widget_2);


        retranslateUi(Player);

        QMetaObject::connectSlotsByName(Player);
    } // setupUi

    void retranslateUi(QWidget *Player)
    {
        Player->setWindowTitle(QCoreApplication::translate("Player", "Player", nullptr));
        pastTimeLab->setText(QCoreApplication::translate("Player", "00:00:00", nullptr));
        label_3->setText(QCoreApplication::translate("Player", "/", nullptr));
        totalTimeLab->setText(QCoreApplication::translate("Player", "00:00:00", nullptr));
        changeBtn->setText(QCoreApplication::translate("Player", "\345\210\207\346\215\242", nullptr));
        playBtn->setText(QCoreApplication::translate("Player", "\346\222\255\346\224\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Player: public Ui_Player {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_H
