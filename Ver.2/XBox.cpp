#include "XBox.h"



XBox::XBox()
{
}

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

void XBox::show()
{
	if (controllerId == -1)printf("Fail:PC can not find XBOX contorller,You need to connect XBox controller\n");
	else printf("Success:The XBox controller is Successfuly connected\n");
}


