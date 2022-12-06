#include <stdio.h>
#include "load.h"

int main()
{
    int menu;
    do
    {
        puts("");
        puts("1. Массив");
        puts("2. Матрица");
        puts("3. Выход");
        scanf("%d", &menu);
        puts("");
        switch (menu)
        {
            case 1:
            {
                LoadRun("array.dylib");
                break;
            }
            case 2:
            {
                LoadRun("matrix.dylib");
                break;
            }
            case 3: break;
        }
    } while (menu != 3);
    return 0;
}
