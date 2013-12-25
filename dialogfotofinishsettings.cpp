#include "dialogfotofinishsettings.h"
#include "ui_dialogfotofinishsettings.h"

DialogFotoFinishSettings::DialogFotoFinishSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogFotoFinishSettings)
{
    ui->setupUi(this);
}

DialogFotoFinishSettings::~DialogFotoFinishSettings()
{
    delete ui;
}
