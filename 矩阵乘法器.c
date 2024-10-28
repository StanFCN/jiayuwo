#include <stdio.h>



int main(){
    system("chcp 65001");
    setbuf(stdout,NULL);
    int m,p,n;

    printf("矩阵乘法器:\n请输入您想计算的矩阵的行列数\n");
    printf("行数为");
    scanf("%d",&m);

    printf("列数为");
    scanf("%d",&p);

    printf("另外一个矩阵的列数为");
    scanf("%d",&n);

    int A[m][p];
    int B[p][n];
    int R[m][n];

    printf("请您输入一个%d行%d列的矩阵A:\n",m,p);
    for (int i = 0;i < m;i++) {
        for(int j = 0; j < p; j++)
            scanf("%d",&A[i][j]);
    }
    printf("请您输入一个%d行%d列的矩阵B:\n",p,n);
    for (int i = 0;i < p;i++) {
        for(int j = 0; j < n; j++)
            scanf("%d",&B[i][j]);
    }
    printf("相乘结果为:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++){
            R[i][j] = 0;//使用累加法，先将其初始化为0。
            for(int k = 0; k < p; k++) {
                R[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    //输出结果
    int row = m > p ? m : p;
    for (int i = 0; i < row; i++) {
        printf("|  ");
        for(int j = 0; j < p; j++) {
            if(i < m) {
                printf("\b%d ",A[i][j]);
                printf("|");
            }
            else {
                printf("\b\b\b   ");
            }
        }

        if (i == row/2) {
            printf(" * ");
        }
        else {
            printf("   ");
        }
        //输
        printf("|  ");
        for(int j = 0;j < n;j++) {
            if(i < p) {
                printf("\b%d ",B[i][j]);
                printf("|");
            }
            else {
                printf("\b\b\b   ");
            }
        }
        if(i == row / 2) {
            printf(" = ");
        }
        else {
            printf("   ");
        }
        //打印答案
        printf("|  ");
        for(int j =0; j < n;j++) {
            if (i < m) {
                printf("\b%d ",R[i][j]);
                printf("|");
            }
            else {
                printf("\b\b\b   ");
            }
        }
        printf("\n");
    }
    return  0;
}
