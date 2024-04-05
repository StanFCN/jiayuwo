// 要求 使用函数计算平方值，使用宏定义计算平方值，并总结二者的区别
/* #include <stdio.h>
#include <stdlib.h> */
/* int SQ(int y)
{
    return ((y) * (y));
}
int main()
{
    int i = 1;
    while (i <= 5)
    {
        // 1,4,9,16,25
        printf("%d^2 = %d\n", (i - 1), SQ(i++));
    }
    return 0;
} */

#define SQ(y) ((y) * (y))
int main()
{
    int i = 1;
    while (i <= 5)
    { // 这里相当于计算了1，3，5的平方
        // 进行循环 3 次，得到的是 1*1 = 1，3*3 = 9，5*5 = 25
        // SQ(i++) 宏调用 展开  ((i++)*(i++))(i先运算相乘之后得“1”，再直接加二)
        // printf("%d\r\n", i);
        printf("%d^2=%d\n", i, SQ(i++));
    }
    return 0;
}
