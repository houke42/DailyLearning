#include "bconstant.h"

extern "C" _declspec(dllexport) 

void scanfor200(int linestate200[LINEMAX], int linestate[LINEMAX], UpOnnode *head1, UpOnnode *end1)
{
    int i;
    for (i = 0; i <= LINEMAX; i++)
    {
        struct UpOnnode *newNode = new struct UpOnnode;
        if (!linestate200[i] && linestate[i])
        {
            newNode->phonestate = ehandup;
        }
        if (!linestate[i] && linestate200[i])
        {
            newNode->phonestate = ehandon;
        }
        newNode->linenum = i;
        newNode->next = NULL;
        end1->next = newNode;
        end1 = newNode;
        linestate200[i] = linestate[i];
    }

    return;
}
