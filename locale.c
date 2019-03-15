#include "windows.h"
#include "stdio.h"
#define BUFFER_SIZE 32

int main (void) {
	// https://docs.microsoft.com/en-us/windows/desktop/api/winnls/nf-winnls-getsystemdefaultlocalename
	WCHAR buf[BUFFER_SIZE];
	int len = GetSystemDefaultLocaleName(buf, BUFFER_SIZE);
	if (len > 0) {
		wprintf(L"%s", buf);
		return 0;
    } else {
		return 1;
	}
}
