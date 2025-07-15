// how to assign and indirectly method in pointer 
/*
#include<stdio.h>
int main()
{
int i=10,j=20;
int *p;
p=&i;
printf("*p=%p i=%p\n",p,&i);
printf("i=%d *p=%d\n",i,*p);
*p=100;
printf("i=%d *p=%d\n",i,*p);
p=&j;
printf("j=%d *p=%d\n",j,*p);
*p=200;
printf("j=%d *p=%d\n",j,*p);
printf("i=%d j=%d\n",i,j);
}
*/

/*///size of the point in char,float,double
#include<stdio.h>
int main()
{
char ch,*cp;
int i,*ip;
float f,*fp;
printf("%ld %ld\n",sizeof(ch),sizeof(cp));
printf("%ld %ld\n",sizeof(i),sizeof(ip));
printf("%ld %ld\n",sizeof(f),sizeof(fp));
}
*/

//////////////Swap method 
/*#include<stdio.h>
int main()
{
int a=21,b=12;
int *p1=&a,*p2=&b;
int temp;
printf("before swap:a=%d b= %d\n",a,b);
temp=*p1;
*p1=*p2;
*p2=temp;
printf("after swap:a=%d b=%d\n",a,b);
}*/

// Tpo print in differnt ways in the c 
/*#include <stdio.h>
int main() {
int a = 10;
unsigned int u = 300;
float f = 3.14159;
char ch = 'A';
char str[] = "Hello";
int hex = 255;
int oct = 10;
int *ptr = &a;
printf("Integer (%%d): %d\n", a);
printf("Unsigned int (%%u): %u\n", u);
printf("Float (%%f): %f\n", f);
printf("Float with 2 decimals (%%.2f): %.2f\n", f);
printf("Character (%%c): %c\n", ch);
printf("String (%%s): %s\n", str);
printf("Hex lowercase (%%x): %x\n", hex);
printf("Hex UPPERCASE (%%X): %X\n", hex);
printf("Octal (%%o): %o\n", oct);
printf("Pointer (%%p): %p\n", ptr);
printf("Percentage sign (%%%%): %%\n");
return 0;
}
*/
// Wap to scan an integer variable using pointer variable and print that integer using pointer
// scan a number to store in pointer
/*#include<stdio.h>
int main()
{
int num;
int *p;
p=&num;
printf("enter the number\n");
scanf("%d",&num);
printf("num=%d *p=%d\n",num,*p);
}
*/
#include<stdio.h>
int main()
{
float f=23.5;
double d=1234.567;
printf("f=%f f=%g f=%e\n",f,f,f);
printf("d=%lf d=%g d=%e\n",d,d,d);
}












