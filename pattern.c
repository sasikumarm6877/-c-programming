/*//1.) pattern method(*)
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * *
#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("* ");
printf("\n");
}
}
//2.) pattern method(*)
* 
* * 
* * * 
* * * * 
* * * * * 
#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=1;j<=i+1;j++)
printf("* ");
printf("\n");
}
}

//3.) pattern method in number
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5
#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d ",j+1);
printf("\n");
}
}
//4.) pattern method(same number)
5 5 5 5 5 
5 5 5 5 5 
5 5 5 5 5 
5 5 5 5 5 
5 5 5 5 5
#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("5 ");
printf("\n");
}
}
//5.) pattern method(number)
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
printf("%d ",j+1);
printf("\n");
}
}
//6.) pattern method
* * * * * 
* * * * 
* * * 
* * 
* 
#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=1;j<=n-i;j++)
printf("* ");
printf("\n");
}
}
//7.) pattern method (number)
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1
#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=1;j<=n-i;j++)
printf("%d ",j);
printf("\n");
}
}
//8.) pattern method
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<i+1;j++)
printf("%d ",i+1);
printf("\n");
}
}
//9.)pattern method(number)
1 1 1 1 1 
2 2 2 2 
3 3 3 
4 4 
5
#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=1;j<=n-i;j++)
{
printf("%d ",i+1);
}
printf("\n");
}
}
//10.)pattern method(number)
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1
#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n-i;j++)
printf("%d ",j+1);
printf("\n");
}
}
//11.) pattern method (*)
* * * * * 
*       * 
*       * 
*       * 
* * * * * 
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||i==n-1||j==0||j==n-1)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
//12.)pattern method(number)
1 2 3 4 5 
1       5 
1       5 
1       5 
1 2 3 4 5
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||i==n-1||j==0||j==n-1)
			{
				printf("%d ",j+1);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
//13.) pattern method (number)
1 1 1 1 1 
2       2 
3       3 
4       4 
5 5 5 5 5 
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||i==n-1||j==0||j==n-1)
			{
				printf("%d ",i+1);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
//14.) pattern method(*)
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
#include<stdio.h>
int main()
{
int n,i,k,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(k=0;k<n-i-1;k++)
printf("  ");
for(j=0;j<i*2+1;j++)
printf("* ");
printf("\n");
}
}
//14.) same but only using two for loops
       * 
     * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n+i;j++)
{
if(j<n-i-1)
printf("  ");
else
printf("* ");
}
printf("\n");
}
}
//15.) pattern method(number)
        4 
      3 4 5 
    2 3 4 5 6 
  1 2 3 4 5 6 7 
0 1 2 3 4 5 6 7 8 
#include<stdio.h>
int main()
{
int n,i,k,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(k=0;k<n-i-1;k++)
printf("  ");
for(j=0;j<i*2+1;j++)
printf("%d ",j);
printf("\n");
}
}
//17.) pattern method (number)
        1 
      1 2 3 
    1 2 3 4 5 
  1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 9 
#include<stdio.h>
int main()
{
int n,i,k,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(k=0;k<n-i-1;k++)
printf("  ");
for(j=0;j<i*2+1;j++)
printf("%d ",j+1);
printf("\n");
}
}
//18.)pattern method(number)
        5 
      5 6 7 
    5 6 7 8 9 
  5 6 7 8 9 10 11 
5 6 7 8 9 10 11 12 13
#include<stdio.h>
int main()
{
int n,i,k,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(k=0;k<n-i-1;k++)
printf("  ");
for(j=0;j<i*2+1;j++)
printf("%d ",j+5);
printf("\n");
}
}
//19.) pattern method()
  * * * * * 
    * * * * 
      * * * 
        * * 
          * 
#include<stdio.h>
int main()
{
int n,i,k,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(k=0;k<=i;k++)
printf("  ");
for(j=0;j<n-i;j++)
printf("* ");
printf("\n");
}
}
//20.)pattern method()
  * * * * * * * * * 
    * * * * * * * 
      * * * * * 
        * * * 
          * 

#include<stdio.h>
int main()
{
int n,i,k,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(k=0;k<=i;k++)
printf("  ");
for(j=0;j<((2*n)-(2*i)-1);j++)
printf("* ");
printf("\n");
}
}
//21.)pattern method(mirror image(*))
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
   * * 
  * * * 
 * * * *
#include<stdio.h>
int main()
{
int n,i,s,j,l;
scanf("%d",&n);
for(i=-4;i<n;i++)
{
if(i<0)
l=-i;
else
l=i;
for(s=0;s<n-l;s++)
printf(" ");      // Give only one space
for(j=0;j<l+1;j++)
printf("* ");
printf("\n");
}
}
//21.) same method using two loops(*)
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
   * * 
  * * * 
 * * * * 
#include<stdio.h>
int main()
{
int n,i,j,l;
scanf("%d",&n);
for(i=-4;i<n;i++)
{
if(i<0)
l=-i;
else
l=i;
for(j=0;j<n+1;j++)
{
if(j<n-l)
printf(" ");
else
printf("* ");
}
printf("\n");
}
}
//22.) pattern method by using two loops
    * 
   * * 
  * * * 
 * * * * 
  * * * 
   * * 
    * 
#include<stdio.h>
int main()
{
int n,i,j,l;
scanf("%d",&n);
for(i=-4;i<n;i++)
{
if(i<0)
l=-i;
else
l=i;
for(j=0;j<n+1;j++)
{
if(j<l+1)
printf(" ");
else
printf("* ");
}
printf("\n");
}
}
//23.) pattern method(*)
* * * * * 
  * * * * 
    * * * 
      * * 
        * 
      * * 
    * * * 
  * * * *
#include<stdio.h>
int main()
{
int n,i,s,j,l;
scanf("%d",&n);
for(i=-4;i<n;i++)
{
if(i<0)
l=-i;
else
l=i;
for(s=0;s<n-l;s++)
printf("  ");   // Give two space means
for(j=0;j<l+1;j++)
printf("* ");
printf("\n");
}
}
//23.) pattern method(*)
* * * * * 
* * * * 
* * * 
* * 
* 
* * 
* * * 
* * * * 
* * * * * 
#include<stdio.h>
int main()
{
int n,i,j,l;
scanf("%d",&n);
for(i=-n;i<=n;i++)
{
if(i<0)
l=-i;
else
l=i;
for(j=0;j<l+1;j++)
printf("* ");
printf("\n");
}
}
//24.)pattern method(*)
      * 
    * * * 
  * * * * * 
* * * * * * * 
  * * * * * 
    * * * 
      *
#include<stdio.h>
int main()
{
int n,l,s,i,j;
scanf("%d",&n);
for(i=-n;i<=n;i++)
{
if(i<0)
l=-i;
else
l=i;
for(s=0;s<l;s++)
printf("  ");
for(j=0;j<2*(n-l)+1;j++)
printf("* ");
printf("\n");
}
}
//24.) same method twop will using
      * 
    * * * 
  * * * * * 
* * * * * * * 
  * * * * * 
    * * * 
      *
#include<stdio.h>
int main()
{
int n,l,i,j;
scanf("%d",&n);
for(i=-n;i<=n;i++)
{
if(i<0)
l=-i;
else
l=i;
for(j=0;j<2*n-l+1;j++)
{
if(j<l)
printf("  ");
else
printf("* ");
}
printf("\n");
}
}
//25.) pattern method(*)
*               * 
* *           * * 
* * *       * * * 
* * * *   * * * * 
* * * * * * * * * 
#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(j=-n;j<=n;j++)
{
if(-(n-i)<j && j<(n-i))
printf("  ");
else
printf("* ");
}
printf("\n");
}
}
*/

















