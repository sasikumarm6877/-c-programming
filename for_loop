//1.)sum of digit
#include<stdio.h>
int main()
{
int num,r,sum=0;
scanf("%d",&num);
for(;num;num/=10)
{
r=num%10;
sum+=r;
}
printf("%d\n",sum);
}
//2.)  sum of odd digit
#include<stdio.h>
int main()
{
int num,r,sum=0;
scanf("%d",&num);
for(;num;num/=10)
{
r=num%10;
if(r%2!=0)
sum+=r;
}
printf("%d\n",sum);
}
//3.) sum of digit more than 5

#include<stdio.h>
int main()
{
int num,r,sum=0;
scanf("%d",&num);
for(;num;num/=10)
{
r=num%10;
if(r>5)
sum+=r;
}
printf("%d\n",sum);
}
//4.) sum of less than 7
#include<stdio.h>
int main()
{
int num,r,sum=0;
scanf("%d",&num);
for(;num;num/=10)
{
r=num%10;
if(r<7)
sum+=r;
}
printf("%d\n",sum);
}
//5.)sum of digit in between 3 to 8
#include<stdio.h>
int main()
{
int num,r,sum=0;
scanf("%d",&num);
for(;num;num/=10)
{
r=num%10;
if(r>=3 && r<=8)
sum+=r;
}
printf("%d\n",sum);
}
//6.) count digit in num
#include<stdio.h>
int main()
{
int num,r,count=0;
scanf("%d",&num);
for(;num;num/=10)
{
r=num%10;
count++;
}
printf("%d\n",count);
}
//7.)count odd digits in num
#include<stdio.h>
int main()
{
int num,r,count=0;
scanf("%d",&num);
for(;num;num/=10)
{
r=num%10;
if(r%2!=0)
count++;
}
printf("%d\n",count);
}
//8.)count even digit more than 4
#include<stdio.h>
int main()
{
int num,r,count=0;
scanf("%d",&num);
for(;num;num/=10)
{
r=num%10;
if(r%2==0&& r>4)
//if(r>4)
count++;
}
printf("%d\n",count);
}
//9.)count odd digit more than 3 and less than 8
#include<stdio.h>
int main()
{
int num,r,count=0;
scanf("%d",&num);
for(;num;num/=10)
{
r=num%10;
if((r%2!=0)&&(r>3 &&r<8))
count++;
}
printf("%d\n",count);
}
//10.)count even digit b/w 1 to 7
#include<stdio.h>
int main()
{
int num,r,count=0;
scanf("%d",&num);
for(;num;num/=10)
{
r=num%10;
if((r%2==0)&&(r>1 && r<7))
count++;
}
printf("%d\n",count);
}
//11.)sum of even digit
#include<stdio.h>
int main()
{
int num,r,sum=0;
scanf("%d",&num);
for(;num;num/=10)
{
r=num%10;
if(r%2==0)
sum+=r;
}
printf("%d\n",sum);
}
//12.)sum of last 3 digit
#include<stdio.h>
int main()
{
int num,r,sum=0,count=0;
scanf("%d",&num);
for(;num;num/=10)
{
r=num%10;
count++;
if(count<=3)
sum+=r;
}
printf("%d\n",sum);
}
//13.) sum of last 3 odd digit
#include<stdio.h>
int main()
{
int num,r,sum=0,count=0;
scanf("%d",&num);
for(;count<3;num/=10)
{
r=num%10;
if(r%2!=0)
{
sum+=r;
count++;
}
}
printf("%d\n",sum);
}
//14.)print last 3 digits 
#include<stdio.h>
int main()
{
int num,temp,i=0;
scanf("%d",&num);
for(i;i<3;i++)
{
temp=num%10;
num/=10;
printf("%d ",temp);
}
printf("\n");
}
//15.)print frist digit  
#include<stdio.h>
int main()
{
int num,r,dum,rev=0;
scanf("%d",&num);
for(;num;num/=10)
{
r=num%10;
rev=rev*10+r;
}
dum=rev%10;
printf("%d\n",dum);
}
//16.)Reverse the number
#include<stdio.h>
int main()
{
int num,r,rev=0;
scanf("%d",&num);
for(;num;num/=10)
{
r=num%10;
rev=rev*10+r;
}
printf("%d \n",rev);
}
//17.) Revrse the odd digit 
#include<stdio.h>
int main()
{
int num,r,temp=0;
scanf("%d",&num);
for(;num;num/=10)
{
r=num%10;
if(r%2!=0)
temp=temp*10+r;
}
printf("%d\n",temp);
}
//18.) Revrse the last 2 digit 
#include<stdio.h>
int main()
{
int num,r,i,temp,rev=0;
scanf("%d",&num);
r=num%100;
for(i=0;i<2;i++)
{
temp=r%10;
rev=rev*10+temp;
r/=10;
}
printf("%d",rev);
}
//19.) Reverse digit more than 5.
#include<stdio.h>
int main()
{
int num,r,rev=0,temp;
scanf("%d",&num);
for(;num;)
{
r=num%10;
num/=10;
if(r>5)
{
rev=rev*10+r;
}
}
printf("%d",rev);
}
//20.) Reverse digit more than 4 and less than 8 
#include<stdio.h>
int main()
{
int num,r,rev=0,temp;
scanf("%d",&num);
for(;num;)
{
r=num%10;
num/=10;
if(r>4 && r<8)
{
rev=rev*10+r;
}
}
printf("%d",rev);
}
//21. Sum of 1st 3 digit 
#include<stdio.h>
int main()
{
int num,r,rev=0,temp,temp1,i,sum=0;
scanf("%d",&num);
for(;num;)
{
r=num%10;
num/=10;
rev=rev*10+r;
}
for(i=0;i<3;i++)
{
temp=rev%10;
rev/=10;
sum+=temp;
}
printf("%d",sum);
}
//22. Sum of 1st 3 odd digit . 
#include<stdio.h>
int main()
{
int num,r,rev=0,temp,temp1,i,sum=0;
scanf("%d",&num);
for(;num;)
{
r=num%10;
num/=10;
rev=rev*10+r;
}
for(i=0;i<3;)
{
temp=rev%10;
rev/=10;
if(temp%2!=0)
{
i++;
sum+=temp;
}
}
printf("%d",sum);
}
//23.) Print 2nd last digit .
#include<stdio.h>
int main()
{
int num,r,rev=0,temp;
scanf("%d",&num);
for(int i=0;i<2;i++)
{
r=num%10;
num/=10;
}
rev=rev*10+r;
printf("%d\n",rev);
}
//24. Print middle digit 
#include<stdio.h>
int main()
{
int num,count=0,mid,temp,temp1;
scanf("%d",&num);
temp=num;
for(;temp>0;temp/=10)
count++;
mid=count/2;
temp=num;
for(int i=0;i<count-mid;i++)
{
temp1=temp%10;
temp/=10;
}
printf("%d\n",temp1);
}
//26.)Print 1st odd digit from start.
#include<stdio.h>
int main()
{
int num,r1,rev=0,temp;
scanf("%d",&num);
for(;num;num/=10)
{
temp=num%10;
rev=rev*10+temp;
}
for(;rev>0;rev/=10)
{
r1=rev%10;
if(r1%2!=0)
{
printf("%d\n",r1);
break;
}
}
}
//27.) Sum of 1st and last digit 
#include<stdio.h>
int main()
{
int num,rev=0,r,rev1,r2;
scanf("%d",&num);
for(int temp=num;temp>0;temp/=10)
{
r=temp%10;
rev=rev*10+r;
}
rev1=rev%10;
r2=num%10;
printf("%d\n",rev1+r2);
}
//28.)Sum of 1st and 2nd last
#include<stdio.h>
int main()
{
int num,r,i,rev1,r3,rev=0;
scanf("%d",&num);
for(i=0;num;)
{
r=num%10;
i++;
if(i==2)
{
r3=r;
}
num/=10;
rev=rev*10+r;
}
printf("%d\n",rev);
rev1=rev%10;
printf("%d\n",r3+rev1);
}
// WAP IN C TO PRINT GIVEN EVEN FACTOR
#include<stdio.h>
void main()
{
int num,i;
scanf("%d",&num);
for(i=1;i<=num;i++)
if(num%i==0 && i%2==0)
printf("%d\n",i);
}
// WAP IN C TO COUNT DIGITS MORE THAN 5
#include<stdio.h>
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
//WAP IN C TO SUM OF THE EVEN DIGITS
#include<stdio.h>
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
//  WAP IN C TO PRINT ALL ODD FACTORSOF IN GIVEN NUM
#include<stdio.h>
int main()
{
int num ,i;
scanf("%d",&num);
for (i=1;i<=num;i++)
if (num%i==0&&i%2!=0)
printf("%d\n",i);
}
//WAP IN C TO PRINT EVEN NUMBER USING BITWISE PROGRAM
#include<stdio.h>
int main()
{
int s,e,i;
scanf("%d %d",&s,&e);
for(i=s;i<=e;i+=1)
if((i&1)==0)  // formula for check the given no is odd or not -->((num&1)==0)
printf("%d",i);
}
// WAP IN C TO PRINT ALTERNATE ODD NUMBER BETWEEN 21 AND 39
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
//WAPIN C TO PRINT GIVEN SERIES
#include<stdio.h>
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
//WAP I C TO PRINT GIVEN SERIES
#include<stdio.h>
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
}                                                                                                     93,0-1        3
//WAP IN C TO PRINT GIVEN SERIES

