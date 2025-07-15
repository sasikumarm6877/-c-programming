// how to calculate elements in the array and print the value of array 
/*#include<stdio.h>
int main()
{
int n,i,ele;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("%ld\n",sizeof a);
printf("%ld\n",sizeof a[0]);
ele=sizeof (a)/sizeof (a[0]);
printf("%d\n",ele);
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
*//// UP same method but reverse type
/*#include<stdio.h>
int main()
{
int n,i,ele;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("%ld\n",sizeof a);
printf("%ld\n",sizeof a[0]);
ele=sizeof (a)/sizeof (a[0]);
printf("%d\n",ele);
for(i=n-1;i>=0;i--)
printf("%d ",a[i]);
printf("\n");
}
*/
//scanning the array element and print the screen
/*#include<stdio.h>
int main()
{
int n,i;
printf("Enter the number:\n");
scanf("%d",&n);
int a[n];
printf("Before:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("After:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}*/
// same method but using reverse print but index value is not changed
/*#include<stdio.h>
int main()
{
int n,i,index;
printf("Enter the number:\n");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
index=0;
printf("Before:\n");
for(i=0;i<n;i++)
{
index=i;
printf("%d %d ",a[i],index);
printf("\n");
}
printf("After:\n");
for(i=n-1;i>=0;i--)
{
index=i;
printf("%d %d ",a[i],index);
printf("\n");
}
}*/
// UP method but index valuee is from [0]to start 
/*#include<stdio.h>
int main()
{
int n,i,index;
printf("Enter the number:\n");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
index=0;
printf("Before:\n");
for(i=0;i<n;i++)
{
index=i;
printf("%d %d ",a[i],index);
printf("\n");
}
printf("After:\n");
for(i=n-1,index=0;i>=0;i--,index++)
{
printf("%d %d ",a[i],index);
printf("\n");
}
}
*/
//swapping method in first half and secon half
/*#include<stdio.h>
int main()
{
int n,i,t,j;
printf("How many idex value have:\n");
scanf("%d",&n);
int a[n];
printf("Enter the number from user:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
printf("After:\n");
for(i=0,j=n/2;j<n;i++,j++)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}*/
//Swapping method in adjustent element
/*#include<stdio.h>
int main()
{
int n,i,j,t;
printf("How many index value have:\n");
scanf("%d",&n);
int a[n];
printf("Enter the number:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before swap:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
printf("After swap:\n");
//for(i=0,j=1;i<n;i=i+2,j=j+2)
//{
//t=a[i];
//a[i]=a[j];
//a[j]=t;
//}
// [[[[[[[[[[    OR    ]]]]]]]
for(i=0;i<n;i=i+2)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}*/
// scaning only print even number and count it  
/*#include<stdio.h>
int main()
{
int n,i;
printf("How many index value have:\n");
scanf("%d",&n);
int a[n];
printf("Enter the number:\n");
for(i=0;i<n;)
{
scanf("%d",&a[i]);
if(a[i]%2==0)
i++;
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
printf("%d\n",i);
}
*/
// scaning prime number and count it
/*#include<stdio.h>
int main()
{
int n,i,j,count=0;
printf("How many index value have:\n");
scanf("%d",&n);
int a[n];
printf("Enter the number:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=2;j<a[i];j++)
{
if(a[i]%j==0)
break;
}
if(a[i]==j)
{
printf("%d ",a[i]);
count++;
}
}
printf("\n%d\n",count);
}
*/
//scanning 5 elements and print only prime numbers
/*#include<stdio.h>
int main()
{
int n,i,j,count=0;
printf("How many index value have:\n");
scanf("%d",&n);
int a[n];
printf("Enter the number:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Prime number:\n");
for(i=0;i<n;i++)
{
for(j=2;j<a[i];j++)
{
if(a[i]%j==0)
break;
}
if(a[i]==j)
{
printf("%d ",a[i]);
count++;
}
}
printf("\n%d\n",count);
}
*/
//Wap tp delet the prime number from integer array
/*#include<stdio.h>
int main()
{
int n,i,j,k;
printf("How many index value have:\n");
scanf("%d",&n);
int a[n];
printf("Enter the index value:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0;i<n;i++)
{
for(j=2;j<a[i];j++)
{
if(a[i]%j==0)
break;
}
if(a[i]==j)
{
for(k=i;k<n;k++)
a[k]=a[k+1];
n--;
i--;
}
}
printf("After :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
*/
// Wap to insert one extra elementin a integer array
/*
#include<stdio.h>
int main()
{
int n,i,j,index,new_ele;
printf("How many index value have:\n");
scanf("%d",&n);
int a[n];
printf("Enter the index value:\n");
for(i=0;i<n-1;i++)
scanf("%d",&a[i]);
printf("Enter the index for new ele:\n");
scanf("%d",&index);
printf("Enter the new element:\n");
scanf("%d",&new_ele);
printf("Before:\n");
for(i=0;i<n-1;i++)
printf("%d ",a[i]);
printf("\n");
for(j=n-1;j>index;j--)
a[j]=a[j-1];
a[index]=new_ele;
printf("After:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
*/
//Wap to find largest element from integer from without modifying array
#include<stdio.h>
int main()
{
int n,i,l,index;
printf("How many index value have:\n");
scanf("%d",&n);
int a[n];
printf("Enter the index value:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
l=a[0];
index=0;
for(i=1;i<n;i++)
{
if(a[i]>l)
{
l=a[i];
index=i;
}
}
printf("largest value %d and present in the index value %d\n",l,index);
}


























































