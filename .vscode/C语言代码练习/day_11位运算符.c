#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 5;
    int j = 7;
    int k;

    // k = i & j;         //与运算  5
    // k = i | j;         //或运算 7
    // k = ~i;            //按位取反，反码运算取反加一 -6
                          //按位异或 相同为0 不同为1
    // k=i>>1;             //按位右移 ， 2 左补0
     k=i<<1;             //按位左移， 右补0
    printf("%d\n", k);

    return 0;
}
