#include <stdio.h>
#include <locale.h>
#include "Header.h"

int main()
{
    setlocale (LC_ALL,"Russian");
    int fl;
    category(fl);
    switch (fl)
    {
    case 1: pc_turning_problems(); break;
    case 2: pc_program_problems(); break;
    case 3: pc_wifi_internet_wifi_bluetooth_problems(); break;
    case 4: break;
    }
    return 0;
}
