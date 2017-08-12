#include "XBox.h"
//#include"Define.h"


XBox::XBox()
{
}


// base functions
void XBox::SetControllerID()
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

XINPUT_BATTERY_INFORMATION XBox::GetBatteryInformation()
{
	XINPUT_BATTERY_INFORMATION BatteryInformation;
	ZeroMemory(&BatteryInformation, sizeof(XINPUT_BATTERY_INFORMATION));
	if (XInputGetBatteryInformation(controllerId, BATTERY_DEVTYPE_GAMEPAD, &BatteryInformation) == ERROR_SUCCESS)
	{
		return BatteryInformation;
	}
	
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
WORD XBox::GetBatteryBatteryLevel()
{
	return GetBatteryInformation().BatteryLevel;
}
WORD XBox::GetBatteryBatteryType()
{
	return GetBatteryInformation().BatteryType;
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

int XBox::GetLStickXIO()
{
	for (int i = -1; i < 2; i++)
	{

		if (i * GetLStickX() > 32767 / 2)
		{
			return i;
		}

	}
	return 0;
}

int XBox::GetLStickYIO()
{
	for (int i = -1; i < 2; i++)
	{

		if (i * GetLStickY() > 32767 / 2)
		{
			return i;
		}

	}
	return 0;
}

int XBox::GetRStickXIO()
{
	for (int i = -1; i < 2; i++)
	{

		if (i * GetRStickX() > 32767 / 2)
		{
			return i;
		}

	}
	return 0;
}

int XBox::GetRStickYIO()
{
	for (int i = -1; i < 2; i++)
	{

		if (i * GetRStickY() > 32767 / 2)
		{
			return i;
		}

	}
	return 0;
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
void XBox::PrintControllerState()
{
	while (1) {
		if (GetButtonInput() == XINPUT_GAMEPAD_A && GetLStickY() == 32767)return;
		PrintBatteryLevel();
		PrintBatteryType();
		printf("LStick   X:%d      Y:%d\n", GetLStickX(), GetLStickY());
		printf("RStick   X:%d      Y:%d\n", GetRStickX(), GetRStickY());
		printf("Triggers L:%d      R:%d\n", GetLTriggerInput(), GetRTriggerInput());                     
		PrintInputText();
		Sleep(100);
		cls
	}
}

void XBox::PrintInputGaphic()
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

void XBox::PrintInputText()
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

void XBox::PrintBatteryLevel()
{
	if (GetBatteryBatteryLevel() == BATTERY_LEVEL_EMPTY)
		printf("BatteryLevel: EMPTY\n");
	if (GetBatteryBatteryLevel() == BATTERY_LEVEL_LOW)
		printf("BatteryLevel: LOW\n");
	if (GetBatteryBatteryLevel() == BATTERY_LEVEL_MEDIUM)
		printf("BatteryLevel: MEDIUM\n");
	if (GetBatteryBatteryLevel() == BATTERY_LEVEL_FULL)
		printf("BatteryLevel: FULL\n");
}

void XBox::PrintBatteryType()
{
	if (GetBatteryBatteryType() == BATTERY_TYPE_UNKNOWN)
		printf("BatteryType: Unknown\n");
	if (GetBatteryBatteryType() == BATTERY_TYPE_DISCONNECTED)
		printf("BatteryType: DISCONNECTED\n");
	if (GetBatteryBatteryType() == BATTERY_TYPE_WIRED)
		printf("BatteryType: WIRED\n");
	if (GetBatteryBatteryType() == BATTERY_TYPE_ALKALINE)
		printf("BatteryType: ALKALINE\n");
	if (GetBatteryBatteryType() == BATTERY_TYPE_NIMH)
		printf("BatteryType: NIMH\n");
}

