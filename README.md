# Cmake teszt projekt

Mi ez az egész?

Egy teszt projekt, ami a következő eszközöket használja:

* Windows
* MinGW
* gcc
* make
* __cmake__
* gdb
* VSCode

## Lépésről lépésre:

* Másold az egész mappát egy új helyre (pl. proj_folder)
* terminálban: cmake -G "MinGW Makefiles" -S c:\projects\proj_folder -B c:\builds\build_folder
* a c:\builds\build_folder mappában: make
* a c:\builds\build_folder mappában: test.exe
* kód módosítás
* a c:\builds\build_folder mappában: make
* a c:\builds\build_folder mappában: test.exe
* stb.

Mi történt itt? A cmake program a CMakeLists.txt alapján konfigurálta a build mappát.
Többek között létrehozta a Makefile-t. A make parancs a Makefile alapján buildelte a
projektet. A cmake parancsot csak egyszer kell használni. A későbbiekben elég a make.
(általában)

## Debug VSCode-ban

* breakpoint
* Run and Debug tools
* start (gdb) Launch (Imre)
