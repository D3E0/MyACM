/*这题可以直接用十六进制输入，然后进行十六进制的运算，就像十进制的加法一样。
因为输入小于15位，结果超过了二进制中的32位而小于64位,用__int64(long long)的类型。
输入格式是（%I64x,%I64X）。
由于%I64X，代表输出一个无符号64位正整数，不能输出负数，所以负数的输出要做处理。
*/
#include<stdio.h>
int main()
{
    long long a,b;
    while (scanf("%I64x%I64x",&a,&b)!=EOF)
    printf(a+b<0?"-%I64X\n":"%I64X\n",a+b<0?-a-b:a+b);
    return 0;
}
