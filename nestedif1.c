///Bit in set/clear/compliment
#include<stdio.h>
void main()
{
int num,pos,op;
printf("Enter the number :\n");
scanf("%d",&num);
printf("Enter the bit pos(0-31)\n");
scanf("%d",&pos);
if(pos>=0&&pos<=31)
{
printf("Enter the op\n1)set\n2)clear\n3)complimant\n");
scanf("%d",&op);
if(op==1)
{
num=num|1<<pos;
printf("num=%d\n",num);
}
else if(op==2)
{
num=num&~(1<<pos);
printf("num=%d\n",num);
}
else if(op==3)
{
num=num^1<<pos;
printf("num=%d\n",num);
}
else
printf("Wrong option\n");
}
else
printf("Wrong bit pos as input\n");
}
// marks and grade check
#include<stdio.h>
void main()
{
int num;
printf("Enter the numbe:\n");
scanf("%d",&num);
if(num>=0 &&num<=39)
printf("fail=%d\n",num);
else if(num>=40 && num<=59)
printf("C grade =%d\n",num);
else if(num>=60 && num<=74)
printf("B grade=%d\n",num);
else
{
printf("A grade=%d\n",num);
}
}
//OTHER METHOD
#include<stdio.h>
void main()
{
int num;
printf("Enter the numbe:\n");
scanf("%d",&num);
if(num<40)
printf("fail=%d\n",num);
else if(num<60)
printf("C grade =%d\n",num);
else if(num<75)
printf("B grade=%d\n",num);
else
{
printf("A grade=%d\n",num);
}
}
//OTHER METHOD
#include<stdio.h>
void main()
{
int num;
printf("Enter the numbe:\n");
scanf("%d",&num);
if(num<=39)
printf("fail=%d\n",num);
else if(num<=59)
printf("C grade =%d\n",num);
else if(num<=74)
printf("B grade=%d\n",num);
else
{
printf("A grade=%d\n",num);
}
}
