#include "main.h"
#include <stdio.h>
/*
*       void swap_int - check the code
*
*       return: always 0
*
*/
int main()
{
        int var1;
        int var2;
        var1=98;
        var2=42;
        printf("before swap the first swap:%d\n and the second swap:%d\n);
        printf("After swap the first swap:%d\n and the second swap:%d\n);
        return 0;
}
void swap_int(int *num1, int *num2)
{
        int temp;
        temp=*num1;
        *num1=*num2;
        *num2=tmp;
}
