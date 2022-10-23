#include <stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
#define message(a,b) \
  printf(#a" and "#b":We love you!\n") //字符串常量化 
//结构体 
struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
 } ;
 void  printbook(struct Books *book) ;
 int fibonaci(int i);
 int main()
 {
 	struct  Books book1;
 	struct  Books book2;
 	strcpy(book1.title,"C programming");
 	strcpy(book1.author,"Nuha Ali");
 	strcpy(book1.subject,"C programming Tutorial");
 	book1.book_id=632829;
 	strcpy(book2.title,"C programmingsh");
 	strcpy(book2.author,"Nuha Alif");
 	strcpy(book2.subject,"C programming Tutoriald");
 	book2.book_id=632854;
 	printbook(&book1);
 	printbook(&book2);
 	//getchar()
 	/*int c;
 	printf("Enter a value:");
 	while(c=getchar())
	 {
	 	printf("\nYou enter");
	  	putchar(c);
	  	printf("\n");
	  }
	  */
	//gets(
	char str[100];
	printf( "Enter a value :");
	 gets( str );
	 printf( "\nYou entered: ");
	 puts( str );
	 //写读文件
	 FILE *fp=NULL;
	 char buff[255];
	 fp=fopen("D:\www/kk.txt","w+");
	 fprintf(fp,"This is a test\n");
	 fputs("This is a test2\n",fp);
	 fscanf(fp,"%s",buff);
	 printf("1:%s\n",buff);
	 fgets(buff,255,(FILE*)fp);
	 /*fprintf(fp,"This is a test\n");
	 fputs("This is a test2\n",fp);*/
	 fclose(fp); 
	 //预定义宏
	 printf ("File:%s\n",__FILE__);
	 printf("Date:%s\n",__DATE__);
	 printf("Time:%s\n",__TIME__);
	 printf("Line:%d\n",__LINE__);
	 printf("ANSI:%d\n",__STDC__); 
	 //字符串常量化
	  message(gisnd,chshe);
	  //强制类型转换
	  int i=18;
	  char c='c';
	  float sum;
	  sum=i+c;
	  printf("sum=%f\n",sum); 
	  //错误处理
	  FILE *pf;
	  int errnum; 
	  pf=fopen("unexist.txt","rb");
	  if(pf==NULL)
	  {
	  	errnum=errno;
	  	fprintf(stderr,"错误号：%d\n",errno);
	  	perror("通过perror输出错误");
		fprintf(stderr,"打开文件错误：%s\n",strerror(errno)); 
	   } 
	   else
	   {
	   	fclose(pf);
	   }
	   //斐波那契数列调用 
	   for(i=0;i<10;i++)
	  {
	  printf("fibonaci(%d)=%d\n",i,fibonaci(i));
	  }
	  //动态存储
	  char name[100];
	  char *dec;
	  strcpy(name,"sdh");
	  dec=(char*)malloc(30*sizeof(char));
	  if(dec==NULL)
	  {fprintf(stderr,"unable to allocate");
	  }
	  else
	  {
	  strcpy(dec," Zara ali a DPS student.");
	  }
	  //dec=(char*)realloc(dec,50*sizeof(char));
	  if(dec==NULL)
	  {fprintf(stderr,"unable to allocate");
	  }
	  else
	  {
	  strcat(dec," wuhu,That is a good guy!");
	  }
	  printf("name=%s\ndec=%s\n",name,dec);
	  free(dec);
	return 0; 
}
 void printbook(struct Books *book)
 {
 	printf("Book title:%s\n",book->title);
 	printf("Book author:%s\n",book->author);
 	printf("Book subject:%s\n",book->subject);
 	printf("Book book_id:%d\n",book->book_id);
	  }
//斐波那契数列 
int fibonaci(int i)
{
	switch(i)
	{
		case 0:
		   return 0;
		   break;
		case 1:
		   return 1;
		   break;
		default :
		   return fibonaci(i-1)+fibonaci(i-2); 
	}
 } 
