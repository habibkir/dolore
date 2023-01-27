#include <iostream>
#include "cazzaro.h"
#include "subwindow/subwindow.h"

cazzaro::cazzaro(QWidget* parent)
{
    juan ->addWidget(addButton);
    juan ->addWidget(removeButton);
    QObject::connect(addButton, &QPushButton::clicked,
                     this, &cazzaro::addSubWindow);
    QObject::connect(removeButton, &QPushButton::clicked,
                     this, &cazzaro::removeSubWindow);
}

void cazzaro::addSubWindow() {
    SubWindowRow* r = notFullRow();
    if(!r) {
        rows.push_back(new SubWindowRow(this));
        r = rows.back();
        juan->addWidget(r);
    }
    r -> pushWindow(new SubWindow(tr("Ok"),r));
}

void cazzaro::removeSubWindow() {
    SubWindowRow* r = notEmptyRow();
    if(r) {
        QWidget* s = r->back();
        r->popWindow();
        if(r->size() == 0) {
            rows.remove(r);
            juan->removeWidget(r);
            delete r;
        }
    }
}

cazzaro::~cazzaro() = default;

