#include<Windows.h>
#include<Xinput.h>
#include<stdio.h>
#include<stdlib.h> 

class XBox
{
private:
	int controllerId = -1;
public:
	XBox();
	void XBox::SetState();
	XINPUT_STATE XBox::GetInput();
	void XBox::show();
};

