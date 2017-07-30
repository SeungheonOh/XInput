

#include<Windows.h>
#include<Xinput.h>
#include<stdio.h>
#include<stdlib.h>
#include"XBox.h"

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
	XBox * controller = new XBox();
	

	controller->SetState();
	controller->show();

	

	while (1)
	{
		
		if (controller->GetInput().Gamepad.wButtons == XINPUT_GAMEPAD_A)
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
		if (controller->GetInput().Gamepad.wButtons == XINPUT_GAMEPAD_B)
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
		if (controller->GetInput().Gamepad.wButtons == XINPUT_GAMEPAD_Y)
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
		if (controller->GetInput().Gamepad.wButtons == XINPUT_GAMEPAD_X)
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
		if (controller->GetInput().Gamepad.wButtons == XINPUT_GAMEPAD_DPAD_DOWN)
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
		if (controller->GetInput().Gamepad.wButtons == XINPUT_GAMEPAD_DPAD_UP)
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
		if (controller->GetInput().Gamepad.wButtons == XINPUT_GAMEPAD_DPAD_RIGHT)
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
		if (controller->GetInput().Gamepad.wButtons == XINPUT_GAMEPAD_DPAD_LEFT)			
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
		if (controller->GetInput().Gamepad.wButtons == XINPUT_GAMEPAD_RIGHT_THUMB)
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
		if (controller->GetInput().Gamepad.wButtons == XINPUT_GAMEPAD_LEFT_THUMB)
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
		if (controller->GetInput().Gamepad.wButtons == XINPUT_GAMEPAD_RIGHT_SHOULDER)
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
		if (controller->GetInput().Gamepad.wButtons == XINPUT_GAMEPAD_LEFT_SHOULDER)
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
		if (controller->GetInput().Gamepad.wButtons == XINPUT_GAMEPAD_BACK)
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
		if (controller->GetInput().Gamepad.wButtons == XINPUT_GAMEPAD_START)
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
		Sleep(100);
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
		printf("                  DOWN                                                                                \n");
		printf("                                                                                                      \n");
		
		
	}
	
}