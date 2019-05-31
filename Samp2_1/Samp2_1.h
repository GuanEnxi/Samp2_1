#pragma once
#ifndef Samp2_1_H
#define Samp2_1_H

#include <QtWidgets/QMainWindow>
#include "ui_Samp2_1.h"

namespace Ui{
	class Samp2_1Class;
}

class Samp2_1 : public QMainWindow
{
	Q_OBJECT

public:
	explicit Samp2_1(QWidget *parent = Q_NULLPTR);
	~Samp2_1();

private:
	Ui::Samp2_1Class *ui;
};
#endif // !Samp2_1_H
