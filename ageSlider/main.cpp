#include <QApplication>
#include<QWidget>
#include<QHBoxLayout>
#include<QSpinBox>
#include<QSlider>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *w=new QWidget();
    w->setWindowTitle("Age Spin Box");
    QSpinBox *spin= new QSpinBox;
    QSlider *slider= new QSlider(Qt::Horizontal);
    spin->setRange(0,130);
    slider->setRange(0,130);
    QObject::connect(spin,SIGNAL(valueChanged(int)),slider,SLOT(setValue(int)));
    QObject::connect(slider,SIGNAL(valueChanged(int)),spin,SLOT(setValue(int)));

    spin->setValue(35);
    QHBoxLayout *layout=new QHBoxLayout;
    layout->addWidget(spin);
    layout->addWidget(slider);
    w->setLayout(layout);

    w->show();
    return a.exec();
}
