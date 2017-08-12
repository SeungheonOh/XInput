#include<Windows.h>
#include<Xinput.h>
#include<stdio.h>
#include<stdlib.h> 
#include"Define.h"

class XBox
{

	int controllerId = -1;
public:
	XBox();
	void XBox::SetControllerID();   //Set controller ID
	XINPUT_STATE XBox::GetInput();    //Get controller Input(base)
	XINPUT_BATTERY_INFORMATION XBox::GetBatteryInformation();    //Get controller battery information
	bool XBox::show();      //Show current state  ,  true Success  false fail 

	void XBox::Vibrate(int leftVal, int rightVal);   //Vibreate

	void XBox::PrintControllerState();
	void XBox::PrintInputGaphic();  //Print buttons input (Gaphic)
	void XBox::PrintInputText();    //Print buttons input (Text)
	void XBox::PrintBatteryLevel(); //Print battery level
	void XBox::PrintBatteryType();  //Print battery Type


	WORD XBox::GetButtonInput();    //Return Button state (WORD)
	WORD XBox::GetBatteryBatteryLevel();  //Return battery Level(WORD)
	WORD XBox::GetBatteryBatteryType();   //Retrun battery Type(WORD)
	int XBox::GetLTriggerInput();   //Return L Trigger state (int)
	int XBox::GetRTriggerInput();   //Return R Trigger state (int)
	short XBox::GetRStickX();       //Retrun R Stick state (short)
	short XBox::GetRStickY();
	short XBox::GetLStickX();       //Return L Stick state (short)
	short XBox::GetLStickY();
	int XBox::GetLStickXIO();       //Retrun L Stick state (short)
	int XBox::GetLStickYIO();
	int XBox::GetRStickXIO();       //Retrun R Stick state (short)
	int XBox::GetRStickYIO();
};

