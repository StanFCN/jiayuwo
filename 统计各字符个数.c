#include <stdio.h>
#include <string.h>
int main()
{
    int count_blank = 0;
    int count_en = 0;
    int count_number = 0;
    int count_other = 0;
    char opera = getchar();
    while (opera != '\n')
    {
        if ((opera >= 'a' && opera <= 'z') || (opera >= 'A' && opera <= 'Z'))
        {
            count_en++;
        }
        else if (opera >= '0' && opera <= '9')
        {
            count_number++;
        }
        else if (opera == ' ')
        {
            count_blank++;
        }
        else
        {
            count_other++;
        }
        opera = getchar();
    }
    printf("字母个数：%d\n数字个数：%d\n空格个数：%d\n其他字符个数：%d", count_en, count_number, count_blank, count_other);
    return 0;
}

#include <stdio.h>

int main()
{
    int count_blank = 0;     // 空格计数
    int count_en = 0;        // 英文字母计数
    int count_number = 0;    // 数字计数
    int count_other = 0;     // 其他字符计数
    char input_string[1000]; // 假设输入字符串不超过1000个字符

    if (fgets(input_string, sizeof(input_string), stdin) != NULL)
    {
        // 遍历字符串并统计各类字符的个数
        for (int i = 0; input_string[i] != '\0' && input_string[i] != '\n'; i++)
        {
            if ((input_string[i] >= 'a' && input_string[i] <= 'z') || (input_string[i] >= 'A' && input_string[i] <= 'Z'))
            {
                count_en++;
            }
            else if (input_string[i] >= '0' && input_string[i] <= '9')
            {
                count_number++;
            }
            else if (input_string[i] == ' ')
            {
                count_blank++;
            }
            else
            {
                count_other++;
            }
        }
    }

    // 输出结果
    printf("字母个数：%d\n", count_en);
    printf("数字个数：%d\n", count_number);
    printf("空格个数：%d\n", count_blank);
    printf("其他字符个数：%d\n", count_other);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int len;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    gets(str);
    len = strlen(str);
    // printf("%d\n",len);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            count3++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            count1++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            count2++;
        }
        else
        {
            count4++;
        }
    }
    printf("字母个数：%d\n数字个数：%d\n空格个数：%d\n其他字符个数：%d", count1, count2, count3, count4);
    return 0;
}