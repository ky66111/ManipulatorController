// ArmInfo : ���ڻ�е�۸����������
//

#pragma once
#include "Leap.h"
#include "Calculator.h"
using namespace Leap;
enum Object{
	null,
	position,
	grabber,
};
class ArmInfo
{
public:
	ArmInfo(void);
	~ArmInfo(void);
	
	static double L[5]; // ��е�۸������˳���

	bool updateEndPoint(Vector);
	void updateSpeed(double);
	double getSpeed();
	int checkUpdate(); // 0:δ���� 1:������� 2:ץȡ������

	Vector getEndPoint(); // ��isUpdated����
	
	void setAngles(double *theta, int size); // thetaΪ������
	int* getAngles();
	
	const static int ANGLE_COUNT = 6;
	const static int GRABBER_INIT_JOINT = 5;

	bool updateGrabber(double roll, double strength);
	const static int grabMaxAngle = 60;

private:
	double mSpeed; // ��е���˶��ٶ�
	Vector endPoint; // ��е��ĩ��λ��
	bool isPositionUpdated; // �������
	bool isGrabberUpdated; // ץȡ��״̬����
	int mAngle[6]; // �����ת���Ƕ�
	double grabStrength; // ץȡ����
	double grabberRoll; // ץȡ��������
	void init(); // ��ʼ�����ֲ���
};
