//#include <stdio.h>
// int main(int argc, char const *argv[])
//数组
/* {
    int a[5] = {1,2,3,4,5};
                            //a是数组的名字，5表示的是数组元素的个数，并且这5个元素分别用a[0] a[1]...a[4]表示
    int i ;

    for (i= 0; i<=5 ; ++i);
    printf("%d\n",a[1]);
    printf("%d\n",100);


    return 0;
} */

//把a数组的值倒过来输出
/* {
    int a[8] = {1, 2, 3, 4, 5, 6, 7,8};
    int i, j, t;

    i = 0;
    j = 7;

    while (i < j)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;

        i++;
        j--;
    }
    for (i = 0; i < 8; ++i)
        printf("%d", a[i]);  // 输出结果：8 7 6 5 4  3 2 1

    return 0;
} */
//二维数组
/* {
    int a[3][4] =
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
        };

    int i, j;
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 4; ++j)
            printf("%-5d", a[i][j]); //-5表示左对齐光标五个单位
        printf("\n");
    }
    return 0;
} */
/*   输出结果：1  2  3  4
              5  6  7  8
              9  11 12 13 */

// 1.函数
// i 和 j是形式参数 void 表示函数没有返回值
/* void max(int i, int j)
{
    if (i > j)

        printf("%d\n", i);

    else

        printf("%d\n", j);         //输出值 5 90 7
}                                      //程序先执行main 函数 a传给i，b传给j。
int main(void)
{                                   //为什么用void关键字用其他的不行？  要先定义max函数后面程序才能用
    int a, b, c, d, e, f, g;
    a = 3, b = 5, c = 9, d = 90, e = 7, f = 0;

    max(a, b);
    max(c, d);
    max(e, f);

    return 0;
} */
// 2.函数返回值
/* int f(void) //括号中的void表示该函数不能接受数据 int表示函数返回值是int类型
{
    return 10; // 像主调函数返回10。
}
/* void g(void)  //函数名前面的void表示该函数没有返回值
{
    return 10;  //error 与83行行首的void向矛盾
}
 */
/*int main(void)
{
    int j = 88;
    j = f();
    printf("%d", j);  //输出值: 10
   // j = g(); error
    return 0;
}
 */
// 3.return 的含义
/* int f()  //函数的类型看先定义的类型
{
    return 10.5;  // x最后返回的值是return 输出结果为 10.000000
}
int main(void)
{
    int i = 99;
    double x = 6.6;
    x = f();

    printf("x=%lf\n", x);

    return 0;
} */
// 4.return与break的区别

/* void f(void)
{
    int i;
    for (i = 0; i < 6; ++i)
    {
        printf("你们好!\n", f);
        // break;     //break终止循环和Switch。 输出结果为：你们好！ 我很好！
        return;       //return终止函数。 输出结果为：你们好!
    }
    printf("我很好！\n", f);
}
int main(void)
{
    f();
    return 0;
}
 */
// 5.函数的功能的多种用法
/* void max1(int i, int j)
{
    if (i > j)
        printf("%d", i);
    else
        printf("%d", j);
}
int max2(int i, int j)
{
    if (i > j)
        return i;
    if (i < j)
        return j;
}
int main(void)
{
    int a, b, c, d, e, f;
    a = 1, b = 3, c = 9, d = 0, e = -3, f = 70;

    printf("%d\n", max2(a, b));
    printf("%d\n", max2(c, d));
    printf("%d\n", max2(e, f)); //输出结果为：3 9 70

    //max1(a,b);
    //max1(c,d);
    //max1(e,f);

    return 0;
} */
// 6.判断一个数字是否是素数(只能被1或者本身的数整除)

/* int main(void)
{
    int val, i;
    scanf("%d", &val);

    for (i = 2; i < val; ++i)
    {
        if (val % i == 0)
            break;
    }
    if (i == val)
        printf("yes!\n");
    else
        printf("no!\n");
    return 0;
} */
// 7.判断一个数字是否是一个素数的另一种写法
/* #include <stdbool.h>
bool IsPrime(int val)
{
    int i;
    for (i = 2; i < val; ++i)
    {
        if (val % i == 0)
            break;
    }
    if (i == val)
        return true;
    else
        return false;
}
int main(void)
{
    int m;
    scanf("%d", &m);
    if (IsPrime(m))
        printf("yes!\n");
    else
        printf("no!\n");
    return 0;
} */
// 8.复习函数return返回主函数输出值

