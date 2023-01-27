#ifndef CAZZARO_H
#define CAZZARO_H

#include <QMainWindow>
#include <QScopedPointer>

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>

#include <list>

#include "subwindow/subwindow.h"

namespace Ui {
class cazzaro;
}

class SubWindowRow : public QWidget {
    Q_OBJECT
public:
    SubWindowRow (QWidget* parent = nullptr):QWidget(parent) {}

    void pushWindow(QWidget* nextWindow) {
        nextWindow->setParent(this->parentWidget());
        windows.push_back(nextWindow);
        juan -> addWidget(nextWindow);
    }
    void popWindow() {
        if(!windows.empty()) {
            QWidget* tmp = windows.back();
            juan -> removeWidget(tmp);
            windows.pop_back();
            delete tmp;
        }
    }
    int size() {
        return windows.size();
    }
    QWidget* back() {
        return windows.back();
    }
    ~SubWindowRow() {
        while(!windows.empty()) {
            QWidget* sw = windows.back();
            windows.pop_back();
            juan->removeWidget(sw);
            delete sw;
        }
        delete juan;
    }

private:
    std::list<QWidget*> windows;
    QHBoxLayout* juan = new QHBoxLayout(this);
};


class cazzaro : public QWidget
{
    Q_OBJECT

public:
    explicit cazzaro(QWidget* parent = nullptr);
    ~cazzaro() override;
    int getMaxCols();
    void setMaxCols();

public slots:
    void addSubWindow();
    void removeSubWindow();

private:
    QVBoxLayout* juan = new QVBoxLayout(this);
    QPushButton* addButton = new QPushButton("Add Subwindow");
    QPushButton* removeButton = new QPushButton("Remove Subwindow");
    std::list<SubWindowRow*> rows;
    SubWindowRow* notFullRow() {
        for(auto row : rows) {
            if(row->size() < maxCols)
                return row;
        }
        return nullptr;
    }
    SubWindowRow* notEmptyRow() {
        for(auto row : rows) {
            if(row->size() > 0)
                return row;
        }
        return nullptr;
    }
    int maxCols = 3;
};

#endif
