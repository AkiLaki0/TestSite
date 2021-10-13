#include <stdio.h>
#include "load_lib.h"
#include <dflcn.h>
#include "func_prot.h"
void LoadRun(const char * const s) {
    int *lib;
    void (*fun)(void);
    lib = dlopen(s, RTLD_LAZY); //загрузка библиотеки в память;
    if (!lib) {
        printf("Can not open library '%s'\n", s);
        return;
    }
    fun = (void (*)(void)) dlsym(lib, "func"); //получение указателя на функцию из библиотеки;
    if (fun == NULL) {
        printf("Can not load function func\n");
    } else {
        fun();
    }
    dlclose(lib); //выгрузка библиотеки;}
}

