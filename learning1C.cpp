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
	/*my first c project,ת���ַ�����*/ 
	printf("hello world!\nworld\t1233\v�޷�\f\n");
	/*���int�洢��С*/
	 printf("int �洢��С��%lu\n",sizeof(int));
	 /*float���������ֽ����*/ 
	 printf("float�洢����ֽ���:%lu\n",sizeof(float));
	 printf("float��Сֵ��%E\n",FLT_MIN);
	 printf("float���ֵ��%E\n",FLT_MAX);
	 printf("����ֵ��%d\n",FLT_DIG);
	 /*�ⲿ��������͸�ֵ*/ 
	 int result ;
	 result=addwonum();
	 printf("result=%d\n",result) ;
	 /*����*/
	 int area;
	area=LENGTH*WIDTH;
	printf("area=%d",area);
	printf("%c",NEWLINE); 
	/*static*/
	while(count--){
	func1();
	}
	/*����ʹ��*/
	int num;
	printf("����һ�������֣�");
	scanf("%d",&num);
	(num%2==0)?printf("ż��\n"):printf("����\n");
	//switchѧϰ 
	char grade='B';
	switch(grade)
	{
	case'A':
		printf("excellent��\n");
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
		printf("��Ч\n");
	}
	//ѭ��
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
	//���õ��ú��� 
	int h=290;
	int j=378;
	printf("����ǰh=%d,j=%d\n",h,j);
	swap(&h,&j);
	printf("������h=%d,j=%d\n",h,j);
	//����&����
	int *p;
	int i;
	p = getrandom();
	//�Ե�ǰʱ����Ϊ���� 
	srand((unsigned)time(NULL));
	for(i=0;i<10;i++) 
	{
		printf("*(p+%d):%d\n",i,*(p+i));
	}
	//ö��
	/*enum DAY
	{
		MON=1,TUE,WED,THUS,FRI,SAT,SUN 
	 } day;
	 for (day=MON;day<=SUN;day++)
	 {
	 	printf("%d\n",day);
	 }
	 */ 
	 //ָ������
	 const int MAX = 5;
	 const char *names[]={"hds","hdjjshd","dhke","sjh","fsj"} ;
	 int t=0;
	 for(t=0;t<=MAX;t++)
	 {
	 	printf("names[%d]=%s\n",t,names[t]);
	 }
	 //����ָ��
	 int (*s)(int,int)=&max;
	 int m,n,o,q;
	 printf("������������\n");
	 scanf("%d %d %d",&m,&n,&o);
	 q=s(s(m,n),o) ;
	 printf("���ֵ��%d",q);
	return 0;	 
	} 
  /*�ⲿ��������͸�ֵ*/ 
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
//����
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return;
 }
  //����
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
 //���ֵ
 int max(int x,int y)
 {
 	return x>y?x:y;
  } 
