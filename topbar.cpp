#include "topbar.h"
#include "iconbutton.h"
#include <QHBoxLayout>

TopBar::TopBar(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *layout = new QHBoxLayout(this);

    IconButton *newTaskBtn = new IconButton;
    newTaskBtn->setText("新建下载");
    newTaskBtn->setImage(":/images/new_enable.svg");

    IconButton *pauseBtn = new IconButton;
    pauseBtn->setText("暂停");
    pauseBtn->setImage(":/images/pause_enable.svg");

    IconButton *continueBtn = new IconButton;
    continueBtn->setText("继续");
    continueBtn->setImage(":/images/continue_enable.svg");

    IconButton *deleteBtn = new IconButton;
    deleteBtn->setText("删除");
    deleteBtn->setImage(":/images/delete_enable.svg");

    layout->addWidget(newTaskBtn);
    layout->addSpacing(10);
    layout->addWidget(pauseBtn);
    layout->addSpacing(10);
    layout->addWidget(continueBtn);
    layout->addSpacing(10);
    layout->addWidget(deleteBtn);
    layout->addStretch();

    setFixedHeight(100);

    connect(newTaskBtn, &IconButton::clicked, this, [=] { emit buttonClicked(0); });
    connect(pauseBtn, &IconButton::clicked, this, [=] { emit buttonClicked(1); });
    connect(continueBtn, &IconButton::clicked, this, [=] { emit buttonClicked(2); });
    connect(deleteBtn, &IconButton::clicked, this, [=] { emit buttonClicked(3); });
}
