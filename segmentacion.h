#ifndef SEGMENTACION_H
#define SEGMENTACION_H

#include <QVector>
#include <QThread>
#include<QFileDialog>
#include <QMainWindow>
#include <stdio.h>
#include <stdlib.h>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

namespace Ui {
class Segmentacion;
}

class Segmentacion : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Segmentacion(QWidget *parent = 0);
    ~Segmentacion();

    //imagenes
    cv::Mat imgSource;//imagen de entrada
    cv::Mat imgOutput;//imagen de salida

    //manejo de archivos
    QString fileName; // Ruta y nombre del archivo
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Segmentacion *ui;
};

#endif // SEGMENTACION_H
