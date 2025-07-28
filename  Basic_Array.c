// WAP IN C TO PRINT ARRAY SIZE AND ELEMENTS ,SIZEOF ARRAY,AND PRINT THE ARRAY VALUES
/*#include<stdio.h>
int main()
{
int a[5]={10,20,30,40,50};
int i,ele;
printf("%ld\n",sizeof(a));
printf("%ld\n",sizeof(a[0]));
ele=sizeof(a)/sizeof(a[0]);
printf("number of ele :%d\n",ele);
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
*/
//WAP IN TO GET INPUT IN USER FOR ARRAY TYPE
/*#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}*/
//WAP IN C TO PRINT THE NUMBER IN REVERSE ARRAY
/*#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
printf("After number:\n");
for(i=n-1;i>=0;i--)
printf("%d ",a[i]);
printf("\n");
}
*/
//WAP IN C TO PRINT IN PRIME NUMBERS
/*#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\nAfter prime number :\n");
for(i=0;i<n;i++)
{
for(j=2;j<a[i];j++)
{
if(a[i]%j==0)
break;
}
if(a[i]==j)
printf("%d ",a[i]);
}
printf("\n");
}
*/
//WAP IN C TO SCAN A PRIME NUMBER
/*#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
int a[n];
for(i=0;i<n;)
{
scanf("%d",&a[i]);
for(j=2;j<a[i];j++)
{
if(a[i]%j==0)
break;
}
if(a[i]==j)
i++;
}
printf("After number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
*/
//WAP IN C TO PRIN EVEN NUMBER 
/*#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
printf("After number :\n");
for(i=0;i<n;i++)
{
if(a[i]%2==0)
printf("%d ",a[i]);
}
printf("\n");
}
*/
//WAP IN C TO SCAN A EVEN NUMBER
/*#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;)
{
scanf("%d",&a[i]);
if(a[i]%2==0)
i++;
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}

*/
//WAP IN C TO SWAP A NUMBER REVERSE ALL NUMBER
/*#include<stdio.h>
int main()
{
int n,i,j,t;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before swap number:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0,j=n-1;i<j;i++,j--)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
printf("After swap number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
*/

/*//WAP IN C TO SWAP  A NUMBER IN FIRST HALF AND SECOND HALF WILL BE SWAPPING
#include<stdio.h>
int main()
{
int n,t,i,j;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0,j=n/2;j<n;i++,j++)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
printf("After number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
*/
//WAP IN C TO SWAP IN ADJUSTENT ELEMENT SWAPPING
/*#include<stdio.h>
int main()
{
int n,t,i,j;
printf("Enter the index value:\n");
scanf("%d",&n);
int a[n];
printf("Scan from  the user value :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before swap number:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0,j=1;i<n;i+=2,j+=2)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
printf("After swap number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
*/
// SAME METHOD IN UP PROGRAM BUT LOGIC IS DIFFERENT
/*#include<stdio.h>
int main()
{
int n,t,i,j;
printf("Enter the index value:\n");
scanf("%d",&n);
int a[n];
printf("Scan from  the user value :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before swap number:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0;i<n;i+=2)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
printf("After swap number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
*/
//WAP IN C TO DELETE PRIME NUMBER FORM INTEGER
/*#include<stdio.h>
int main()
{
int n,i,j,k;
printf("Enter the index value:\n");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number :\n");
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
{
a[k]=a[k+1];
n--;
i--;
}
}
}
printf("After number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
*/
//WAP IN C TO PRINT ONE EXTRA ELEMENT IN A INTEGER ARRAY 
/*#include<stdio.h>
int main()
{
int n,index,new,i,j;
printf("Enter the  index value :\n");
scanf("%d",&n);
int a[n];
printf("Scan the elements :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before insert number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
printf("Enter the new index value :\n");
scanf("%d",&index);
printf("Enter the new_element :\n");
scanf("%d",&new);
for(j=n;j>index;j--)
a[j]=a[j-1];
a[index]=new;
n++;
printf("After insert number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
printf("%d\n",n);
}
*/
/*//WAP IN C TO FIND LARGEST ELEMENT FROM INTEGER ARRAY WITHOUT MODIFYING AND SHOW INDEX VALUE
#include<stdio.h>
int main()
{
int n,l,i,index;
printf("Enter the  index value :\n");
scanf("%d",&n);
int a[n];
printf("Scan the elements :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
l=a[0];
index=0;
for(i=0;i<n;i++)
{
if(a[i]>l)
{
l=a[i];
index=i;
}
}
printf("largest number :%d \n",l);
printf("index value :%d\n",index);
}
*/
/*// WAP IN C TO SECOND LARGEST NUMBER AND INDEX VALUE PRESENT
#include<stdio.h>
int main()
{
int n,l,i,index;
printf("Enter the  index value :\n");
scanf("%d",&n);
int a[n];
printf("Scan the elements :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
l=a[0];
index=0;
for(i=0;i<n;i++)
{
if(a[i]>l)
{
l=a[i];
index=i;
}
}
printf("largest number :%d \n",l);
printf("index value :%d\n",index);
}
*/
// WAP IN C TO PRINT SECOND LARGEST NUMBER 
/*#include<stdio.h>
int main()
{
int n,i,l,sl;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
if(a[0]>a[1])
{
l=a[0];
sl=a[1];
}
else if(a[1]>a[0])
{
l=a[1];
sl=a[0];
}
for(i=0;i<n;i++)
{
if(a[i]>l)
{
sl=l;
l=a[i];
}
else if(a[i]>sl && a[i]!=l)
sl=a[i];
}
printf("l=%d sl=%d",l,sl);
printf("\n");
}
*/
//WAP IN C TO SHORT SELECTION ARRAY 
#include<stdio.h>
int main()
{
int n,i,j,t;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("After arrange number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}




