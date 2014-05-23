#include "segmentacion.h"
#include "ui_segmentacion.h"

Segmentacion::Segmentacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Segmentacion)
{
    ui->setupUi(this);
}

Segmentacion::~Segmentacion()
{
    delete ui;
}

void Segmentacion::on_pushButton_clicked()
{
    //ABRE VENTANA CARGA ARCHIVO
    QString fileName = QFileDialog::getOpenFileName(this,
    tr("Open Image"), ".",
    tr("Image Files (*.png *.jpg *.jpeg *.bmp)"));
    imgSource= cv::imread(fileName.toAscii().data());

    //MUESTRA IMAGEN EN INTERFAZ
    QImage img= QImage((const unsigned char*)(imgSource.data),imgSource.cols,imgSource.rows,imgSource.step,QImage::Format_RGB888);//extrae imagen
    ui->label->setPixmap(QPixmap::fromImage(img));//muestra en label el video
}

void Segmentacion::on_pushButton_2_clicked()
{

    cv::Mat imgSourceGray;
    cv::Mat imgResult;//resultado del algoritmo
    cv::Mat imgBgModel;//imagen modelo del fondo
    cv::Mat imgFgmodel;//imagen modelo de los objetos
    cv::Mat imgMaskForeground;
    cv::Rect rectForeground;//contiene la muestra del foreground

    cvtColor(imgSource,imgSourceGray,CV_BGR2GRAY);

    threshold(imgSourceGray,imgMaskForeground,200,255,CV_THRESH_BINARY | CV_THRESH_OTSU);

    threshold(imgSourceGray,imgMaskForeground,200,255,0);
    imgMaskForeground.setTo(GC_PR_FGD);


    cv::grabCut(imgSource,imgMaskForeground,rectForeground,imgBgModel,imgFgmodel,1,cv::GC_INIT_WITH_MASK);

//    cv::compare(imgResult,cv::GC_PR_FGD,imgResult,cv::CMP_EQ);
//    // Generate output image
//    cv::Mat foreground(imgSource.size(),CV_8UC3,
//    cv::Scalar(255,255,255));
//    imgSource.copyTo(foreground,// bg pixels are not copied
//    imgResult);

  //  imshow("segmentacion",foreground);


}
