// wap in c to print binary of a given number of a normal method 
#include<stdio.h>
int main()
{
int num,pos;
scanf("%d",&num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
}
// wap in c to print binary of a given number of a revrse oder 
#include<stdio.h>
int main()
{
int num,pos;
scanf("%d",&num);
for(pos=0;pos<=31;pos++)
printf("%d",num>>pos&1);
}
// Another method
#include<stdio.h>
int main()
{
int num,pos,m,n,i,j;
scanf("%d",&num);
printf("before:\n");
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");
printf("%d\n",num);
printf("after:\n");
for(pos=0;pos<=31;pos++)
printf("%d",num>>pos&1);
printf("\n");
for(i=0,j=31;i<j;i++,j--)
{
m=num>>i&1;
n=num>>j&1;
if(m!=n)
{
num=num^1<<i;
num=num^1<<j;
}
}
printf("%d\n",num);
}
//bit 1.) set or 2.)clear or 3.) compliment
#include<stdio.h>
int main()
int num,pos,op,c=0;
printf("Enter the number :\n");
scanf("%d",&num);
L1:
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
lse
printf("Wrong option\n");
}
else
{
c++;                                                                                                   1,1         Top
printf("Wrong bit pos as input\n");
if(c<3);
goto L1;
}
}
// wap in c to give input in character and output in Ascii converted and binary bit
int main()
{
int pos;
char ch;
scanf("%c",ch);
printf("%d\n",ch);
for(pos=31;pos>=0;pos--)
{
printf("%d",ch>>pos&1);
}
// wap in c to give input in character and output in Ascii converted and Reverse binary bit
int main()
{
int pos;
char ch;
scanf("%c",ch);
printf("%d\n",ch);
for(pos=0;pos<=31;pos++)
printf("%d",ch>>pos&1);
printf("\n");
}
#include<stdio.h>
int main()
{
int num;
scanf("%d",&num);
int temp=num,d=0,dig;
for(;temp;temp/=10)
d++;
int sum=0;
for(temp=num;temp;temp/=10)
{
dig=temp%10;
int power=1;
for(int i=0;i<d;i++)
power=power*dig;
sum=sum+power;
}
if(sum==num)
printf("armstrong no");
else printf("not a armstrong no");
}


