#pragma warning(disable:4996)

#include <stdio.h>
#include <wtypes.h>
#include <conio.h>

/*
	Source by Microsoft
	Modified For Learn by RK
	I.D.E : VS2022
*/

void FormatOutput(LPCSTR formatstring, ...) {
	int nSize = 0;
	char buff[10];
	memset(buff, 0, sizeof(buff));
	va_list args;
	va_start(args, formatstring);
	nSize = vsnprintf_s(buff, _countof(buff), _TRUNCATE, formatstring, args);
	printf("nSize: %d, buff: %s\n", nSize, buff);
	va_end(args);
}

int main() {
	FormatOutput("%s %s", "Hi", "there");
	FormatOutput("%s %s", "Hi", "there!");
	FormatOutput("%s %s", "Hi", "there!!");
	
	_getch();
	return 0;
}