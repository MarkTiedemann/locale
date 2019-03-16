.PHONY: all
all: locale.exe

locale.exe: locale.c include/um include/shared
	cl /I include/um /I include/shared locale.c

include/um: include/um.zip
	powershell -c Expand-Archive include/um.zip -Destination include

include/shared: include/shared.zip
	powershell -c Expand-Archive include/shared.zip -Destination include

include/um.zip:
	powershell -C Compress-Archive "'C:\Program Files (x86)\Windows Kits\8.1\Include\um'" -Destination include/um.zip

include/shared.zip:
	powershell -C Compress-Archive "'C:\Program Files (x86)\Windows Kits\8.1\Include\shared'" -Destination include/shared.zip
