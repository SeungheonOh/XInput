#include "XBox.h"



XBox::XBox()
{
}


// base functions
void XBox::SetState()
{
	for (DWORD i = 0; i < XUSER_MAX_COUNT && controllerId == -1; i++)
	{
		XINPUT_STATE state;
		ZeroMemory(&state, sizeof(XINPUT_STATE));

		if (XInputGetState(i, &state) == ERROR_SUCCESS)
		{
			controllerId = i;
		}
	}
	
	
}

XINPUT_STATE XBox::GetInput()
{
	XINPUT_STATE state;
	ZeroMemory(&state, sizeof(XINPUT_STATE));
	XInputGetState(controllerId, &state);
	return state;
}

bool XBox::show()
{
	if (controllerId == -1) {
		printf("Fail:PC can not find XBOX contorller,You need to connect XBox controller\n");
		return 0;
	}
	else {
		printf("Success:The XBox controller is Successfuly connected\n"); 
		return 1;
	}
}




//Get Input functions
WORD XBox::GetButtonInput()
{
	return GetInput().Gamepad.wButtons;
}
int XBox::GetLTriggerInput()
{
	return GetInput().Gamepad.bLeftTrigger;
}
int XBox::GetRTriggerInput()
{
	return GetInput().Gamepad.bRightTrigger;
}
short XBox::GetRStickX()
{
	return GetInput().Gamepad.sThumbRX;
}
short XBox::GetRStickY()
{
	return GetInput().Gamepad.sThumbRY;
}
short XBox::GetLStickX()
{
	return GetInput().Gamepad.sThumbLX;
}
short XBox::GetLStickY()
{
	return GetInput().Gamepad.sThumbLY;
}



//Vibreate function
void XBox::Vibrate(int leftVal, int rightVal)
{
	// Create a Vibraton State
	XINPUT_VIBRATION Vibration;

	// Zeroise the Vibration
	ZeroMemory(&Vibration, sizeof(XINPUT_VIBRATION));

	// Set the Vibration Values
	Vibration.wLeftMotorSpeed = leftVal;
	Vibration.wRightMotorSpeed = rightVal;

	// Vibrate the controller
	XInputSetState(controllerId, &Vibration);
}


