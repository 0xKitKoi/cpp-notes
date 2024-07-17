#include <windows.h>

void LeftClick() {  
  INPUT    Input={0};
  Input.type      = INPUT_MOUSE;
  Input.mi.dwFlags  = MOUSEEVENTF_LEFTDOWN;
  ::SendInput(1,&Input,sizeof(INPUT));

  Sleep(1);

  ::ZeroMemory(&Input,sizeof(INPUT));
  Input.type      = INPUT_MOUSE;
  Input.mi.dwFlags  = MOUSEEVENTF_LEFTUP;
  ::SendInput(1,&Input,sizeof(INPUT));
}

int main() {
	Sleep(500);
	while (GetKeyState('Q') != true) {
		LeftClick();
	}
	return 0;
}
