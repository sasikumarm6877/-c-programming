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



