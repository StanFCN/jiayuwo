/* #include <stdio.h>
int main()
{
    int a = 0b1111000111111111;
    //int mask = 1 << 7;
    int bit8;
    bit8 = (a &= 0X0100);
    // bit8 = a & mask;
    printf("%d", bit8);
    return 0;
} */
#include <stdio.h>

int main()
{
    // 假设你有一个16位的二进制数，以字符串形式表示
    char binary_number[] = "0101010101010101";

    // 创建掩码，只保留第八位
    unsigned short mask = 0b10000000; // 二进制的第八位是1，其他位都是0

    // 将二进制字符串转换为对应的整数值
    unsigned short num = strtol(binary_number, NULL, 2);

    // 使用位与操作取出第八位的值
    unsigned short eighth_bit = num & mask;

    // 输出第八位的值
    printf("第八位的值是：%d\n", (eighth_bit > 0) ? 1 : 0);

    return 0;
}