/* int f (int i)
{
return 10;
}

int main(void)
{
    float i=99.9;
    printf("%f\n",i); //最终输出结果：99.900002  float和double都不能保证可以把所有的实数准确的保存在计算机中
    i=f(5);
    printf("%f\n",i);//输出结果：10.000000

    return 0;
} */
// 9.程序运行的顺序（一定要明白该程序为什么是错的以及如何改正）
/* //void f(void);
void g(void)
{
    f(); //因为函数f的定义放在了调用符f语句的后面，所以语法出错 。可以在前面第一行声明就可以
}
void f(void)
{
    printf("哈哈哈哈！\n");
}

int main(void)
{
    g();

    return 0;
}
  */
// 10.求1到某个数字之间的所有的素数，并将其输出用单独的函数来实现，代码的可重用性高
//（只用main有局限性代码,代码重用性不高不容易理解）
/* int main(void)
{
    int i, j, val;

    scanf("%d", &val);

    for (i = 2; i <= val; ++i)
    {
        //判断是否为素数，是就输出，不是不输出
        for (j = 2; j < i; ++j)
        {
            if (0 == i % j)
                break;
        }
        if (j == i)
            printf("%d\n", i);
    }
    return 0;
} */
// 11.如何合理设计函数输出1-100之间的素数
//（用一个函数来判断优点是代码的可重用性比上一个高好理解一点，但是可重用性还不是很高比如到1-10000）
/* #include <stdbool.h>

bool IsPrime(int m)
{
    int i;
    for (i = 2; i < m; ++i)
    {
        if (0 == m % i) //是m % i不然就错了
            break;
    }
    if (i == m)
        return true;
    else
        return false;
}

int main(void)
{
    int i, val;

    scanf("%d", &val);
    for (i = 2; i <= val; ++i)
    {
        if (IsPrime(i))
            printf("%d\n", i);
    }
    return 0;
} */
// 12.//结合两个函数输出1-n之间的素数
/* #include <stdbool.h>
bool IsPrime(int m)
{
    int i;
    for (i = 2; i < m; ++i)
    {
        if (0 == m % i) //是m % i不然就错了
            break;
    }
    if (i == m)
        return true;
    else
        return false;
}
//本函数的功能是把1-n之间的所有素数在显示器上输出
void TraverseVal(int n)
{
    int i;
    for (i = 2; i <= n; ++i)
    {
        if (IsPrime(i))
            printf("%d\n", i);
    }
}
int main(void)
{
    int val;
    int i;
    scanf("%d", &val);
    TraverseVal(val);
    return 0;
} */
// 13.函数变量的作用和存储方式
//该程序是错的需要把void g()定义的放在int k后面程序才能执行 同时给符f的参数太多程序无法执行(待解决)
/* #include <stdio.h>
int k = 1000;
void g()
{
    printf("k=%d\n", k);
}
// int k = 1000;  不能放在这里
void f(void)
{
    g();
    printf("k=%d\n", k);
}

int main(void)
{
    f();
    return 0;
}
*/
//13.换格式书写
/* #include <stdio.h>
#define k 1000
void f();
void g();

int main()
{
    f(8);
    return 0;
}

void f(void)
{
    g();
    printf("k=%d\n", k);
}
void g()
{
    printf("k=%d\n", k);
} */

// 14.全局变量与局部变量
/* #include <stdio.h>
int i = 999;
void f(int i)          //在一个函数的内部如果定义的局部变量的名字和全局变量名一样时，局部变量会屏蔽掉全局变量。
{
    printf("i=%d\n", i);  //输出结果为：8
}

int main(int argc, char const *argv[])
{
    f(8);
    return 0;
}
 */
