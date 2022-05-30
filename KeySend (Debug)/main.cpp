#include <iostream>
#include <Windows.h>
#include <string>

struct extraKeyInfo
{
	unsigned short repeatCount;
	unsigned char scanCode;
	bool extendedKey, prevKeyState, transitionState;

	operator unsigned int()
	{
		return repeatCount | (scanCode << 16) | (extendedKey << 24) |
			(prevKeyState << 30) | (transitionState << 31);
	}
};

int main() {

	/*	Initialize program parameters	*/
	SetConsoleTitle("KeySend");

	/*	Get input	*/
	std::string AppName;
	std::string Mode;
	while (true) {
		std::cout << "Enter Application Name: ";
		std::getline(std::cin, AppName);
		std::cout << "Select Mode (PostMessage | SendMessage | CSGO1.0): ";
		std::getline(std::cin, Mode);
		if (Mode == "PostMessage" || Mode == "SendMessage" || Mode == "CSGO1.0") break;
		std::cout << "Invalid mode!" << std::endl; Sleep(3000); system("cls");
	}

	/*	Find & set window handle	*/
	LPCSTR Target_window_Name = AppName.c_str();	//	Alternative (Manual): LPCSTR Target_window_Name = "Window Name";
	HWND hWindowHandle = FindWindow(NULL, Target_window_Name);
	//	HWND ChildHandle = FindWindowEx(hWindowHandle, NULL, "AliceRunWindowClass", NULL);

	std::cout << "[Debug] hWindowHandle: " << hWindowHandle << std::endl; std::cout << std::endl;

	if (Mode == "PostMessage") {
		if (hWindowHandle) {
			std::cout << "'hWindowHandle' found" << std::endl;
			if (hWindowHandle) {
				std::cout << "'ChildHandle' found" << std::endl;
				while (true) {
					
					extraKeyInfo lParam = {};
					lParam.scanCode = MapVirtualKey(0x0D, MAPVK_VK_TO_VSC);

					lParam.repeatCount = 1;
					lParam.prevKeyState = true;
					lParam.transitionState = false;
					lParam.extendedKey = true;

					PostMessage(hWindowHandle, WM_KEYDOWN, 0x0D, lParam);
					Sleep(1000);
					lParam.repeatCount = 1;
					lParam.prevKeyState = true;
					lParam.transitionState = true;
					lParam.extendedKey = true;
					PostMessage(hWindowHandle, WM_KEYUP, 0x0D, lParam);
					Sleep(100);
				}
			}
			else std::cout << "Failed [ChildHandle]"; exit(1);
		}
		else std::cout << "Failed [hWindowHandle]"; exit(1);
	}

	else if (Mode == "SendMessage") {
		if (hWindowHandle) {
			std::cout << "'hWindowHandle' found" << std::endl;
			if (hWindowHandle) {
				std::cout << "'ChildHandle' found" << std::endl;
				while (true) {

					extraKeyInfo lParam = {};
					lParam.scanCode = MapVirtualKey(0x0D, MAPVK_VK_TO_VSC);

					lParam.repeatCount = 1;
					lParam.prevKeyState = true;
					lParam.transitionState = false;
					lParam.extendedKey = true;

					SendMessage(hWindowHandle, WM_KEYDOWN, 0x0D, lParam);
					Sleep(1000);
					lParam.repeatCount = 1;
					lParam.prevKeyState = true;
					lParam.transitionState = true;
					lParam.extendedKey = true;
					SendMessage(hWindowHandle, WM_KEYUP, 0x0D, lParam);
					Sleep(100);
				}
			}
			else std::cout << "Failed [ChildHandle]"; exit(1);
		}
		else std::cout << "Failed [hWindowHandle]"; exit(1);
	}

	else if (Mode == "CSGO1.0") {
		if (hWindowHandle) {
			std::cout << "'hWindowHandle' found" << std::endl;
			SetForegroundWindow(hWindowHandle); //	
			SetFocus(hWindowHandle);			//	Focus target window handle
			SetActiveWindow(hWindowHandle);		//
			INPUT input1;	//	SendInput() Slot 1
			INPUT input2;	//	SendInput() Slot 2
			//* WORD vkey = 0x41;
				while (true) {

					/*	Keep target window handle focused	*/
					SetFocus(hWindowHandle);
					SetActiveWindow(hWindowHandle);
					SetForegroundWindow(hWindowHandle);

					/*	Hold down 'Ctrl'	*/
					input2.type = INPUT_KEYBOARD;
					input2.ki.wScan = MapVirtualKey(0x11, MAPVK_VK_TO_VSC);
					input2.ki.time = 0;
					input2.ki.dwExtraInfo = 0;
					input2.ki.wVk = 0x11;
					input2.ki.dwFlags = 0;
					SendInput(1, &input2, sizeof(INPUT));

					/*	Hold down 'A' for  0.3s	*/
					input1.type = INPUT_KEYBOARD;
					input1.ki.wScan = MapVirtualKey(0x41, MAPVK_VK_TO_VSC);
					input1.ki.time = 0;
					input1.ki.dwExtraInfo = 0;
					input1.ki.wVk = 0x41;
					input1.ki.dwFlags = 0;
					SendInput(1, &input1, sizeof(INPUT));
					Sleep(300);
					input1.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &input1, sizeof(INPUT));

					/*	Hold down 'D' for  0.3s	*/
					input1.type = INPUT_KEYBOARD;
					input1.ki.wScan = MapVirtualKey(0x44, MAPVK_VK_TO_VSC);
					input1.ki.time = 0;
					input1.ki.dwExtraInfo = 0;
					input1.ki.wVk = 0x44;
					input1.ki.dwFlags = 0;
					SendInput(1, &input1, sizeof(INPUT));
					Sleep(300);
					input1.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &input1, sizeof(INPUT));

					/*	Hold down 'Enter' for  0.1s	*/
					input1.type = INPUT_KEYBOARD;
					input1.ki.wScan = MapVirtualKey(0x0D, MAPVK_VK_TO_VSC);
					input1.ki.time = 0;
					input1.ki.dwExtraInfo = 0;
					input1.ki.wVk = 0x0D;
					input1.ki.dwFlags = 0;
					SendInput(1, &input1, sizeof(INPUT));
					Sleep(100);
					input1.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &input1, sizeof(INPUT));

					/*	Check pause	*/
					if (GetKeyState('P') & 0x8000) {
						std::cout << "Program paused (Press 'O' to continue)" << std::endl;
						input2.ki.dwFlags = KEYEVENTF_KEYUP; //	Lift 'Ctrl' on Pause
						SendInput(1, &input2, sizeof(INPUT));
						while (true) { 
							if (GetKeyState('O') & 0x8000) {std::cout << "Program resumed" << std::endl; break;}
						}
					}
				}
			}
		else std::cout << "Failed [hWindowHandle]"; exit(1);
	}

	else { std::cout << "Invalid mode" << std::endl; exit(1); }

	return(0);
}