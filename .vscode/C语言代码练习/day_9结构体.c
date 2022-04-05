/* #include <stdio.h>

struct student
{
    int age;
    float score;
    char sex;
};
int main(int argc, char const *argv[])
{
    struct student st = {80, 66.5, 'A'}; //初始化 定义的同时赋初值
    struct  student st2;

    st2.age = 10;
    st2.score = 12.3;
    st2.sex = 'B';
    printf("%d %f %c\n", st.age, st.score, st.sex);
    printf("%d %f %c\n", st2.age, st2.score, st2.sex);

    return 0;
}
 */
// 2.
/* #include <stdio.h>
struct student
{
    int age;
    float score;
    char ch;
};
int main(int argc, char const *argv[])
{
    struct student st = {80, 66.f, 'a'}; //初始化 定义的同时赋初值
    struct student *pst = &st;           //&st 不能改成st

    pst->age = 80;    //第二种方式
    st.score = 66.6f; //第一种方式 66.6在c语言中默认是double 类型，如果希望一个实数是float类型，则必须在末尾加f或F，因为66.6是double 66.6f或66.6F。
    printf("%d %f\n", st.age, pst->score);  //输出结果：80 66.599998
    return 0;
} */
// 3.对通过一个函数对结构体变量的输入和输出
//发送地址还是发送内容 。指针的优点之一：快速的传递数据，耗用内存小
/* #include <stdio.h>
#include <string.h>


struct Student
{
    int age;
    char sex;
    char name[100];
}; //分号不能省

void InputStudent(struct Student *pstu);
void OutputStudent(struct Student ss);

int main(void)
{
    struct Student st;
    //printf("%d\n",sizeof(st));
    InputStudent(&st); //对结构体的输入
   // printf("%d %c %s\n", st.age, st.sex, st.name);

    //OutputStudent (st); //对结构体的输出 可以发送st的地址也可以直接发送st的内容
    OutputStudent (st);
    return 0;
}
void InputStudent(struct Student *pstu) //pustz只占4个字节
{

    (*pstu).age = 10;
    pstu->sex = 'F';
    strcpy(pstu->name, "张三");

}
void OutputStudent(struct Student ss)
{
    printf("%d %c %s\n", ss.age, ss.sex, ss.name);
};
 */
// 4.冒泡排序(升序)
#include <stdio.h>
//void sort(int *a, int len);
void sort(int * a, int len)
{
    int i, j, t;
    for (i = 0; i < len - 1; ++i)
    {
        for (j = 0; j < len - 1 - i; ++j)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

int main(void)
{
    int i = 0;
    int a[6] = {0, -2, 9, 89, 7, 5};
    sort(a, 6);   //代码执行顺序很重要
    for (i = 0; i < 6; ++i)
     {
    printf("%d\n", a[i]);
     }   
   
    printf("\n");
    return 0;
}


