// 1.enum
/* #include<stdio.h>
enum weekday
{
Monday, Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
};

int main (void)
{

    //int day=2; day定义成int 类型不合适
    enum weekday day=Sunday;
    printf("%D\n",day);
    return 0 ;
} */
// 2.enmu例子
/* #include <stdio.h>
enum weekday
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
void f(enum weekday i)

{
    switch (i)
    {
    case 0:
        printf("Monday!\n");
        break;
    case 1:
        printf("Tuesday!\n");
        break;
    case 2:
        printf("Wednesday!\n");
        break;
    case 3:
        printf("Thursday!\n");
        break;
    case 4:
        printf("Friday!\n");
    case 5:
        printf("Saturday!\n");
        break;

    default:
        printf("Sunday!\n");
        break;
    }
}
int main(int argc, char const *argv[])
{
    f(Monday);
    return 0;
} */
// 3.进制转化
#include <stdio.h>
int main(void)

{
    int i =0xFFFFFFCA;
    printf("%d\n", i);
}
