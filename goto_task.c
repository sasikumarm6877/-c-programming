// WAP IN C TO COUNT DIGITS ANY NUMBER 


/*#include<stdio.h>
void main()
{
int num,r,digits=0;
scanf("%d",&num);
sasi:
r=num%2;
if(r!=0)
digits++;
num/=10;
if(num)
goto sasi;
printf("%d\n",digits);
}
*/


// WAP IN C TO PRODUCT OF LAST 2 DIGITS OF NUMBER


/*#include<stdio.h>
void main()
{
int num,count=0,r,r1=1;
scanf("%d",&num);
sasi:
if(count<2)
{
r=num%10;
num/=10;
r1*=r;
count++;
goto sasi;
}
printf("%d\n",r1);
}
*/


//WAP IN C TO SUM OF LAST 3 DIGITSOF NUMBER

/*#include<stdio.h>
void main()
{
int num,r,r1=0,count=0;
scanf("%d",&num);
sasi:
if(count<3)
{
r=num%10;
r1+=r;
num/=10;
count++;
goto sasi;
}
printf("%d\n",r1);
}
*/


// WAP IN C TO SUM OF DIGITS DIVISIBLE BY 3


/*#include<stdio.h>
void main()
{
int num,r,sum=0;
scanf("%d",&num);
sasi:
r=num%10;
if(r%3==0)
sum+=r;
num/=10;
if(num!=0)
goto sasi;
printf("%d\n",sum);
}
*/


//WAP IN C TO SUM OF ALTERNATE DIGITS(FROM REVERSE METHOD)


/*#include<stdio.h>
void main()
{
int num,r,sum=0,skip=0;
scanf("%d",&num);
sasi:
r=num%10;
if(skip==0)
skip=1-skip;
sum+=r;
num/=10;
if(num!=0)
goto sasi;
printf("%d\n",sum);
}
*/

//WAP IN C TO SUM OF ALTERNATE DIGITS

#include<stdio.h>
int main()
{
int num,c=0,r1,sum=0;
scanf("%d",&num);
sasi:
r1=num%10;
if(c%2!=0)
sum+=r1;
c++;
num/=10;
if(num)
goto sasi;
printf("%d\n",sum);
}

