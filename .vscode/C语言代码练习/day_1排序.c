/* #include <stdio.h>
int main(int argc, char const *argv[])
{
    //1.对任意三个数字排序
    int a,b,c;
    int t;
    printf("请输入三个整数（中间以空格分隔）：");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    if(b<c)
    {
        t=b;
        b=c;
        c=t;
    }
    if (a<c)
    {
        t=a;
        a=c;
        c=t;
    }
    printf("%d%d%d\n", a, b, c);
    return 0;
} */
// 2.switch
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char grade;
    scanf("%c", &grade);
    switch (grade)
    {
    case 'A':
        printf(">85");
    case 'B':  //B 输出结果为 >75>65error

    case 'C':
        printf(">75");
    case 'D':
        printf(">65");
    default:
        printf("error");
    }
    return 0;
}  
