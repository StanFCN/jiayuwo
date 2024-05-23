#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *My_strcat(char *str1, char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    //分配内存
    char *result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    char *temp = result;//temp -> result
    while (*str1)
    {
        *temp++ = *str1++;
    }
    while (*str2)
    {
        *temp++ = *str2++;
    }
    *temp = '\0';
    return result;
}

int main()
{
    char str1[41];
    char str2[41];
    gets(str1);
    gets(str2);
    char *result = My_strcat(str1, str2);
    printf("%s\n", result);
    free(result);
    return 0;
}