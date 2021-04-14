#include "bconstant.h"

extern "C" _declspec(dllexport) 

void initSchTable(intScheduleTable[SchTabLen][SchTabWdh])
{
    int i;
    for (i = 0; i != SchTabLen; i++)
    {
        //最小时间间隔为10ms

        //Off-hook detection init, every 200ms(20 unit time)
        if (i % 20 == 0)
        {
            ScheduleTable[i][0] = 1;
        }
        else
        {
            ScheduleTable[i][0] = 0;
        }

        //Pulse recognition init, every 10ms(1 unit time)
        ScheduleTable[i][1] = 1;

        //Bit interval recognition init, every 100ms(10 unit time)
        if (i % 10 == 0)
        {
            ScheduleTable[i][2] = 1;
        }
        else
        {
            ScheduleTable[i][2] = 0;
        }
    }
    return;
}