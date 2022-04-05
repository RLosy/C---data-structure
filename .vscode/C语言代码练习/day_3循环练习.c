#include <stdio.h>
int main(int argc, char const *argv[])
//循环练习
/* {

    int i;
    int sum = 0;

    for (i = 1; i <= 10; ++i)
    sum = sum + i;

    printf("sum = %d\n",sum);



    return 0;
}
 */

/* //for 循环练习 333 999 18 18
{
    int i;
int sum = 0;
for (i = 3; i <= 10; ++i)
{
    if (i % 3 == 0)
        sum = sum + i;
    printf("sum=%d\n", sum);

}
*/
/* {   //1.1-100奇数和
    int i;
    int sum = 0;
    for (i = 1; i <= 100; ++i)
    {
        if (i % 2 == 1)
            sum = sum + i;
    }
    printf("sum=%d\n", sum);

    return 0;
} */
// 2.1-100的奇数数字一一列出
/* {
    int i;
    // int sum = 0;
    for (i = 1; i <= 100; ++i)
    {
        if (i % 2 == 1)
            // sum=sum+i;
            printf("i=%d\n", i);
    }
    return 0;
} */
// 3.1-100奇数个数显示
/* {
    int i;
    int cnv = 0;
    for (i = 1; i <= 100; ++i)
    {
        if (i % 2 == 1)
            cnv = cnv + 1;
    }
    printf("cnv=%d\n", cnv);

return 0;
} */
// 4.1-100之间的奇数的平均值
/* {
    int i;
    int sum = 0;
    int cnv = 0;
    int avg;

    for (i = 1; i <= 100; ++i)
    {
        if (i % 2 == 1)
        {
            sum = sum + i;
            cnv = cnv + 1;
        }
    }
        avg = sum / cnv;
        printf("sum%d\n", sum);
        printf("cnv=%d\n", cnv);
        printf("avg=%d\n", avg);

    return 0;
} */
// 5.1-100的奇数和1-100的偶数和
/* {
    int i;
    int sum1 = 0;
    int sum2 = 0;

    for (i = 1; i <= 100; ++i)
    {
        if (i % 2 == 1)
        {
            sum1 = sum1 + i;
        }
        else
        {
            sum2 = sum2 + i;
        }
    }
    printf("奇数和=%d\n", sum1);   //2500
    printf("偶数和=%d\n", sum2);   //2550

    return 0;
} */
// 6. 1-1/100的和，强制转化类型
/* {
    int i;
    float sum = 0;
    for (i = 1; i < 101; ++i)
    {
        sum = sum + 1 / (float)(i);
        //简单写法sum = sum + 1.0/i;
    }
    printf("sum =%f\n", sum); //5.187378
    return 0;
} */
// 7.直增自减
/* {
    int i,j,k,m;
    i = j = 3;
    k = i++;
    m = ++j;

printf("i=%d,j=%d,k=%d,m=%d\n",i,j,k,m); //i=4 =j=4 k=3,m=4
return 0;
} */
// 8.三目运算符
/* {
    int i;
    i = (3 > 2 ? 5 : 1);
    printf("i=%d\n", i);
    return 0;

} // i=5
*/
// 9.逗号运算符
/* {
    int i;
    int j = 2;

    i = (j++, ++j, j + 2, j - 2);
    printf("i=%d\n",i);
    return 0;
}//i=2 */

//10.if...else if...用法 
/* int main(void)
{
     
    float score;

    printf("请输入你的考试成绩：");
    scanf("%f",&score);
    
    if (score > 100)
            printf("make dream\n");
     else if (score>=90 && score <= 100)
            printf("优秀\n"); 
    else if (score>=80 && score <= 90)
            printf("良好\n");
    else  if (score>=60 && score<=80)
            printf("一般\n");
    else  if (score>=0 && score<=60)  
            printf("不及格\n"); 
    else
            printf("不要自卑\n");
    return 0;
}
 */