//1.) sum of digits

/*#include<stdio.h>
int main()
{
int num,sum,r=0;
scanf("%d",&num);
sasi:
sum=num%10;
r+=sum;
num/=10;
if(num)
goto sasi;
printf("%d\n",r);
}
*/
//2.)sum of odd digits

/*#include<stdio.h>
int main()
{
int num,sum,r=0;
scanf("%d",&num);
sasi:
sum=num%10;
if(sum%2!=0)
r+=sum;
num/=10;
if(num)
goto sasi;
printf("%d\n",r);
}*/

// 3.) sum of digits more than 5

/*#include<stdio.h>
int main()
{
int num,r,digit=0;
scanf("%d",&num);
sasi:
r=num%10;
if(r>5)
digit+=r;
num/=10;
if(num)
goto sasi;
printf("%d\n",digit);
}
*/
//4.)sum of less than 7

/*#include<stdio.h>
int main()
{
int num,digit=0,r;
scanf("%d",&num);
sasi:
r=num%10;
if(r<7)
digit+=r;
num/=10;
if(num)
goto sasi;
printf("%d\n",digit);
}*/

// 5.) sum of digits in between 3 to 8

/*#include<stdio.h>
int main()
{
int num,digit=0,r;
scanf("%d",&num);
sasi:
r=num%10;
if(r>=3 && r<=8)
digit+=r;
num/=10;
if(num)
goto sasi;
printf("%d\n",digit);
}
*/

//6.) count digit in num

/*#include<stdio.h>
int main()
{
int num,count=0;
scanf("%d",&num);
sasi:
if(num)
{
num/=10;
count++;
goto sasi;
}
printf("%d\n",count);
}
*/

//7.) count odd digit in num

/*#include<stdio.h>
int main()
{
int num,r,count=0;
scanf("%d",&num);
sasi:
r=num%10;
num/=10;
if(r%2!=0)
count++;
if(num)
goto sasi;
printf("%d\n",count);
}
*/
//8.) count even digits more than 4

/*#include<stdio.h>
int main()
{
int num,r,count=0;
scanf("%d",&num);
sasi:
r=num%10;
num/=10;
if(r>4)
if(r%2==0)
count++;
if(num)
goto sasi;
printf("%d\n",count);
}
*/


//9.) count odd digit more than 3 and less than 8


/*#include<stdio.h>
int main()
{
int num,r,count=0;
scanf("%d",&num);
sasi:
r=num%10;
num/=10;
if(r%2!=0)
if(r>3 && r>8)
count++;
if(num)
goto sasi;
printf("%d\n",count);
}
*/
//10.)count even digit between 1 to 7

/*#include<stdio.h>
int main()
{
int num,count=0,r;
scanf("%d",&num);
sasi:
r=num%10;
num/=10;
if(r%2==0)
if(r>1 && r<7)
count++;
if(num)
goto sasi;
printf("%d\n",count);
}
*/
//11.) sum of even digit

/*#include<stdio.h>
int main()
{
int num,r,sum=0;
scanf("%d",&num);
sasi:
r=num%10;
num/=10;
if(r%2==0)
sum+=r;
if(num)
goto sasi;
printf("%d\n",sum);
}
*/
//12.)sum of last 3 digit

/*#include<stdio.h>
int main()
{
int num,sum=0,count=0;
scanf("%d",&num);
sasi:
sum+=num%10;
num/=10;
count++;
if(count<3)
goto sasi;
printf("%d\n",sum);
}
*/
//13.) sum of last 3 odd digit

/*#include<stdio.h>
int main()
{
int num,r=0,sum,c=0;
scanf("%d",&num);
sasi:
sum=num%10;
num/=10;
if(sum%2!=0)
r+=sum;
c++;
if(c<=3)
goto sasi;
printf("%d\n",r);
}
*/
//14.)print last 3 digit from last
/*#include<stdio.h>
int main()
{
int num,r,count=0;
scanf("%d",&num);
sasi:
r=num%10;
printf("%d",r);
num/=10;
count++;
if(count<3)
goto sasi;
printf("\n");
}
*/
//15.)print 1st digit

/*#include<stdio.h>
int main()
{
int num,r;
scanf("%d",&num);
sasi:
r=num%10;
num/=10;
if(num)
goto sasi;
printf("%d\n",r);
}
*/

//16.) reverse number
/*#include<stdio.h>
int main()
{
int num,r,rev=0;
scanf("%d",&num);
sasi:
r=num%10;
num/=10;
rev=rev*10+r;
if(num)
goto sasi;
printf("%d",rev);
}
*/
//17.)Revrese odd digit in num

/*#include<stdio.h>
int main()
{
int num,rev=0,r;
scanf("%d",&num);
sasi:
r=num%10;
num/=10;
if(r%2!=0)
rev=rev*10+r;
if(num)
goto sasi;
printf("%d",rev);
}
*/
//18.) Reverse last 2 digits
/*
#include<stdio.h>
int main()
{
int num,r,rev=0,count=0;
scanf("%d",&num);
sasi:
r=num%10;
num/=10;
count++;
if(count<=2)
{
rev=rev*10+r;
goto sasi;
}
printf("%d\n",rev);
}
*/

//19.) reverse digit more than 5

/*#include<stdio.h>
int main()
{
int num,rev=0,r;
scanf("%d",&num);
sasi:
r=num%10;
num/=10;
if(r>5)
rev=rev*10+r;
if(num)
goto sasi;
printf("%d\n",rev);
}
*/

// 20.) Reverse digits more than 4 and less than 8

/*#include<stdio.h>
int main()
{
int num,rev=0,r;
scanf("%d",&num);
sasi:
r=num%10;
num/=10;
if(r>4 && r<8)
rev=rev*10+r;
if(num)
goto sasi;
printf("%d\n",rev);
}
*/
//21.)sum of 1st odd digit
/*#include<stdio.h>
int main()
{
int num,r,rev=0,rev1=0,sum=0,count=0;
scanf("%d",&num);
sasi:
r=num%10;
num/=10;
rev=rev*10+r;
if(num)
goto sasi;
printf("%d\n",rev);
sasi1:
rev1=rev%10;
rev/=10;
sum+=rev1;
count++;
if(count<3)
goto sasi1;
printf("%d\n",sum);
}
*/
//22.) sum of 1st 3 odd digits
/*#include<stdio.h>
int main()
{
int num,r,rev1,rev=0,count=0,sum=0;
scanf("%d",&num);
sasi:
r=num%10;
num/=10;
rev=rev*10+r;
if(num)
goto sasi;
printf("%d\n",rev);
sasi1:
rev1=rev%10;
rev/=10;
count++;
if(count<=3 && rev1)
if(rev1%2!=0)
sum+=rev1;
if(rev1)
goto sasi1;
printf("%d\n",sum);
}
*/
//23.)print 2nd last digit

/*#include<stdio.h>
int main()
{
int num,r,count=0;
scanf("%d",&num);
sasi:
r=num%10;
num/=10;
count++;
if(count<=1)
goto sasi;
printf("%d\n",r);
}
*/
// 24.)print middle digit
#include<stdio.h>
int main()
{
int num,r,digit=0,pos=0;
scanf("%d %d",&num,&digit);
sasi:
num/=10;
digit++;
goto sasi;
temp=num;
sasi1:
r=temp%10;
if(




























































 


