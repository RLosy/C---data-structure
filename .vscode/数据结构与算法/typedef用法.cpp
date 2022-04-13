/* #include<stdio.h>

typedef struct Student
{
    int sid;
    char name[100];
    char sex;
}*PSTU,STU;

int main(void)
{
    STU st;
    PSTU ps =&st;
    ps->sid=99;
printf("%d\n",ps->sid);
} */
//2.每一个链表节点的数据类型
/* #include<stdio.h>

typedef struct Node
{
    int data;//数据域
    struct Node*pNext;//指针域

}*PNODE,NODE; //NODE等价于struct Node，PNODE等价于struct Node *
int main(void)
{
    
    return 0;
}
 */
//3.非循环单链表插入节点伪算法
