#include <stdio.h>
#include <string.h>

#define MAX_LENS 81

int main()
{
    char str[MAX_LENS];
    int offset;
    int lens = 0;
    gets(str);
    while (str[lens] != '\0')
    {
        lens++;
    }
    scanf("%d", &offset);
    if (offset <= 0)
    {
        printf("Invalid.\n");
    }
    else
    {
        for (int i = 0; i < lens; i++)
        {
            char op = str[i];
            if (op <= 'z' && op >= 'a')
            {
                op = (op - 'a' + offset) % 26 + 'a';
            }
            if (op <='Z' && op >= 'A')
            {
                op = (op - 'A' + offset) % 26 + 'A';
            }
            str[i] = op;
        }
        printf("%s\n", str);
    }
    
    return 0;
}// cannt pass




#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char ch[81];
    int of;
    gets(ch);
    scanf("%d", &of);
    if (of != 0 && of > 0)
    {
        of %= 26;
        for (int i = 0; i < strlen(ch); i++)
        {
            if (isalpha(ch[i]))
            {
                if (ch[i] >= 65 && ch[i] <= 90)
                {
                    if (ch[i] + of >= 65 && ch[i] + of <= 90)
                        ch[i] += of;
                    else if (ch[i] + of > 90)
                        ch[i] = ch[i] + of - 26;
                    // else if(ch[i]+of<65) ch[i]=ch[i]+of+26;
                }
                if (ch[i] >= 97 && ch[i] <= 122)
                {
                    if (ch[i] + of >= 97 && ch[i] + of <= 122)
                        ch[i] += of;
                    else if (ch[i] + of > 122)
                        ch[i] = ch[i] + of - 26;
                    // else if(ch[i]+of<97) ch[i]=ch[i]+of+26;
                }
            }
            printf("%c", ch[i]);
        }
    }
    else
    {
        printf("Invalid.");
    }
    return 0;
}//pass