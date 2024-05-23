#include <stdio.h>
#include <string.h>
int main()
{
    /*
         int flag = 1;
        char opera;
        opera = getchar();
        while (opera != '\n')
        {
            if (flag == 1)
            {
                flag = 0;
                if (opera >= 'a' && opera <= 'z')
                {
                    opera -= 32;
                }
            }
            if (opera == ' ')
            {
                flag = 1;
            }
            putchar(opera);
            opera = getchar();
        }
    */
    // 只对首字符大写
    int flag = 1;
    char opera = getchar();
    while (opera != '\n')
    {
        if (flag == 1)
        {
            if (opera >= 'a' && opera <= 'z')
            {
                opera -= 32;
                flag = 0;
            }
        }
        putchar(opera);
        opera = getchar();
    }

    return 0;
}
