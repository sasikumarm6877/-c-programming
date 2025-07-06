         // forward goto 
#include<stdio.h>
void main()
{
printf("hello\n");
goto sasi;
printf("hai 1\n");
printf("hai 2\n");
sasi:
printf("bye\n");
}
//           backword goto(infine loop)
#include<stdio.h>
void main()
{
printf("hello\n");
sasi:
printf("hai 1\n");
printf("hai 2\n");
goto sasi;
printf("bye\n");
}
//  backward goto(loop control(3 times))
/*#include<stdio.h>
void main()
{
printf("hello\n");
int c=0;
sasi:
printf("hai 1\n");
printf("hai 2\n");
c++;
if(c<=2)
goto sasi;
printf("bye\n");
}
   //WAP TO PRINT MULTIPILACTION TABLE FOR GIVEN NUMBER USING GOTO
#include<stdio.h>
void main()
{
int num,i;
scanf("%d",&num);
i=1;
sasi:
printf("%d * %d =%d\n",num,i,num*i);
i++;
if(i<11)
goto sasi;
}
 // anothe method(up)
#include<stdio.h>
void main()
{
int num,i;
scanf("%d",&num);
i=1;
sasi:
printf("%d * %d =%d\n",num,i,num*i);
i++;
if(i<=10)
goto sasi;
}
//   anothe method(up)
/*#include<stdio.h>
void main()
{
int num,i;
scanf("%d",&num);
i=1;
sasi:
printf("%d * %d =%d\n",num,i,num*i);
if(i++<10)
goto sasi;
}
// another method(up)
#include<stdio.h>
void main()
{
int num,i;
scanf("%d",&num);
i=1;
sasi:
printf("%d * %d =%d\n",num,i,num*i);
if(++i<=10)
goto sasi;
}
// another method(up)
#include<stdio.h>
void main()
{
int num,i;
scanf("%d",&num);
i=1;
sasi:
printf("%d * %d =%d\n",num,i,num*i);
if(++i<11)
goto sasi;
}
// WAP IN C TO COUNT DIGITS ANY NUMBEr
#include<stdio.>
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
// WAP IN C TO PRODUCT OF LAST 2 DIGITS OF NUMBER 
#include<stdio.h>
void main()
{
int num,count=0,r,r1=1;
scanf("%d",&num);
sasi:
if(count<2)
{
goto sasi;
printf("\n");// cut the line of 
}
// WAP TO GET ADDITION OF EACH DIGIT GIVEN NUMBER USING GOTO STATEMENT
#include<stdio.h>
void main()
{
int num,r,sum=0;
scanf("%d",&num);
sasi:
r=num%10;
sum=sum+r;
num=num/10;
if(num)
goto sasi;
printf("sum=%d\n",sum);
}
//  TASK (WAP TO GIVEN INPUT AND CONVERT BINARY CODE TO HOW MANY SET,CLEAT COUNT GIVE)
#include<stdio.h>
void main()
{
int num,result,set=0,clear=0,pos=31;
scanf("%d\n",&num);
sasi:
result=num>>pos&1;
printf("%d",result);
pos--;
if(result==0)
clear++;
else if(result==1)
set++;
if(pos>=0)
goto sasi;
printf("set=%d clear=%d\n",set,clear);
printf("\n");
}
// WAP TO GIVEN INPUT NUMBER AND HOW MANY DIGITS ARE THERE COUNT 
#include<stdio.h>
void main()
{
long int num,digits=0,r;
scanf("%ld",&num);
sasi:
r=num%10;
num=num/10;
digits++;
if(num)
goto sasi;
printf("digits=%ld\n",digits);
}
// anothe method(up)
#include<stdio.h>
void main()
{
long int num,digits=0;
scanf("%ld",&num);
sasi:
digits++;
num=num/10;
if(num!=0)
goto sasi;
printf("digits=%ld\n",digits);
}
//1.) sum of digits
#include<stdio.h>
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
//2.)sum of odd digits
#include<stdio.h>
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
}
// 3.) sum of digits more than 5
#include<stdio.h>
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
//4.)sum of less than 7
#include<stdio.h>
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
}
// 5.) sum of digits in between 3 to 8
#include<stdio.h>
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
//6.) count digit in num
#include<stdio.h>
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
//7.) count odd digit in num
#include<stdio.h>
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
//8.) count even digits more than 4
#include<stdio.h>
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
//9.) count odd digit more than 3 and less than 8
#include<stdio.h>
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
//10.)count even digit between 1 to 7
#include<stdio.h>
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
//11.) sum of even digit
#include<stdio.h>
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
//12.)sum of last 3 digit
#include<stdio.h>
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
//13.) sum of last 3 odd digit
#include<stdio.h>
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
//14.)print last 3 digit from last
#include<stdio.h>
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
//15.)print 1st digit
#include<stdio.h>
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
//16.) reverse number
#include<stdio.h>
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
//17.)Revrese odd digit in num
#include<stdio.h>
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
//18.) Reverse last 2 digits
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
//19.) reverse digit more than 5
#include<stdio.h>
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
// 20.) Reverse digits more than 4 and less than 8
#include<stdio.h>
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
//22.) sum of 1st 3 odd digits
#include<stdio.h>
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
//23.)print 2nd last digit
#include<stdio.h>
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
// 24.)print middle digit
#include<stdio.h>
int main()
{
int num,mid,temp,temp1,count=0,i=0;
scanf("%d",&num);
temp=num;
sasi:
if(temp!=0)
{
temp/=10;
count++;
goto sasi;
}
mid=count/2;
temp=num;
sasi1:
if(i<count-mid)
{
temp1=temp%10;
temp/=10;
i++;
goto sasi1;
}
printf("%d",temp1);
}
//25.) print 1st odd digit from end
#include<stdio.h>
int main()
{
int num,sum,temp,temp1,digit=0;
scanf("%d",&num);
temp=num;
sasi:
if(temp!=0)
{
temp1=temp%10;
temp/=10;
if(temp1%2!=0)
{
sum=temp1;
digit++;
}
if(digit<1)
goto sasi;
printf("%d\n",sum);
}
//26.)print 1st odd digit start
#include<stdio.h>
int main()
{
int num,sum,temp,temp1,digit=0,rev=0;
scanf("%d",&num);
sasi:
if(num!=0)
{
temp=num%10;
num/=10;
}
rev=rev*10+temp;
if(num)
goto sasi;
sasi1:
if(rev!=0)
{
temp1=rev%10;
rev/=10;
}
if(temp1%2!=0)
{
sum=temp1;
digit++;
}
if(digit<1)
goto sasi1;
printf("%d",temp1);
}
//27.) sum of 1st and last digit
#include<stdio.h>
int main()
{
int num,temp,last,first;
scanf("%d",&num);
temp=num;
last=temp%10;
sasi:
if(temp>=10)
{
temp/=10;
goto sasi;
}
first=temp;
printf("%d",first+last);
}
//28.)print sum of 1st and last 2nd digit 
#include<stdio.h>
int main()
{
int num,last,llast,first;
scanf("%d",&num);
last=num%10;
num/=10;
llast=num%10;
sasi:
if(num>=10)
{
num/=10;
goto sasi;
}
first=num;
printf("%d\n",llast+first);
}
//////////////////////////
// WAP IN C TO COUNT DIGITS ANY NUMBER 
#include<stdio.h>
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
// WAP IN C TO PRODUCT OF LAST 2 DIGITS OF NUMBER
#include<stdio.h>
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
//WAP IN C TO SUM OF LAST 3 DIGITSOF NUMBER
#include<stdio.h>
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
// WAP IN C TO SUM OF DIGITS DIVISIBLE BY 3
#include<stdio.h>
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
//WAP IN C TO SUM OF ALTERNATE DIGITS(FROM REVERSE METHOD)
#include<stdio.h>
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
// WAP IN C TO COUNT DIGITS ANY NUMBER  
#include<stdio.h>
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
// WAP IN C TO PRODUCT OF LAST 2 DIGITS OF NUMBER 
#include<stdio.h>
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
// WAP IN C TO SUM OF DIGITS DIVISIBLE BY 3
#include<stdio.h>
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
//WAP IN C TO SUM OF ALTERNATE DIGITS(FROM REVERSE Method 
#include<stdio.h>
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
// WAP TO PRINT BINARY OF GIVEN INTEGER USING GOTO STATEMENT
#include<stdio.h>
void main()
{
int num,pos;
scanf("%d %d",&num,&pos);
sasi:
printf("%d",num>>pos&1);
pos--;
if(pos>=0)
goto sasi;
printf("\n");// cut the line of 
}
// WAP TO GET ADDITION OF EACH DIGIT GIVEN NUMBER USING GOTO STATEMENT
#include<stdio.h>
void main()
{
int num,r,sum=0;
scanf("%d",&num);
sasi:
r=num%10;
sum=sum+r;
num=num/10;
if(num)
goto sasi;
printf("sum=%d\n",sum);
}
//  TASK (WAP TO GIVEN INPUT AND CONVERT BINARY CODE TO HOW MANY SET,CLEAT COUNT GIVE)
#include<stdio.h>
void main()
{
int num,result,set=0,clear=0,pos=31;
scanf("%d\n",&num);
sasi:
result=num>>pos&1;
printf("%d",result);
pos--;
if(result==0)
clear++;
else if(result==1)
set++;
if(pos>=0)
goto sasi;
printf("set=%d clear=%d\n",set,clear);
printf("\n");
}
// WAP TO GIVEN INPUT NUMBER AND HOW MANY DIGITS ARE THERE COUNT 
#include<stdio.h>
void main()
{
long int num,digits=0,r;
scanf("%ld",&num);
sasi:
r=num%10;
num=num/10;
digits++;
if(num)
goto sasi;
printf("digits=%ld\n",digits);
}
// anothe method(up)
#include<stdio.h>
void main()
{
long int num,digits=0;
scanf("%ld",&num);
sasi:
digits++;
num=num/10;
if(num!=0)
goto sasi;
printf("digits=%ld\n",digits);
}






















































 







































