///////// practice //////
/*#include<stdio.h>
int main()
{
int num1,num2,mul,div,modulus,addition,subraction,temp;
scanf("%d %d %d",&num1,&num2,&temp);
switch(temp)
{
case 1:
	printf("addition=%d\n",addition=num1+num2);
	break;
case 2:
	printf("subraction=%d\n",subraction=num1-num2);
	break;
case 3:
	printf("mul=%d\n",mul=num1*num2);
	break;
case 4:
	printf("div=%d\n",div=num1/num2);
	break;
case 5:
	printf("modulus=%d\n",modulus=num1%num2);
	break;
default:
	printf("Unknown number\n");
}
}
*/
/// Another Method [Because not using break method]
/*#include<stdio.h>
int main()
{
int num1,num2,mul,div,modulus,addition,subraction,temp;
scanf("%d %d %d",&num1,&num2,&temp);
switch(temp)
{
case 1:
	printf("addition=%d\n",addition=num1+num2);
case 2:
	printf("subraction=%d\n",subraction=num1-num2);
case 3:
	printf("mul=%d\n",mul=num1*num2);
case 4:
	printf("div=%d\n",div=num1/num2);
case 5:
	printf("modulus=%d\n",modulus=num1%num2);
default:
	printf("Unknown number\n");
}
}
*/

/// Error check or how its work 
// case label does not reduce to an integer constant
/*#include<stdio.h>
int main()
{
int num1,num2,mul,div,modulus,addition,subraction;
int temp;
scanf("%d %d %d",&num1,&num2,&temp);
switch(temp)
{
case 1.0:
	printf("addition=%d\n",addition=num1+num2);
	break;
case 2:
	printf("subraction=%d\n",subraction=num1-num2);
	break;
case 3:
	printf("mul=%d\n",mul=num1*num2);
	break;
case 4:
	printf("div=%d\n",div=num1/num2);
	break;
case 5:
	printf("modulus=%d\n",modulus=num1%num2);
	break;
default:
	printf("Unknown number\n");
}
}
*/

//3.)duplicate case value and also previously used here(case 1: using two times)
/*#include<stdio.h>
int main()
{
int num1,num2,mul,div,modulus,addition,subraction,temp;
scanf("%d %d %d",&num1,&num2,&temp);
switch(temp)
{
case 1:
	printf("addition=%d\n",addition=num1+num2);
	break;
case 2:
	printf("subraction=%d\n",subraction=num1-num2);
	break;
case 3:
	printf("mul=%d\n",mul=num1*num2);
	break;
case 1:
	printf("div=%d\n",div=num1/num2);
	break;
case 5:
	printf("modulus=%d\n",modulus=num1%num2);
	break;
default:
	printf("Unknown number\n");
}
}
*/
//4.)case label does not reduce to an integer constant because only (case  in inpit gives int or char) declaration will define
/*
#include<stdio.h>
int main()
{
int num1,num2,mul,div,modulus,addition,subraction,temp;
int q,b;
scanf("%d %d %d",&num1,&num2,&temp);
switch(temp)
{
case q:
	printf("addition=%d\n",addition=num1+num2);
	break;
case b:
	printf("subraction=%d\n",subraction=num1-num2);
	break;
case 3:
	printf("mul=%d\n",mul=num1*num2);
	break;
case 4:
	printf("div=%d\n",div=num1/num2);
	break;
case 5:
	printf("modulus=%d\n",modulus=num1%num2);
	break;
default:
	printf("Unknown number\n");
}
}
*/
// 1.)scanf using int form the user
 //2.)scanf from the user in because using one space give(scanf(" %c",&char) uswe this and get ouput
/*
#include<stdio.h>
int main()
{
int num1,num2,n;
char option;
scanf("%d %d",&num1,&num2);
printf("Enter the option\n + add\n - subraction\n* multi\n/ div\n");
scanf(" %c",&option);
switch(option)

{
case '+':
	printf("n=%d\n",n=num1+num2);
	break;
case '-':
	printf("n=%d\n",n=num1-num2);
	break;
case '*':
	printf("n=%d\n",n=num1*num2);
	break;
case '/':
	printf("n=%d\n",n=num1/num2);
	break;
default:
	printf("Unknown number\n");
}
}
*/      
///// all condition prime,factors,factorial,even and odd number


#include<stdio.h>
int main()
{
	int num,temp,sum=0,pos,i,r;
	scanf("%d",&num);
	printf("Enter the temp\n1 Even or Odd nor\n2 Prime or Not no\n3 Perfect or Not no\n4 factor\n5 BB\n6 RBB\n");
	scanf("%d",&temp);
	switch(temp)
	{
		case 1:
			for(i=0;i<1;i++)
			{
				if(num%2==0)
					printf("Even number\n");
				else
					printf("Odd number\n");
			}
			break;
		case 2:
			for(i=1;i<num;i++)
			{
				if(num%i==0)
					break;
			}
				if(num==i)
					printf("prime number num=%d\n",num);
				else
					printf(" not prime number num=%d\n",num);
			break;
		case 3:
			{
				for(i=1;i<num;i++)
					if(num%i==0)
						sum+=i;
				if(sum==num)
					printf("perfect number\n");
				else
					printf("not a perfect number\n");
				printf("\n");
			}
			break;
		case 4:
			{
				for(i=1;i<=num;i++)
					if(num%i==0)
						printf("%d ",i);
			}
			printf("\n");
			break;
		case 5:
			for(pos=31;pos>=0;pos--)
			{
				printf("%d",num>>pos&1);
			}
			printf("\n");
			break;
		case 6:
			{
				for(pos=0;pos<=31;pos++)
					printf("%d",num>>pos&1);
				printf("\n");
				break;
			}
	}
}





















