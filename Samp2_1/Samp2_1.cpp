#include "Samp2_1.h"
#include "ui_Samp2_1.h"

Samp2_1::Samp2_1(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::Samp2_1Class)
{
	ui->setupUi(this);
}

Samp2_1::~Samp2_1()
{
	delete ui;
}
