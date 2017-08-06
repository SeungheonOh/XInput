

#include<Windows.h>
#include<Xinput.h>
#include<stdio.h>
#include<stdlib.h>
#include"XBox.h"

#define cls system("cls");
#define sleep Sleep(500);

#pragma comment(lib, "XInput.lib") 


//XINPUT_GAMEPAD_DPAD_UP          0x00000001
//XINPUT_GAMEPAD_DPAD_DOWN        0x00000002
//XINPUT_GAMEPAD_DPAD_LEFT        0x00000004
//XINPUT_GAMEPAD_DPAD_RIGHT       0x00000008
//XINPUT_GAMEPAD_START            0x00000010
//XINPUT_GAMEPAD_BACK             0x00000020
//XINPUT_GAMEPAD_LEFT_THUMB       0x00000040
//XINPUT_GAMEPAD_RIGHT_THUMB      0x00000080
//XINPUT_GAMEPAD_LEFT_SHOULDER    0x0100
//XINPUT_GAMEPAD_RIGHT_SHOULDER   0x0200
//XINPUT_GAMEPAD_A                0x1000
//XINPUT_GAMEPAD_B                0x2000
//XINPUT_GAMEPAD_X                0x4000
//XINPUT_GAMEPAD_Y                0x8000

//L Stick X max 32767
//L Stick X min -32768
//L Stick Y max 32767
//L Stick Y min -32768

//R Stick X max 32767
//R Stick X min -32768
//R Stick Y max 32767
//R Stick Y min -32768
int main()
{
	XBox * controller = new XBox();
	

	controller->SetState();
	if (controller->show() == false)return 0;
	sleep

	
	while (1){
		printf("LStick   X:%d      Y:%d\n", controller->GetLStickX(), controller->GetLStickY());
		printf("RStick   X:%d      Y:%d\n", controller->GetRStickX(), controller->GetRStickY());
		printf("Triggers L:%d      R:%d\n", controller->GetLTriggerInput(), controller->GetRTriggerInput());
		controller->printInputText();
		Sleep(100);
		cls
	}
	
}




