// normal method 
#include<stdio.h>
int main()
{
int i,j;
for(i=0;i<=3;i++)
{
for(j=0;j<=3;j++)
printf("%d",j);
printf("\n");
}
printf("%d",i);
}
OUTPUT===>
0123
0123
0123
0123
 
/////////////    PATTERN       //////////////
//1.)
#include<stdio.h>
int main()
{
int i,j;
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
printf("%d",i);
printf("\n");
}
}  
OUTPUT 
000
111
222
//2.)
#include<stdio.h>
int main()
{
int i,j;
for(i=0;i<=2;i++)
{
for(j=0;j<=i;j++)
printf("%d ",i);
printf("\n");
}
}  
OUTPUT 
0
1 1
2 2 2
//3.)
#include<stdio.h>
int main()
{
int i,j;
for(i=0;i<=2;i++)
{
for(j=0;j<=2-i;j++)
printf("%d ",i);
printf("\n");
}
}  
OUTPUT
0 0 0
1 1 
2
//4.)
#include<stdio.h>
int main()
{
int i,j;
for(i=0;i<=2;i++)
{
for(j=0;j<=i+2;j++)
printf("%d ",i);
printf("\n");
}
}  
OUTPUT
0 0 0 
1 1 1 1 
2 2 2 2 2 
 //1.) output//
1 
1 2
1 2 4
1 2 4 7
1 2 4 7 11 
#include<stdio.h>
int main()
{
int i,j,temp,val;
for(i=1;i<5;i++)
{
temp=0;
val=1;
for(j=0;j<=i;j++)
{
val=val+temp;
printf("%d ",val);
temp++;
}
printf("\n");
}
}
//2.)
1 
1 4 
1 4 9
1 4 9 16    
///////////////////////      ASSIGNMENT -- 1        ///////////////
//1.)
/*
1 
1 3
1 3 5
1 3 5 7
*/
#include<stdio.h>
int main()
{
int i,j,n=5,sum;
for(i=0;i<n;i++)
{
for(j=0,sum=1;j<i+1;j++,sum++)
printf("%d ",sum+j);
printf("\n");
}
}
//2.)
2
2 4
2 4 6
2 4 6 8
2 4 6 8 10
#include<stdio.h>
int main()
{
int i,j,n=5;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
printf("%d ",j*2);
printf("\n");
}
}
//3.)
1 2 3 4 5 6
1 2 3 4 5 
1 2 3 4
1 2 3
1 2 
1 
#include<stdio.h>
int main()
{
int i,j,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n-i;j++)
printf("%d",j+1);
printf("\n");
}
}
 //4.)
 1 3 5 7 9 
   3 5 7 9
     5 7 9 
       7 9 
         9
#include<stdio.h>
int main()
{
int n,i,j,s;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(s=0;s<i;s++)
printf(" ");
for(j=2*i+1;j<2*n;j+=2)
printf("%d ",j);
printf("\n");
}
}

























