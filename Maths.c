//1. Print factorial from the user 
     //Eg i/p) 5  o/p: 120 (5*4*3*2*1)

#include<stdio.h>
int main()
{
int num,i,fact;
fact=1;
scanf("%d",&num);
for(i=1;i<=num;i++)
{
fact=fact*i;
}
printf("%d\n",fact);
}
//2.)2. Print factor from the users 
// Eg  i/p) 12 o/p : 1 2 3 4 6 12
#include<stdio.h>
int main()
{
int num,i;
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
printf("%d\n",i);
}
}
///3.). Print 3 to power 4 .
//  o/p: 3*3*3*3 // 81
#include<stdio.h>
int main()
{
int num,temp=1,i;
scanf("%d",&num);
for(i=1;i<5;i++)
{
temp*=num;
}
printf("%d\n",temp);
}
//4.)Count factor of 12
#include<stdio.h>
int main()
{
int num,count=0,i;
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
count++;
}
printf("%d\n",count);
}
//5.)Count , print factor of 11 
#include<stdio.h>
int main()
{
int num,i,count=0;
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
{
count++;
printf("%d ",i);
}
}
printf("\n%d\n",count);
}
//6.)Print even factor of 512
#include<stdio.h>
int main()
{
int num,i,count=0;
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
if(i%2==0)
{
count++;
printf("%d ",i);
}
}
printf("\n%d\n",count);
}
//7.)Print all odd factor of 900
#include<stdio.h>
int main()
{
int num,i;
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%2==0)
if(i%2!=0)
printf("%d ",i);
}
printf("\n");
}
//8.)Check num is prime or not
#include<stdio.h>
int main()
{
int num,i;
scanf("%d",&num);
for(i=2;i<=num;i++)
{
if(num%i==0)
break;
}
if(num==i)
printf("Prime number");
else
printf("Not a prime");
}
//9.)Check num is perfect or not
#include<stdio.h>
int main()
{
int num,i,sum=0;
scanf("%d",&num);
for(i=1;i<num;i++)
{
if(num%i==0)
sum+=i;
}
if(num==sum)
printf("perfet number\n");
else
printf("Not a perfect number\n");
}
//12.)Check num is palindrome
#include<stdio.h>
int main()
{
int num,r,rev,temp;
scanf("%d",&num);
temp=num;
for(rev=0;num;num/=10)
{
r=num%10;
rev=rev*10+r;
}
if(temp==rev)
printf("palindrome number\n");
else
printf("Not a palindrome Number\n");
}
//13.) Print alternate odd number between 21 to 39.
#include<stdio.h>
int main()
{
int count=0,i;
for(i=21;i<=39;i++)
if(i%2!=0)
{
if(count%2==0)
printf("%d ",i);
count++;
} 
printf("\n");
}
//14.)print given series .
//  1 2 4 7 11 16 22
#include<stdio.h>
int main()
{
int start,i,limit,differ=1;
scanf("%d %d",&start,&limit);
for(i=0;i<=limit;i++)
{
if(start<limit)
{
start+=i;
printf("%d ",start);
}
}
}
//15.) Print given series .
// -13 -8 -4 -1 1 2
#include<stdio.h>
int main()
{
int start,differ,i;
scanf("%d %d",&start,&differ);
for(i=0;i<=5;i++)
{
printf("%d ",start);
start+=differ;
differ--;
}
}
//16.)Print given series .
//      2 9 28 65 126 217
#include<stdio.h>
int main()
{
int num,i,result;
scanf("%d",&num);
for(i=0;i<=num;i++)
{
result=i*i*i+1;
if(result<=num)
printf("%d ",result);
}
printf("\n");
}
// normal
///   input--- char ch='c'
///    output----99 143 63
#include<stdio.h>
int main()
{
char ch='c';
printf("%d %x %o",ch,ch,ch);
}
//////////////////             MATH FORMULA            //////////
#include<stdio.h>
void main()
{
int a,b,sum;
scanf("%d %d",&a,&b);
printf("%d",((a*a)+(2(a)(b))+(b*b)));
}




































