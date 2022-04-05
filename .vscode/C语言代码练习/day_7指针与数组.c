// 1.方法一.确定一个一维数组需要的2个参数及其原因
/* #include <stdio.h>
void f();
int main(void)
{
    int a[5] = {
        1,
        2,
        3,
        4,
        5,
    };
    int b[6] = {-1, -2, -3, -4, -5, -6};
    int c[100] = {1, 9, 2, -3};

    f(a, 5); // a是 int*
    f(b, 6);
    f(c, 6);

    return 0;
}

void f(int *pArr, int len)
{
    int i;
    for (i = 0; i < len; ++i)

        printf("%d", *(pArr + i)); //*pArr *（pArr+1）*(pArr+2)
    printf("%d\n");
    return;
} */

//方法二.确定一个一维数组需要的2个参数及其原因
//一定要明白 43行的pArr和35和37的a[3]是同一个变量

/* #include <stdio.h>
//void f(int *pArr, int len);


void f(int *pArr, int len)
{
    pArr[3] = 88; // 43
}


int main(void)
{
    int a[6] = {1, 2, 4, 5, 6, 7};
    printf("%d\n", a[3]); // 35
    f(a, 6);
    printf("%d\n", a[3]); // 37
    return 0;
} */
//方法三.确定一个一维数组需要的2个参数及其原因

/* #include <stdio.h>
// void f(int *pArr, int len);
void f(int *pArr, int len)
{
    int i;
    for (i = 0; i < len; ++i)
        printf("%d",pArr[i]); // *(pArr+i)等价于pArr[i]也等价于b[i]也等价于*（b+i）
    printf("\n");
}
int main(void)
{
    int b[5] = {-1, -3, 8, 9, 7};
    f(b, 5);
    //b[i];

    return 0;
}
 */
/* #include <stdio.h>
void outArr(int *pArr, int len)
{
    int i;
    for (i = 0; i < len; ++i)
        printf("%d\n", pArr[i]);
}
int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};

    // printf("%d\n",a[2]);

    outArr(a, 5);

    printf("%d\n", a[2]);

    return 0;
} */
// 5.指针变量的运算
/* int main(int argc, char const *argv[])
{
    int i = 5;
    int j = 10;
    int *p = &i;
    int *q = &j;
    int a[5];
    p = &a[1];
    q = &a[4];
    printf("p和q的所指向单元相隔%d个单元", q-p); //p和q的所指向单元相隔3个单元
    return 0;
}
 */

// 6.一个指针变量到底占几个字节
// 64位 一字节等于8bit 1bit可以表示一根线 8字节等于64bit
// 32位 输出 4 4 4

/* #include <stdint.h>

int main(void)
{
    char ch = 'A';
    int i = 9;
    double x = 66.6;
    char *p = &ch;
    char *q = &i;
    int *r = &x;
    printf("%d %d %d\n", sizeof(p), sizeof(q), sizeof(r));//输出结果:8 8 8
    return 0;
}
 */
// 7.malloc 是 memory(内存)allocate(分配)的缩写
/* #include<stdint.h>
#include<malloc.h>     //不能省


int main(int argc, char const *argv[])
{
    int i =5; //分配了4个字节 静态分配 133行
    int *p =(int *)malloc(4);  //134行  形参接收的是分配的地址字节

    /*
        1.要使用malloc函數，必須添加malloc.h这个头文件
        2.malloc函数只有一个形参，并且形参是整形
        3.4表示请求系统为本程序分配4个字节
        4.malloc函数只能返回第一个字节的地址
        5.12行分配了8个字节，p变量占个字节，p所指向的内存也占4个字节
        6.p本身所占的内存是静态分配的，p所指向的内存是动态分配的
     */
/*
*p  =5;//*p代表的就是一个int变量，只不过*p这个整型的内存分配方式和133行的i变量内存分配方式不同。
free(p); //free(p)表示把p所指向的内存个释放掉 p本身的内存是静态的，不能由程序手动释放掉，p本身的内存只能在p变量所在的函数运行终止由系统自动释放。
printf("你们好!\n");
return 0;
} */

// 8.malloc 的用法续写
/* #include <stdio.h>
#include <malloc.h>
void f();

int main(int argc, char const *argv[])
{
    int *p = (int *)malloc(sizeof(int)); // sizeof(int)返回值是int所占的字节数
    *p = 10;
    printf("%d\n", *p);
    f(p);
    printf("%d\n", *p); //162行
    return 0;
}

void f(int *q) //拷贝 *p=*q
{
    //*p=200 ;   error
    // q=200;
    //**q=200;
    *q = 200;
    // free(q);  把q所指向的内存释放掉了 本语句必须注释掉，否则会导致162行代码出错
}
 */

// 9.动态一维数组的构造
#include <stdio.h>
#include <malloc.h>
int main(int argc, char const *argv[])
{
    int a[5]; //如果int 占4个字节的话，则本数组总共含有20个字节，每个字节被当做了一个int变量来使用
    int len;
    int *pArr;
    int i;

    // 动态的构造一维数组
    printf("请输入你要存放的元素的个数：");
    scanf("%d", &len);
    pArr = (int *)malloc(4 * len); //第188行   本行动态的构造了一个一维数组，该一维数组的长度是len，该数组的数组名是pArr，该数组的每个元素的类型是int，类似于int pArr[len]
    //对一维数组进行操作 对动态一维数组进行赋值
    for (i = 0; i < len; ++i)
        scanf("%d", &pArr[i]);

    //对一维数组进行输出
    for (i = 0; i < len; ++i)
    printf("一维数组的内容是：%d\n", pArr[i]);

    free(pArr); //释放掉动态分配的数组
    return 0;
}
