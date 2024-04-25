#include <stdio.h>
int main()
{
    int a = 5;
    if (a == 5)
    {
        label:printf("hhhhhr\r\n");
    }
    a--;
    if (a == 4)
    {
        a = 6;
        goto label;
    }

    printf("a is %d\r\n", a);
    return 0;
}