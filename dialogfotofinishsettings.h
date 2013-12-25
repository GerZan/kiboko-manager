#ifndef DIALOGFOTOFINISHSETTINGS_H
#define DIALOGFOTOFINISHSETTINGS_H

#include <QDialog>

//http://stackoverflow.com/questions/712998/opencv-with-network-cameras

namespace Ui {
class DialogFotoFinishSettings;
}

class DialogFotoFinishSettings : public QDialog
{
    Q_OBJECT

public:
    explicit DialogFotoFinishSettings(QWidget *parent = 0);
    ~DialogFotoFinishSettings();
    QString errorImage= "noImage.png";

private:
    Ui::DialogFotoFinishSettings *ui;
};

#endif // DIALOGFOTOFINISHSETTINGS_H
