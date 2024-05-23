#include <stdio.h>

struct stu
{
    char name[11];
    int score1;
    int score2;
    int score3;
    double avg;
};

void process_student();

int main()
{
    process_student();
    return 0;
}
void process_student()
{
    int n; // number of student
    while (scanf("%d", &n) != EOF)
    {
        struct stu student[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%s %d %d %d", student[i].name, &student[i].score1, &student[i].score2, &student[i].score3);
            student[i].avg = (student[i].score1 + student[i].score2 + student[i].score3) / 3.0;
        }
        for (int i = n - 1; i > -1; i--)
        {
            if (student[i].avg >= 60)
            {
                printf("%s %d %d %d %.2lf\n", student[i].name, student[i].score1, student[i].score2, student[i].score3, student[i].avg);
            }
        }
    }
}