// print functions
void XBox::printInputGaphic()
{
	
	if (GetButtonInput() == XINPUT_GAMEPAD_A)
	{
		system("cls");
		printf("               SHOULDER                                                        SHOULDER               \n");
		printf("                                                                                                      \n");
		printf("               1 1 1                                                                                  \n");
		printf("              1     1                                                           Y                     \n");
		printf("               1 1 1                                                                                  \n");
		printf("                                                                             X     B                  \n");
		printf("                                  START             BACK                                              \n");
		printf("                                                                                *                     \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                   UP                                                                                 \n");
		printf("                                                                              1 1 1                   \n");
		printf("             LEFT     RIGHT                                                  1     1                  \n");
		printf("                                                                              1 1 1                   \n");
		printf("                  DOWN                                                                                \n");
		printf("                                                                                                      \n");

	}
	if (GetButtonInput() == XINPUT_GAMEPAD_B)
	{
		system("cls");
		printf("               SHOULDER                                                        SHOULDER               \n");
		printf("                                                                                                      \n");
		printf("               1 1 1                                                                                  \n");
		printf("              1     1                                                           Y                     \n");
		printf("               1 1 1                                                                                  \n");
		printf("                                                                             X     *                  \n");
		printf("                                  START             BACK                                              \n");
		printf("                                                                                A                     \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                   UP                                                                                 \n");
		printf("                                                                              1 1 1                   \n");
		printf("             LEFT     RIGHT                                                  1     1                  \n");
		printf("                                                                              1 1 1                   \n");
		printf("                  DOWN                                                                                \n");
		printf("                                                                                                      \n");

	}
	if (GetButtonInput() == XINPUT_GAMEPAD_Y)
	{
		system("cls");
		printf("               SHOULDER                                                        SHOULDER               \n");
		printf("                                                                                                      \n");
		printf("               1 1 1                                                                                  \n");
		printf("              1     1                                                           *                     \n");
		printf("               1 1 1                                                                                  \n");
		printf("                                                                             X     B                  \n");
		printf("                                  START             BACK                                              \n");
		printf("                                                                                A                     \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                   UP                                                                                 \n");
		printf("                                                                              1 1 1                   \n");
		printf("             LEFT     RIGHT                                                  1     1                  \n");
		printf("                                                                              1 1 1                   \n");
		printf("                  DOWN                                                                                \n");
		printf("                                                                                                      \n");

	}
	if (GetButtonInput() == XINPUT_GAMEPAD_X)
	{
		system("cls");
		printf("               SHOULDER                                                        SHOULDER               \n");
		printf("                                                                                                      \n");
		printf("               1 1 1                                                                                  \n");
		printf("              1     1                                                           Y                     \n");
		printf("               1 1 1                                                                                  \n");
		printf("                                                                             *     B                  \n");
		printf("                                  START             BACK                                              \n");
		printf("                                                                                A                     \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                   UP                                                                                 \n");
		printf("                                                                              1 1 1                   \n");
		printf("             LEFT     RIGHT                                                  1     1                  \n");
		printf("                                                                              1 1 1                   \n");
		printf("                  DOWN                                                                                \n");
		printf("                                                                                                      \n");

	}
	if (GetButtonInput() == XINPUT_GAMEPAD_DPAD_DOWN)
	{
		system("cls");
		printf("               SHOULDER                                                        SHOULDER               \n");
		printf("                                                                                                      \n");
		printf("               1 1 1                                                                                  \n");
		printf("              1     1                                                           Y                     \n");
		printf("               1 1 1                                                                                  \n");
		printf("                                                                             X     B                  \n");
		printf("                                  START             BACK                                              \n");
		printf("                                                                                A                     \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                   UP                                                                                 \n");
		printf("                                                                              1 1 1                   \n");
		printf("             LEFT     RIGHT                                                  1     1                  \n");
		printf("                                                                              1 1 1                   \n");
		printf("                   **                                                                                 \n");
		printf("                                                                                                      \n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_DPAD_UP)
	{
		system("cls");
		printf("               SHOULDER                                                        SHOULDER               \n");
		printf("                                                                                                      \n");
		printf("               1 1 1                                                                                  \n");
		printf("              1     1                                                           Y                     \n");
		printf("               1 1 1                                                                                  \n");
		printf("                                                                             X     B                  \n");
		printf("                                  START             BACK                                              \n");
		printf("                                                                                A                     \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                   **                                                                                 \n");
		printf("                                                                              1 1 1                   \n");
		printf("             LEFT     RIGHT                                                  1     1                  \n");
		printf("                                                                              1 1 1                   \n");
		printf("                  DOWN                                                                                \n");
		printf("                                                                                                      \n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_DPAD_RIGHT)
	{
		system("cls");
		printf("               SHOULDER                                                        SHOULDER               \n");
		printf("                                                                                                      \n");
		printf("               1 1 1                                                                                  \n");
		printf("              1     1                                                           Y                     \n");
		printf("               1 1 1                                                                                  \n");
		printf("                                                                             X     B                  \n");
		printf("                                  START             BACK                                              \n");
		printf("                                                                                A                     \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                   UP                                                                                 \n");
		printf("                                                                              1 1 1                   \n");
		printf("             LEFT      ***                                                   1     1                  \n");
		printf("                                                                              1 1 1                   \n");
		printf("                  DOWN                                                                                \n");
		printf("                                                                                                      \n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_DPAD_LEFT)
	{
		system("cls");
		printf("               SHOULDER                                                        SHOULDER               \n");
		printf("                                                                                                      \n");
		printf("               1 1 1                                                                                  \n");
		printf("              1     1                                                           Y                     \n");
		printf("               1 1 1                                                                                  \n");
		printf("                                                                             X     B                  \n");
		printf("                                  START             BACK                                              \n");
		printf("                                                                                A                     \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                   UP                                                                                 \n");
		printf("                                                                              1 1 1                   \n");
		printf("              **      RIGHT                                                  1     1                  \n");
		printf("                                                                              1 1 1                   \n");
		printf("                  DOWN                                                                                \n");
		printf("                                                                                                      \n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_RIGHT_THUMB)
	{
		system("cls");
		printf("               SHOULDER                                                        SHOULDER               \n");
		printf("                                                                                                      \n");
		printf("               1 1 1                                                                                  \n");
		printf("              1     1                                                           Y                     \n");
		printf("               1 1 1                                                                                  \n");
		printf("                                                                             X     B                  \n");
		printf("                                  START             BACK                                              \n");
		printf("                                                                                A                     \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                   UP                                                                                 \n");
		printf("                                                                              1 1 1                   \n");
		printf("             LEFT     RIGHT                                                  1  *  1                  \n");
		printf("                                                                              1 1 1                   \n");
		printf("                  DOWN                                                                                \n");
		printf("                                                                                                      \n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_LEFT_THUMB)
	{
		system("cls");
		printf("               SHOULDER                                                        SHOULDER               \n");
		printf("                                                                                                      \n");
		printf("               1 1 1                                                                                  \n");
		printf("              1  *  1                                                           Y                     \n");
		printf("               1 1 1                                                                                  \n");
		printf("                                                                             X     B                  \n");
		printf("                                  START             BACK                                              \n");
		printf("                                                                                A                     \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                   UP                                                                                 \n");
		printf("                                                                              1 1 1                   \n");
		printf("             LEFT     RIGHT                                                  1     1                  \n");
		printf("                                                                              1 1 1                   \n");
		printf("                  DOWN                                                                                \n");
		printf("                                                                                                      \n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_RIGHT_SHOULDER)
	{
		system("cls");
		printf("               SHOULDER                                                          ****                 \n");
		printf("                                                                                                      \n");
		printf("               1 1 1                                                                                  \n");
		printf("              1     1                                                           Y                     \n");
		printf("               1 1 1                                                                                  \n");
		printf("                                                                             X     B                  \n");
		printf("                                  START             BACK                                              \n");
		printf("                                                                                A                     \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                   UP                                                                                 \n");
		printf("                                                                              1 1 1                   \n");
		printf("             LEFT     RIGHT                                                  1     1                  \n");
		printf("                                                                              1 1 1                   \n");
		printf("                  DOWN                                                                                \n");
		printf("                                                                                                      \n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_LEFT_SHOULDER)
	{
		system("cls");
		printf("                 ****                                                          SHOULDER               \n");
		printf("                                                                                                      \n");
		printf("               1 1 1                                                                                  \n");
		printf("              1     1                                                           Y                     \n");
		printf("               1 1 1                                                                                  \n");
		printf("                                                                             X     B                  \n");
		printf("                                  START             BACK                                              \n");
		printf("                                                                                A                     \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                   UP                                                                                 \n");
		printf("                                                                              1 1 1                   \n");
		printf("             LEFT     RIGHT                                                  1     1                  \n");
		printf("                                                                              1 1 1                   \n");
		printf("                  DOWN                                                                                \n");
		printf("                                                                                                      \n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_BACK)
	{
		system("cls");
		printf("               SHOULDER                                                        SHOULDER               \n");
		printf("                                                                                                      \n");
		printf("               1 1 1                                                                                  \n");
		printf("              1     1                                                           Y                     \n");
		printf("               1 1 1                                                                                  \n");
		printf("                                                                             X     B                  \n");
		printf("                                   ***              BACK                                              \n");
		printf("                                                                                A                     \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                   UP                                                                                 \n");
		printf("                                                                              1 1 1                   \n");
		printf("             LEFT     RIGHT                                                  1     1                  \n");
		printf("                                                                              1 1 1                   \n");
		printf("                  DOWN                                                                                \n");
		printf("                                                                                                      \n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_START)
	{
		system("cls");
		printf("               SHOULDER                                                        SHOULDER               \n");
		printf("                                                                                                      \n");
		printf("               1 1 1                                                                                  \n");
		printf("              1     1                                                           Y                     \n");
		printf("               1 1 1                                                                                  \n");
		printf("                                                                             X     B                  \n");
		printf("                                  START              **                                               \n");
		printf("                                                                                A                     \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                                                                                                      \n");
		printf("                   UP                                                                                 \n");
		printf("                                                                              1 1 1                   \n");
		printf("             LEFT     RIGHT                                                  1     1                  \n");
		printf("                                                                              1 1 1                   \n");
		printf("                  DOWN                                                                                \n");
		printf("                                                                                                      \n");
	}
}

void XBox::printInputText()
{
	if (GetButtonInput() == XINPUT_GAMEPAD_A)
	{
		printf("YOU hit A Button\n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_B)
	{
		printf("YOU hit B Button\n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_Y)
	{
		printf("YOU hit Y Button\n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_X)
	{
		printf("YOU hit X Button\n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_DPAD_DOWN)
	{
		printf("YOU hit DOWN(DPad) Button\n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_DPAD_UP)
	{
		printf("YOU hit UP(DPad) Button\n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_DPAD_RIGHT)
	{
		printf("YOU hit RIGHT(DPad) Button\n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_DPAD_LEFT)
	{
		printf("YOU hit LEFT(DPad) Button\n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_RIGHT_THUMB)
	{
		printf("YOU hit RIGHT THUMB Button\n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_LEFT_THUMB)
	{
		printf("YOU hit LEFT THUMB Button\n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_RIGHT_SHOULDER)
	{
		printf("YOU hit RIGHT SHOULDER Button\n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_LEFT_SHOULDER)
	{
		printf("YOU hit LEFT SHOULDER Button\n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_START)
	{
		printf("YOU hit START Button\n");
	}
	if (GetButtonInput() == XINPUT_GAMEPAD_BACK)
	{
		printf("YOU hit BACK Button\n");
	}
}

