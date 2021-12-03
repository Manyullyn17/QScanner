#ifndef SCANNERGUI_H
#define SCANNERGUI_H

#include "ui_scannergui.h"

class ScannerGUI : public QWidget, private Ui::ScannerGUI
{
    Q_OBJECT

public:
    explicit ScannerGUI(QWidget *parent = nullptr);
private slots:
    void on_startButton_clicked();
};

#endif // SCANNERGUI_H
