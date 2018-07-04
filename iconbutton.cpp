#include "iconbutton.h"
#include <QVBoxLayout>

IconButton::IconButton(QWidget *parent)
    : QPushButton(parent),
      m_iconWidget(new QSvgWidget),
      m_textLabel(new QLabel)
{
    QVBoxLayout *layout = new QVBoxLayout;
    setLayout(layout);

    m_textLabel->setStyleSheet("QLabel { color: #FFFFFF; }");
    m_iconWidget->setFixedSize(32, 32);

    layout->addStretch();
    layout->addWidget(m_iconWidget, 0, Qt::AlignHCenter);
    layout->addWidget(m_textLabel, 0, Qt::AlignHCenter);
    layout->addStretch();

    setFixedSize(80, 80);
    setObjectName("IconButton");
}

void IconButton::setImage(const QString &filePath)
{
    m_iconWidget->load(filePath);
}

void IconButton::setText(const QString &text)
{
    m_textLabel->setText(text);
}
