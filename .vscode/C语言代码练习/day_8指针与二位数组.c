// 1.多级指针
/* #include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 10;
    int *p = &i;
    int **q = &p;
    int ***r = &q;
    printf("%d\n", ***r);
    return 0;
} */
// 2.多级指针类型
/* #include <stdio.h>
void f(int **q);
void g();

int main(void)
{
    g();

    return 0;
}

void f(int **q)
{
    printf("%d", **q);  //输出结果为10
}

void g()

{
    int i = 10;
    int *p = &i;
    f(&p);
} */
// 3.把一个char组成的字符串循环右移n位，原来是“abcdefghi”如果n=2，移位后应该是“hiabcdrfgh”
#include <stdio.h>
#include <string.h>

void move(char *str, int n)
{
    int p = n % strlen(str);
    int len = strlen(str) - p;
    char temp[100];
    strcpy(temp, str + len);
    strcpy(temp + p, str);
    *(temp + len + p) = '\0';
    strcpy(str, temp);
}

int main()
{
    int n;
    char str[] = "abcdefghi";
    scanf("%d", &n);
    move(str, n);
    printf(str);  //有错误 待解决
    return 0;
}
