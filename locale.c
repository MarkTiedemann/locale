#include <windows.h>
#include <stdio.h>

main() {
	WCHAR locale[LOCALE_NAME_MAX_LENGTH];
	GetUserDefaultLocaleName(locale, LOCALE_NAME_MAX_LENGTH);
	fputws(locale, stdout);
}
