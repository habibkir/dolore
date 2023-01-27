#include "subwindow.h"

SubWindow::SubWindow(QString title, QWidget* parent) :  QGroupBox(title, parent)
{
    juan ->addWidget(button_add);
    juan ->addWidget(button_remove);
    QObject::connect(button_add, &QPushButton::clicked,
                     this, &SubWindow::addButton);
    QObject::connect(button_remove, &QPushButton::clicked,
                     this, &SubWindow::removeButton);
}

void SubWindow::addButton() {
    buttons.push_back(new QPushButton("One more red nightmare"));
    juan->addWidget(buttons.back());
}

void SubWindow::removeButton() {
    if(!buttons.empty()) {
        juan->removeWidget(buttons.back());
        QPushButton* tmp = buttons.back();
        buttons.pop_back();
        delete tmp;
    }
}

