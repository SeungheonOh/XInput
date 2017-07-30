

#include<Windows.h>
#include<Xinput.h>
#include<stdio.h>
#include<stdlib.h>

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
int main()
{
	int controllerId = -1;

	for (DWORD i = 0; i < XUSER_MAX_COUNT && controllerId == -1; i++)
	{
		XINPUT_STATE state;
		ZeroMemory(&state, sizeof(XINPUT_STATE));

		if (XInputGetState(i, &state) == ERROR_SUCCESS)
		{
			controllerId = i;
			printf("Success:The XBox controller is Successfuly connected\n");
		}
	}
	if (controllerId == -1)
	{
		printf("Fail:PC can not find XBOX contorller,You need to connect XBox controller\n");
		return 0;
	}
	while (1)
	{
		
		XINPUT_STATE state;
		ZeroMemory(&state, sizeof(XINPUT_STATE));
		XInputGetState(controllerId, &state);
		
		if (state.Gamepad.wButtons == XINPUT_GAMEPAD_A)
		{
			system("cls");
			printf("Hit the XBox Button\n");
			printf("YOU hit A Button\n");
		}
		if (state.Gamepad.wButtons == XINPUT_GAMEPAD_B)
		{
			system("cls");
			printf("Hit the XBox Button\n");
			printf("YOU hit B Button\n");
		}
		if (state.Gamepad.wButtons == XINPUT_GAMEPAD_Y)
		{
			system("cls");
			printf("Hit the XBox Button\n");
			printf("YOU hit Y Button\n");
		}
		if (state.Gamepad.wButtons == XINPUT_GAMEPAD_X)
		{
			system("cls");
			printf("Hit the XBox Button\n");
			printf("YOU hit X Button\n");
		}
		if (state.Gamepad.wButtons == XINPUT_GAMEPAD_DPAD_DOWN)
		{
			system("cls");
			printf("Hit the XBox Button\n");
			printf("YOU hit DOWN(DPad) Button\n");
		}
		if (state.Gamepad.wButtons == XINPUT_GAMEPAD_DPAD_UP)
		{
			system("cls");
			printf("Hit the XBox Button\n");
			printf("YOU hit UP(DPad) Button\n");
		}
		if (state.Gamepad.wButtons == XINPUT_GAMEPAD_DPAD_RIGHT)
		{
			system("cls");
			printf("Hit the XBox Button\n");
			printf("YOU hit RIGHT(DPad) Button\n");
		}
		if (state.Gamepad.wButtons == XINPUT_GAMEPAD_DPAD_LEFT)			{
			system("cls");
			printf("Hit the XBox Button\n");
			printf("YOU hit LEFT(DPad) Button\n");
		}
		if (state.Gamepad.wButtons == XINPUT_GAMEPAD_RIGHT_THUMB)
		{
			system("cls");
			printf("Hit the XBox Button\n");
			printf("YOU hit RIGHT THUMB Button\n");
		}
		if (state.Gamepad.wButtons == XINPUT_GAMEPAD_LEFT_THUMB)
		{
			system("cls");
			printf("Hit the XBox Button\n");
			printf("YOU hit LEFT THUMB Button\n");
		}
		if (state.Gamepad.wButtons == XINPUT_GAMEPAD_RIGHT_SHOULDER)
		{
			system("cls");
			printf("Hit the XBox Button\n");
			printf("YOU hit RIGHT SHOULDER Button\n");
		}
		if (state.Gamepad.wButtons == XINPUT_GAMEPAD_LEFT_SHOULDER)
		{
			system("cls");
			printf("Hit the XBox Button\n");
			printf("YOU hit LEFT SHOULDER Button\n");
		}
		if (state.Gamepad.wButtons == XINPUT_GAMEPAD_START)
		{
			system("cls");
			printf("Hit the XBox Button\n");
			printf("YOU hit START Button\n");
		}
		if (state.Gamepad.wButtons == XINPUT_GAMEPAD_BACK)
		{
			system("cls");
			printf("Hit the XBox Button\n");
			printf("YOU hit BACK Button\n");
		}
	
		Sleep(100);
		
	}
	
}