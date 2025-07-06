//1.)character
#include<stdio.h>
void main()
{
char ch;
scanf("%c",&ch);
if(ch>=97 && ch<=122)
printf("ch=%c and its ascii=%d\n" ,ch,ch);
else
printf("upper case\n");
}
// wap in c to upper case/lower case/digits/special charater
#include<stdio.h>
void main()
{
char ch;
scanf("%c",&ch);
if(ch>='a' && ch<='z')
printf("ch=%c and lower case and ASCII=%d\n",ch,ch);
else if (ch>='A' && ch<='Z')
printf("ch=%c and uppercase and ASCII=%d\n",ch,ch);
else if(ch>='0' && ch<='9')
printf("Digits\n");
else
printf("Special character\n");
}
// Even or odd number find
#include<stdio.h>
void main()
{
int num;
scanf("%d",&num);
if (num%2==0)
printf("Even number=%d\n",num);
else
printf("Odd number=%d\n",num);
}
 //wap in c to maxcimum or minimum 
#include<stdio.h>
void main()
{
int num;
scanf("%d",&num);
if(num>0)
printf("maximum value=%d\n",num);
else
printf("minimum value=%d\n",num);
}
//wap in postive or negative
#include<stdio.h>
void main()
{
int num;
scanf("%d",&num);
if(num>0)
printf("Positive number=%d\n",num);
else if (num<0)
printf("Negative number=%d\n",num);
else
printf("The numbe is zero=%d\n",num);
}
/// wap in c to upper/lower/dig // wap in c to power of 2 or not
  2 #include<stdio.h>
  3 void main()
  4 {
  5 int num;
  6 scanf("%d",&num);
  7 if((num>0)&&((num&num-1))==0)
  8 printf("power of 2=%d\n",num);
  9 else
 10 printf("Not power of 2=%d\n",num);
 11 }
it/special character
#include<stdio.h>
 void main()
{
char ch;
scanf("%c",&ch);
if(ch>='a' && ch<='z')
printf(" ch=%c lower case ASCII=%d\n",ch,ch);
else if(ch>='A' &&ch<='Z')
printf("ch=%c upper case ASCII=%d\n",ch,ch);
else if(ch>='0' && ch<='9')
printf("Digits=%d\n",ch);
else
printf("Special character=%d\n",ch);
}
 // wap in c to power of 2 or not
#include<stdio.h>
void main()
{
int num;
scanf("%d",&num);
if((num>0)&&((num&num-1))==0)
printf("power of 2=%d\n",num);
else
printf("Not power of 2=%d\n",num);
}
               
