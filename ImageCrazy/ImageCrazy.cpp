#include<tchar.h>
#include<Windows.h>
#include<ctime>
using namespace std;
int main()
{

	HWND hwnd = GetDesktopWindow();
	HINSTANCE hShell32 = LoadLibrary(_T("SCEIMAGERESOU.dll"));//IMAGE.dll是我编译的，你也可以使用qingnse.dll
	HDC hdc = GetWindowDC(hwnd);
	srand(time(0));
	Sleep(1000);
	//POINT point;
	while (1)
	{
		for (int x = 0; x <= 1920; x += 25)
		{
			for (int y = 0; y <= 1080; y += 25)
			{
				DrawIcon(hdc, x, y, LoadIcon(hShell32, MAKEINTRESOURCE(rand() % 256)));//hShell32.dll为默认

			}

		}
		Sleep(1000);

	}
	while (1);
	return 0;

}
