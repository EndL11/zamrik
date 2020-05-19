#include <windows.h>;
#include <tchar.h>;
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	MessageBox(NULL, _T("Podobailo Andriy!\nHello, Win32 world!"), _T("Hello from Message Box"), MB_OK);
	return 0;
}