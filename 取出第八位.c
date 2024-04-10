#include <stdio.h>
int main()
{
    int a = 0b1010111100001111;
    int temp;
    temp = a;
    temp &= 0X0100;
    printf("%X\r\n", temp);
    return 0;
}
