// Communication : ������λ���ͻ�е�ۿ�����֮�������ͨ�ţ����ڣ�
//

#pragma once
#include <Windows.h>
#include "SerialPort.h"
#include "ArmInfo.h"
#include <fstream>

enum CodeType
{
	IIICode, // ��λ�Ƕ��� eg:#1#010*
	IVCode   // ��λ�Ƕ��� eg:#1#0010* ����λ����λ��
};

class Communication
{
public:
	Communication(CodeType);
	Communication(void);
	~Communication(void);
	void send(ArmInfo*, int);
	bool checkPortState();
	void startComm();
	void stopComm();

private:
	CSerialPort mSerial;
	static HWND hWnd;
	const static UINT portNr = 9;
	const static UINT baud = 9600;
	bool portState;
	CodeType codeType;
};

