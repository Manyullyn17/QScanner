#ifndef SCANNERGUI_H
#define SCANNERGUI_H

#include "ui_scannergui.h"

class ScannerGUI : public QWidget, private Ui::ScannerGUI
{
    Q_OBJECT

public:
    explicit ScannerGUI(QWidget *parent = nullptr);
};

#endif // SCANNERGUI_H
