#include <stdio.h>
int main()

#define F(n) 2 * n

{
    int i = 1;
    printf("%d\r\n", F(5)); // 10
    printf("%d\r\n", F(3+2));
    return 0;
}



