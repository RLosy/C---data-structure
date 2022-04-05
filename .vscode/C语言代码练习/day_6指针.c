//#include <stdio.h>

//指针
/* int main(int argc, char const *argv[])
{
    int *p;
    int i = 5;
    *p = i;
    printf("%d\n", *p);
    return 0;
} */

/* // 2.指针语法
int main(int argc, char const *argv[])
{
    int i = 5;
    int *p;
    int *q;
    p = &i;
    // *q = p;    //语法编译会错误 类型不一致 error

    // *q=*p;     //可以输出 5 error
     p = q;     //可以输出1432107587   q是垃圾值赋给p，p也变成垃圾值。
    printf("%d\n", *q); //24行
                        //q的空间是属于本程序的，所以本程序的可以读写q的内容，但是如果q内部是垃圾值，则本程序不能读写*q的内容，
                        //因为此时*q所代表的内存单元的控制权限并没有分配给本程序所以本程序运行到24行时会立即报错。

    return 0;
} */
// 3.经典指针程序_互换两个数字
// 1.不能完成互换功能

/* void change_1(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
    return;
}

int main(void)
{
    int a = 3;
    int b = 5;
    change_1(a, b);
    printf("a=%d,b=%d\n", a, b);
    return 0;
} */
// 2.也不能完成互换功能
/* #include <stdio.h>
void change_2(int *p, int *q)
{
    int * t; //如果要互换p和q的值，则t必须是int *，否则会出错
    t = p;
    p = q;
    q = t;
}

int main(void)
{
    int a = 3;
    int b = 5;
    change_2(&a, &b); // change_2(*p,*q);是错误的  change_2(a,b)也是错误的
    printf("a=%d,b=%d\n", a, b);
    return 0;
} */
// 3.可以完成互换的功能
/* #include <stdio.h>
void change_3(int*,int*);
int main(void)
{
    int a = 3;
    int b = 5;

    change_3(&a, &b);
    printf("a=%d,b=%d\n", a, b);

    return 0;
}
void change_3(int *a, int* b)
{
    int t;  //如果要互换*p和*q的值，则必须定义成int ，不能定义成int *，否则语法出错
    t = *a;   //p是int*，*p是int
    *a = *b;
    *b = t;
    return;
} */
// 4.如何通过修改主调函数普通变量的值
//实参必须为该普通变量的地址，形参必须为指针变量，在被调函数中通过*形参名=...的方式就可以修改主调函数的相关变量值。
#include <stdio.h>
void g(int *i, int *j);

int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 5;
    g(&a, &b);
    printf("%d  %d\n", a, b);
    return 0;
}

void g(int *i, int *j)
{

    *i = 1;
    *j = 2;
    return;
}
