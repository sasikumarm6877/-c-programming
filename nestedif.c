/*#include<stdio.h>
void main()
{
int n1,n2,n3;
scanf("%d %d %d",&n1,&n2,&n3);
if(n1>n2)
{
	if(n1>n3)
	{
	printf("N1 is greater :%d\n",n1);
	}
	else
	printf("N3 is grater :%d\n",n3);
}
else
{
	if(n2>n3)
	{
	printf("N2 is greater :%d\n",n2);
	}
	else
	printf("N3 is greater:%d\n",n3);
}
}*/

                                  // INPUT 4 VALUES GIVES


#include<stdio.h>
void main()
{
int n1,n2,n3,n4;
scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
if(n1>n2)
{
	if(n1>n3)
	{
		if(n1>n4)
		{
		printf("N1 is greater :%d\n",n1);
		}
		else
		printf("N4 is greater :%d\n",n4);
	}
	else
	printf("N3 is greater :%d\n",n3);
}
else if(n2>n3)
{

	if(n2>n4)
	{
	printf("N2 is greater:%d\n",n2);
	}
	else
	printf("N4 is greater :%d\n",n4);
}
else if(n3>n4)
{
printf("N3 is greater :%d\n",n3);
}
else
printf("N4 is greater :%d\n",n4);
}
