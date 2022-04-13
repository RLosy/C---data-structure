// 1.指针
/* #include <stdio.h>
void f();
int main(int argc, char const *argv[])
{
    int i =10;
    f(&i);
    printf("i=%d",i);
    return 0;
}
void f(int *p)
{
    *p = 99;

} */
// 2.数组
/* #include <stdio.h>
int main(int argc, char const *argv[])
{
     int a[5]={1,2,3,4,5};
    //a[3]==*(a+3);

    printf("%d\n",a+1);
    printf("%d\n",a+2);
    printf("%d\n",*a+3);//*a+3等价于a[0]+3

    return 0;
}
 */
// 3.数组修改值
/* #include<stdint.h>
void Show_Arry();
int main(int argc, char const *argv[])
{
    int   a[5] ={1,2,3,4,5};
    Show_Arry(a,5);
    printf("%d",a[0]);
    return 0;
}
void Show_Arry(int *p,int len)
{
    p[0]=-2; //p[0]==*p p[2]==*(p+2)==*(a+2)==a[2]
}
 */
// 4.跨函数使用内存
/*  #include <stdio.h>
#include <malloc.h>

struct Student
{
    int sid;
    int age;
};
struct Student *CreateStudent(void);
void ShowStudent(struct Student *);
int main(void)
{
    struct Student *ps;

    ps = CreateStudent();
    ShowStudent(ps);
    return 0;
};
void ShowStudent(struct Student *pst)
{
    printf("%d %d\n", pst->sid, pst->age);
}

struct Student *CreateStudent(void)
{
    struct Student * p= (struct Student *)malloc(sizeof(struct Student));
    p->sid = 99;
    p->age = 88;
    return p ;
};  */
// 5.动态一维数组
/* #include <stdio.h>
#include <malloc.h>
int main(void)
{
    // int a[5]={1,2,3,4,5};

    int len;
    printf("请输入你需要分配的数组的长度:len=");
    scanf("%d", &len);
    int *pArr = (int *)malloc(sizeof(int) * len);
    // *pArr=4;
   // pArr[1]=10;
    //printf("%d %d",*pArr,pArr[1]);
    //可以把pRrr当作普通数组来使用
    for (int i = 0; i < len; ++i)
        scanf("%d\n", &pArr[i]);
    for (int i = 0; i < len; ++i)
        scanf("%d\n", *(pArr + i));

    free(pArr);
    return 0;
} */
// 6.连续存储数组的算法演示
/* #include <stdio.h>
#include <malloc.h> //包含malloc
#include <stdlib.h> //包含exit

//定义了一个数据类型，该数据类型的名字叫做struct Arr,该数据类型含有三个成员，分别是pBase ,len, cnt
struct Arr
{
    int *pBase; //存储的是数组第一个元素的地址
    int len;    //数组所能容纳的最大元素的个数
    int cnt;    //当前数组有效元素的个数
    // int increment;//自动增长因子
};
typedef int bool;
void init_arr(struct Arr *pArr, int length);   //初始化
bool append_arr(struct Arr *pArr, int val); //追加
// bool insert_arr(); //插入
// bool delete_arr(); //删除
// int get();

bool is_empty(struct Arr *pArr, int length);
bool is_full(struct Arr *pArr, int length);
// void sort_arr();
void show_arr(struct Arr *pArr);
// void inversion_arr();

int main(void)
{
    struct Arr arr;

    init_arr(&arr, 6);
    // printf("%d\n", arr.len);
    show_arr(&arr);
    return 0;
}

void init_arr(struct Arr *pArr, int length)
{
    pArr->pBase = (int *)malloc(sizeof(int) * length);
    if (NULL == pArr->pBase)

    {
        printf("动态内存分配失败！\n");
        exit(-1); //终止整个程序
    }
    else
    {
        pArr->len = length;
        pArr->cnt = 0;
    }
    return;
}
bool is_empty(struct Arr *pArr)
{
    if (0 == pArr->cnt)
        return 1;
    else
        return 0;
}

bool is_full(struct Arr *pArr)
{
    if (pArr->cnt == pArr->len)
        return 1;
    else
        return 0;
}

bool append_arr(struct Arr*pArr,int val)
{
    if(is_full(pArr))
    return 0;
    //不满时追加
    else 
    pArr->pBase[pArr->cnt] = 
}

void show_arr(struct Arr *pArr)
{
    if (is_empty(pArr)) //数组为空
    //提示用户数组为空
    {
        printf("数组为空!\n");
    }
    else
        //输出数组有效内容
        for (int i = 0; i < pArr->cnt; i++)
            printf("%d", pArr->pBase[i]); // int *
    printf("\n");
} */

// 7.跨函数使用内存讲解及其实例
/* #include <stdio.h>
#include <malloc.h>

struct Student
{
    int sid;
    int age;
};

struct Student *CreateStudent(void);
void ShowStudent(struct Student *);

int main(void)
{
    struct Student *ps;

    ps = CreateStudent();
    ShowStudent(ps);
    return 0;
}

void ShowStudent(struct Student *pst)
{
    printf("%d %d\n", pst->age, pst->sid);
}

struct Student *CreateStudent(void)
{
    struct Student *p = (struct Student *)malloc(sizeof(struct Student));
    p->age = 88;
    p->sid = 99;
    return p;
};
 */