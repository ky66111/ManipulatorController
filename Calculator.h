// Calculator : ���굽�Ƕ�ת������ѧ����
//

#pragma once
#include "ArmInfo.h"
#include "Leap.h"

#define sqr(x) ((x)*(x))
using namespace Leap;

class Calculator
{
public:
	Calculator(void);
	~Calculator(void);
	bool calculate(Vector);
	static int round(double);
	int* RadToAngle();
	double* getTheta();
	const static int thetaCount = 4;

private:
	double x2, y2, x3, y3, x4, y4;
	static double l1, l2, l3, l4, y1;
	double k, b;
	double derta1, derta2;
	double distance; //Բ�ľ�
	double theta[6];
	const static int iteTime = 6;
	Vector mPoint;

	bool validate();
	bool slipSearch(); // ���step1��ƽ��ֱ��Ѱ�ҽ�
	bool rotateSearch(); // ���step2����תֱ��Ѱ�ҽ⣨�̶���O1�е㣩
	int computeK(double kx);
	int computeB(double bx);
	void computeTheta(int step);
	void init(Vector);
};



