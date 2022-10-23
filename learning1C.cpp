#include <stdio.h>
#include<limits.h>
#include<float.h>
#include<stdlib.h>
#include<time.h> 
#define LENGTH 20
#define WIDTH 8
#define NEWLINE '\n' 
int addwonum();
void func1(void); 
static int count=10;
void swap(int*x,int*y);
int *getrandom();
int max(int x, int y) ;
int main()
{
	/*my first c project,转义字符试用*/ 
	printf("hello world!\nworld\t1233\v无法\f\n");
	/*输出int存储大小*/
	 printf("int 存储大小：%lu\n",sizeof(int));
	 /*float浮点数的字节输出*/ 
	 printf("float存储最大字节数:%lu\n",sizeof(float));
	 printf("float最小值：%E\n",FLT_MIN);
	 printf("float最大值：%E\n",FLT_MAX);
	 printf("精度值：%d\n",FLT_DIG);
	 /*外部变量定义和赋值*/ 
	 int result ;
	 result=addwonum();
	 printf("result=%d\n",result) ;
	 /*常量*/
	 int area;
	area=LENGTH*WIDTH;
	printf("area=%d",area);
	printf("%c",NEWLINE); 
	/*static*/
	while(count--){
	func1();
	}
	/*？：使用*/
	int num;
	printf("输入一个人数字：");
	scanf("%d",&num);
	(num%2==0)?printf("偶数\n"):printf("奇数\n");
	//switch学习 
	char grade='B';
	switch(grade)
	{
	case'A':
		printf("excellent！\n");
		break;
	case'B':
		printf("nice!\n");
		break;
	case'C':
		printf("good!\n");
		break;
	case'D':
		printf("pass!\n");
		break;
	case'F':
		printf("try again\n");
		break;
	default:
		printf("无效\n");
	}
	//循环
	int a=10;
	while(a<20) 
	{
		if(a==15)
		{
		a++;
		continue;
		}
		printf("a=%d\n",a);
		a++; 
	}
	//引用调用函数 
	int h=290;
	int j=378;
	printf("交换前h=%d,j=%d\n",h,j);
	swap(&h,&j);
	printf("交换后h=%d,j=%d\n",h,j);
	//数组&函数
	int *p;
	int i;
	p = getrandom();
	//以当前时间作为种子 
	srand((unsigned)time(NULL));
	for(i=0;i<10;i++) 
	{
		printf("*(p+%d):%d\n",i,*(p+i));
	}
	//枚举
	/*enum DAY
	{
		MON=1,TUE,WED,THUS,FRI,SAT,SUN 
	 } day;
	 for (day=MON;day<=SUN;day++)
	 {
	 	printf("%d\n",day);
	 }
	 */ 
	 //指针数组
	 const int MAX = 5;
	 const char *names[]={"hds","hdjjshd","dhke","sjh","fsj"} ;
	 int t=0;
	 for(t=0;t<=MAX;t++)
	 {
	 	printf("names[%d]=%s\n",t,names[t]);
	 }
	 //函数指针
	 int (*s)(int,int)=&max;
	 int m,n,o,q;
	 printf("输入三个数字\n");
	 scanf("%d %d %d",&m,&n,&o);
	 q=s(s(m,n),o) ;
	 printf("最大值：%d",q);
	return 0;	 
	} 
  /*外部变量定义和赋值*/ 
 int x;
 int y;
int addwonum()
{
	extern int x;
	extern int y;
	x=2;
	y=4;
	return x+y; 
}
/*static*/
void func1(void)
{
	static int thingy=5;
	thingy++;
	printf("thingy=%d,count=%d\n",thingy,count);
}
//交换
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return;
 }
  //数组
int *getrandom()
{
	static int r[10];
	int i;
	for (i=0;i<10;i++)
	{
	r[i]=rand();
	printf("r[%d]=%d\n",i,r[i]); 
 } 

}
 //最大值
 int max(int x,int y)
 {
 	return x>y?x:y;
  } 