#include<stdio.h>
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

//12304-->(0NE TWO THREE ZERO FOUR)OUTPU
#include<stdio.h>
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
//wap to check given number is palindrome (or) not num which is equal to us use
#include<stdio.h>
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
// wap in c to sum of first and last digit of a given number 
#include<stdio.h>
204int main()
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
// wap in c to print factors of a given number

#include<stdio.h>
int main()
{
int num,i;
scanf("%d",&num);
for(i=1;i<=num;i++)
if(num%i==0)
printf("%d ",i);
}

// another method 
#include<stdio.h>
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
// prime factors or not
#include<stdio.h>
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
}

 // Another method
#include<stdio.h>
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
// Prime factors  
#include<stdio.h>
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
// perfect number or not
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
//1.) wap in c to delete in specific digit in given number
#include<stdio.h>
int main()
{
int num,del,temp,dum,rev1=0,rev2=0;
scanf("%d %d",&num ,&del);
for(;num;num/=10)
{
temp=num%10;
if(temp!=del)
rev1=rev1*10+temp;
}
for(;rev1;rev1/=10)
{
dum=rev1%10;
rev2=rev2*10+dum;
}
printf("%d\n",rev2);
}
//2.) wap to repalce multiple 3 digits 1 in a given number
#include<stdio.h>
int main()
{
int num,dum,temp,sum,rev=0,mul;
scanf("%d %d",&num,&mul);
for(;num;num/=10)
{
sum=num%10;
rev=rev*10+sum;
}
for(;rev;rev/=10)
{
dum=rev%10;
if(dum%mul==0)
printf("1");
else
printf("%d",dum);
}
printf("\n");
}

                                         


























