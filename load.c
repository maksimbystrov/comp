#include "load.h"
#include "function.h"
#include <stdio.h>
#include <windows.h>

void LoadRun(const char * const s) 
{ 
    void * lib;
    void (*fun)(void);
    lib = dlopen(s, RTLD_LAZY); //загрузка библиотеки в память;
    if (!lib) 
    {
        printf("Ошибка загрузки библиотеки '%s'\n", s);
        return;
    }
    fun = (void (*)(void))dlsym(lib, "run"); //получение указателя на функцию из библиотеки;
    if (fun == NULL) 
    {
        printf("Ошибка загрузки функции из библиотеки.\n");
    } 
    else 
    {
        fun();
    }
    dlclose(lib); //выгрузка библиотеки; 
}
