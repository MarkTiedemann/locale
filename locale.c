#include "windows.h"
#include "stdio.h"
#include <VersionHelpers.h>

int main(void)
{
	// https://docs.microsoft.com/en-us/windows/desktop/api/versionhelpers/nf-versionhelpers-iswindowsvistaorgreater
	if (IsWindowsVistaOrGreater())
	{
		// https://docs.microsoft.com/en-us/windows/desktop/api/winnls/nf-winnls-getsystemdefaultlocalename
		WCHAR locale[LOCALE_NAME_MAX_LENGTH];
		GetUserDefaultLocaleName(locale, LOCALE_NAME_MAX_LENGTH);
		wprintf(L"{\"locale\":\"%s\"}\n", locale);
	}
	else
	{
		// https://docs.microsoft.com/en-us/windows/desktop/api/winnls/nf-winnls-getuserdefaultlcid
		printf("{\"lcid\":%d}\n", GetUserDefaultLCID());
	}
	return 0;
}
