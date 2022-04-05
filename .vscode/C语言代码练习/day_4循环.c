#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
/* {
    // 1.for循环嵌套使用
    int i, j;

    for (i = 0; i < 3; ++i)

        for (j = 2; j < 5; ++j) //for循环的括号里面要用；不是，隔开。

            printf("Lalisa呀!\n", i);
    printf("rosy\n", j);

    return 0;
 } */
/*  结果输出：
Lalisa呀!
Lalisa呀!
Lalisa呀!
Lalisa呀!
Lalisa呀!
Lalisa呀!
Lalisa呀!
Lalisa呀!
Lalisa呀!
rosy */

// 2.变式
/* {
    int i, j;

    for (i = 0; i < 3; ++i)
        printf("嘻嘻\n");
        for (j = 2; j < 5; ++j)
            printf("嘿嘿!\n");
    printf("哈哈\n");
    return 0;
} */
/* 输出结果：
嘻嘻
嘻嘻
嘻嘻
嘿嘿!
嘿嘿!
嘿嘿!
哈哈 */
// 3.变式
/* {
    int i, j;

    for (i = 0; i < 3; ++i)

    {
        printf("111\n");
        for (j = 2; j < 5; ++j)
        {
            printf("222\n");
            printf("333\n");
        }
        printf("444\n");
    }
    return 0;
} */
/* 输出结果为：下面答案按顺序乘3.
111
222
333
222
333
222
333
444 */
// 4.while 实现1-100的求和
/* {
    int i;
    int sum = 0;

    i = 1;
    while (i < 101)
    {
        sum = sum + i;
        ++i;

    }
    printf("sum=%d\n", sum);
    return  0;
} */
// 4.回文数字
/* {
    int sum = 0;
    int val;
    int m;
    printf("请输入回文数字：");
    scanf("%d", &val);

    m = val;
    while (m)
    {
        sum = sum * 10 + m % 10;
        m /= 10;
    }
    if (sum == val)
        printf("yes!\n");
    else
        printf("no!\n");
    return 0;
} */
// 5.斐波拉契序列
/*  {
       int i, n;
        int f1, f2, f3;

        f1 = 1;
        f2 = 2;

        printf("请您想要求得序列：");
        scanf("%d", &n);

        if (n == 1)
        {
            f3 = 1;
        }
        else if (n == 2)
        {
            f3 = 2;
        }
        else
        {
            for (i = 3; i <= n; ++i)
            {
                f3 = f1 + f2;
                f1 = f2;
                f2 = f3;
            }
        }
        printf("%d\n", f3);
        return 0;
    } */
// 6.一元二次方程式1
/* {
    double a, b, c;
    double delta;
    double x1, x2;

    printf("请输入一元二次方程的三个系数：");
    printf("a=");
    scanf("%lf", &a);

    printf("b=");
    scanf("%lf", &b);

    printf("c=");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("有两个解,x1=%lf,x2=%lf\n", x1, x2);
    }
    else if (0 == delta)
    {
        x1 = x2 = (-b) / (2 * a);
        printf("有唯一的解,x1=x2=%lf", x1, x2);
    }
    else
    {
        printf("无实数解\n");
    }
    return 0;
} */
//变式do...while
/* {
    double a, b, c;
    double delta;
    double x1, x2;
    //char ch;
    do
    {

        printf("请请输入一元二次方程的三个系数：");
        printf("a=");
        scanf("%lf", &a);

        printf("b=");
        scanf("%lf", &b);

        printf("c=");
        scanf("%lf", &c);

        delta = b * b - 4 * a * c;

        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("有两个解,x1=%lf,x2=%lf\n", x1, x2);
        }
        else if (0 == delta)
        {
            x1 = x2 = (-b) / (2 * a);
            printf("有唯一的解,x1=x2=%lf", x1, x2);
        }
        else
        {
            printf("无实数解\n");
        }
       // printf("您想继续吗(Y/N):");
       // scanf(" %c", &ch); //%c前面必须得加一个空格

    } while (1);//while ("y"==ch || "Y"==ch);
    return 0;
} */
// 7.switch用法
/* {
    int val;

    printf("请输入你要的楼层数：");
    scanf("%d",&val);

    switch (val)
    {
    case 1:
        printf("开楼层1\n");
        break;
    case 2:
        printf("开楼层2\n");
        break;
    case 3:
        printf("开楼层3\n");
        break;
    default:
        printf("没有要打开的楼层！\n");
        break;
    }
    return 0;
} */
// 8.在多层循环中，break只能终止离它最近的Switch
/* {
    int x = 1, y = 0, a = 0, b = 0;
    switch (x)
    {
    case 1:
        switch (y)
        {
        case 0:
            a++;
            break;
        case 1:
            b++;
            break;
        }
       // b=100;
        break;
    case 2:
        a++;
        b++;
        break;
    }
    printf("%d %d\n", a, b);//输出结果为 1 0  ， 1 100
} */
/* {
    int i = 0, s = 0;
    do
    {
        if (i % 2)
        {
            i++;      //条件真执行的语句
            continue; //会跳到276行去执行
        }
        i++;          //条件假执行的语句
        s += i;
    } while (i < 5);//276
    printf("%d\n", s); //s=9

    return 0;
} */
/* {
    int a = 1, b;

    for (b = 1; b <= 10; b++)
    {
        if (a >= 8)
            break; //执行 295 printf
        if (1 == a % 2)
        {
            a += 5;
            continue; //  会跳到284执行b++
        }
        a -= 3;
    }
    printf("b=%d\n", b); //b=4
}
 */