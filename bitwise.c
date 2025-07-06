
// WAP IN C TO PRINT GIVEN EVEN FACTOR
/*#include<stdio.h>
void main()
{
int num,i;
scanf("%d",&num);
for(i=1;i<=num;i++)
if(num%i==0 && i%2==0)
printf("%d\n",i);
}*/

// WAP IN C TO COUNT DIGITS MORE THAN 5

/*#include<stdio.h>
void main()
{
int num,count=0;
scanf("%d",&num);
for(num;num!=0;num/=10;)
{
if(num%10>5)
count++;
}
printf("%d\n",count);
}
*/

//WAP IN C TO SUM OF THE EVEN DIGITS

/*#include<stdio.h>
int main()
{
init num,digits,sum=0;
scanf("%d",&num);
for(num;num!=0;num/=10)
{
digits=num%10;
if(digits%2==0)
sum+=digits;
}
printf("%d\n",sum);
}
*/


//  WAP IN C TO PRINT ALL ODD FACTORSOF IN GIVEN NUM


/*#include<stdio.h>
int main()
{
int num ,i;
scanf("%d",&num);
for (i=1;i<=num;i++)
if (num%i==0&&i%2!=0)
printf("%d\n",i);
}
*/

//WAP IN C TO PRINT EVEN NUMBER USING BITWISE PROGRAM

/*
#include<stdio.h>
int main()
{
int s,e,i;
scanf("%d %d",&s,&e);
for(i=s;i<=e;i+=1)
if((i&1)==0)  // formula for check the given no is odd or not -->((num&1)==0)
printf("%d",i);
}*/

 // WAP IN C TO PRINT ALTERNATE ODD NUMBER BETWEEN 21 AND 39 

/*
#include<stdio.h>
int main()
{
int count=0;
for(int i=21;i<=39;i++)
{
if(i%2!=0)
{
if(count%2==0)
printf("%d",i);
count++;
}
}
}
*/


//WAPIN C TO PRINT GIVEN SERIES

/*#include<stdio.h>
int main()
{
int star.limits;
scanf("%d",&star);
for(int i=0;i<=limits;i++)
{
printf("%d\n",star);
star+=i;
}
}
*/

//WAP I C TO PRINT GIVEN SERIES


/*#include<stdio.h>
int main()
{
int star,limits,differ;
scanf("%d %d %d", &star,&limits,&differ);
for(int i=0;i<limits;i++);
{
printf("%d\n",star)
star+=differ;
differ--;
}
}
*/



//WAP IN C TO PRINT GIVEN SERIES

/*#include<stdio.h>
int main()
{
int num,i,result;
scanf("%d",&num);
for (i=1;i<result;i++)
{
result=i*i*i+1;
print("%d\n",result);
}
}
*/
 //12304-->(0NE TWO THREE ZERO FOUR)OUTPUT


/*#include<stdio.h>
int main()
{
int dum,rev=0,num,sum;
scanf("%d",&num);
for(;num;num/=10)
{
sum=num%10;
rev=rev*10+sum;
}
for(;rev;rev/=10)
{
dum=rev%10;
if(dum==0)
printf("zero ");
else if(dum==1)
printf("one ");
else if(dum==2)
printf("two ");
else if(dum==3)
printf("three ");
else if(dum==4)
printf("four ");
else if(dum==5)
printf("five ");
else if(dum==6)
printf("six ");
else if(dum==7)
printf("seven ");
else if(dum==8)
printf("eight ");
else if(dum==9)
printf("nine ");
}
}
*/

//wap to check given number is palindrome (or) not num which is equal to us use

/*#include<stdio.h>
int main()
{
int num ,r,rev,temp;
scanf("%d",&num);
temp=num;
for(rev=0;temp;temp=temp/10)
{
r=temp%10;
rev=rev*10+r;
}
if(num==rev)
printf("palindrome number\n");
else
printf("not a pailndrome\n");
}
*/
// wap in c to sum of first and last digit of a given number 
/*
#include<stdio.h>
int main()
{
int num,r,temp,digits=0,sum=0,count=0;
scanf("%d",&num);
for(temp=num;temp;temp=temp/10,digits++);
for(;num;num/=10)
{
r=num%10;
count++;
if(count==1||count==digits)
sum+=r;
}
printf("%d",sum);
}
*/

// wap in c to print factors of a given number

/*#include<stdio.h>
int main()
{
int num,i;
scanf("%d",&num);
for(i=1;i<=num;i++)
if(num%i==0)
printf("%d ",i);
}
*/
// another method 
/*#include<stdio.h>
int main()
{
int num,i,count=0,sum=0;
scanf("%d",&num);
for(i=1;i<=num;i++)
if(num%i==0)
{
count++;
printf("%d ",i);
sum+=i;
}
printf("sum=%d count=%d\n",sum,count);
}
*/

// prime factors or not

/*#include<stdio.h>
int main()
{
int num,i,count=0;
scanf("%d",&num);
for(i=1;i<=num;i++)
if(num%i==0)
count++;
if(count==2)
printf("prime number \n");
else
printf("not a prime number\n");
}*/

// Another method

/*#include<stdio.h>
int main()
{
int num,i,count=0;
scanf("%d",&num);
for(i=2;i<num;i++)
if(num%i==0)
count++;
if(count==0 && num!=0)
printf("prime number \n");
else
printf("not a prime number\n");
}
*/
////////////////////      BREAK STATEMENT      /////////////
// Prime factors 


/*#include<stdio.h>
int main()
{
int num,i;
scanf("%d",&num);
for(i=2;i<num;i++)
if(num%i==0)
break;
if(num==i)
printf("prime number \n");
else
printf("not a prime number\n");
}
*/

// perfect number or not

/*
#include<stdio.h>
int main()
{
int num,i,sum=0;
scanf("%d",&num);
for(i=1;i<num;i++)
if(num%i==0)
sum+=i;
if(num==sum)
printf("precfect number \n");
else
printf("not a precfect number\n");
}
*/

// wap in c to print binary of a given number of a normal method 
/*
#include<stdio.h>
int main()
{
int num,pos;
scanf("%d",&num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
}
*/


// wap in c to print binary of a given number of a revrse oder 

/*#include<stdio.h>
int main()
{
int num,pos;
scanf("%d",&num);
for(pos=0;pos<=31;pos++)
printf("%d",num>>pos&1);
}
*/

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



