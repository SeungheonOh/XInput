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
	void XBox::SetState();   //Get controller ID
	XINPUT_STATE XBox::GetInput();    //Get controller Input(base)
	bool XBox::show();      //Show current state  ,  true Success  false fail 

	void XBox::Vibrate(int leftVal, int rightVal);   //Vibreate

	void XBox::printInputGaphic();  //Print buttons input (Gaphic)
	void XBox::printInputText();    //Print buttons input (Text)

	WORD XBox::GetButtonInput();    //Return Button state (WORD)
	int XBox::GetLTriggerInput();   //Return L Trigger state (int)
	int XBox::GetRTriggerInput();   //Return R Trigger state (int)
	short XBox::GetRStickX();       //Retrun R Stick state (short)
	short XBox::GetRStickY();
	short XBox::GetLStickX();       //Return L Stick state (short)
	short XBox::GetLStickY();
};

