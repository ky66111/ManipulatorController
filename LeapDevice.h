// LeapDevice : ���ڲ���leap motion�ĸ�������
//

#pragma once
#include "Leap.h"
#include "ArmInfo.h"
#include <Windows.h>

#define OUTPUT
using namespace Leap;
using namespace std;
class MyListener : public Listener {
public:
	MyListener();
	virtual void onConnect(const Controller&);
	virtual void onFrame(const Controller&);
	void setArm(ArmInfo*);
private:
	ArmInfo *mArm;
	long long id; // ����id
	Vector jointPosition(const Frame&); // �ֲ�ĳ�ؽ�λ��
	static double AMEND_SPEED;
};

class LeapDevice
{
public:
	LeapDevice(void);
	LeapDevice(ArmInfo*);
	~LeapDevice(void);
	void start();
	void stop();
private:
	MyListener mListener;
	Controller mController;
};

