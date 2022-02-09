#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , GoToCellDialog(new Ui::Widget)
{
    GoToCellDialog->setupUi(this);
}

Widget::~Widget()
{
    delete GoToCellDialog;
}

