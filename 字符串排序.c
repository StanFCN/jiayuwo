#include <stdio.h>
#include <string.h>
#define max_lens 100
#define num_str 10

void bubble_sort(char arr[][max_lens], int n)
{
    char temp[max_lens];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main()
{
    char strings[num_str][max_lens];
    for (int i = 0; i < num_str; i++)
    {
        if (fgets(strings[i], max_lens, stdin) != NULL)
        {
            // 找到换行符并替换为字符串结束符
            char *newline = strchr(strings[i], '\n'); // 如果在字符串 str 中找到字符 c，则函数返回指向该字符的指针，如果未找到该字符则返回 NULL。
            if (newline)
            {
                *newline = '\0';
            }
        }
    }
    bubble_sort(strings, num_str);
    for (int i = 0; i < num_str; i++)
    {
        printf("%s\n", strings[i]);
    }
    return 0;
}