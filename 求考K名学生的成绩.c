#include <stdio.h>

struct stu
{
    int number;
    double score;
};

int main()
{
    int n;
    struct stu a[5];
    struct stu temp;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i].number);
        scanf("%lf", &a[i].score);
    }
    scanf("%d", &n);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (a[j].score < a[j + 1].score)
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    /*     for (int i = 0; i < 5; i++)
        {
            printf("%d %.2lf\n", a[i].number, a[i].score);
        } */

    printf("%d\n", a[n - 1].number);
    printf("%.2lf", a[n - 1].score);
    return 0;
}