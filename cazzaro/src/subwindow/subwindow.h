#ifndef SUBWINDOW_H
#define SUBWINDOW_H

#include <QGroupBox>
#include <QVBoxLayout>
#include <QPushButton>
#include <list>

class SubWindow : public QGroupBox
{
    Q_OBJECT

public:
    explicit SubWindow(QString title = tr("Sine Nomine"),
                       QWidget* parent = nullptr);
    ~SubWindow() = default;

public slots:
    void removeButton();
    void addButton();

private:
    QVBoxLayout* juan = new QVBoxLayout(this);
    QPushButton *button_add = new QPushButton("Add");
    QPushButton *button_remove = new QPushButton("Remove");
    std::list<QPushButton*> buttons;
};

#endif // SUBWINDOW_H:
