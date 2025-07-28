#include<stdio.h>
int main()
{
int i=10,j=20;
int *p;
p=&i;
printf("i=%d *p=%d\n",i,*p);
*p=100;
printf("i=%d *p=%d\n",i,*p);
p=&j;
printf("j=%d *p=%d\n",j,*p);
*p=200;
printf("j=%d *p=%d\n",j,*p);
printf("i=%d j=%d *p=%d\n",i,j,*p);
}
//WAP TO SCAN  AN INT VARIABLE USING POINTER VARIABLE AND PRINT THAT THROUGH POINTER
/*#include<stdio.h>
int main()
{
int num;// using also unsigned int num
int *p;// using also unsigned int *p
p=&num;
scanf("%d",p);
printf("num=%d *p=%d\n",num,*p);
}
*/
/*#include<stdio.h>
int main()
{
int i=258,*p;
char *cp;
cp=(char *)&i;
printf("*cp=%d *p=%d\n",*cp,*p);
*cp='a';
printf("*cp=%d *p=%d\n",*cp,*p);
printf("i=%d\n",i);
}
*/
//WAP TO  PROVE THAT WE ARE WARNING IN LITTLE ENDIAN
/*#include<stdio.h>
int main()
{
int i;
scanf("%d",&i);
char *p;
p=(char *)&i;
if(*p==i)
printf("Little Endian\n");
else 
printf("Big Endian\n");
}
*/
//WAP TO C IN LEARN HOE TO GET FLOAT FROM A INT 
/*#include<stdio.h>
int main()
{
int num;
scanf("%d",&num);
float f;
float *fptr;
f=(float)num;
fptr=&f;
printf("%d\n",num);
printf("%f",*fptr);
}
 */
//WAP TO PRINT THE BINARY FORMAT OF FLOAT USING INT 
/*#include<stdio.h>
int main()
{
float f;
scanf("%f",&f);
int *p,pos;
p=(int*)&f;
for(pos=31;pos>=0;pos--)
printf("%d",*p>>pos&1);
printf("\n");
}*/
//WAP IN USING CONSTANT POINTER
/*#include<stdio.h>
int main()
{
int i=10;
const int *p;
int *q;
p=q=&i;
// *p=*q   ---> error because only read point using constant
printf("%d %d %d",i,*q,*p);
*q=20;
printf("\n%d %d %d\n",i,*q,*p);
}*/
// INCREAMENT & DECREMENT OF POINTER VARIABLE
/*#include<stdio.h>
int main()
{
int i;
scanf("%d",&i);
char *cp;
int *p;
cp=(char*)&i;
p=&i;
printf("&i=%p\n",&i);
printf("cp=%p cp+1=%p\n",cp,cp+1);
printf("p=%p\n p+1=%p\n",p,p+1);
printf("cp=%p cp=%p\n",cp,cp++);
printf("p=%p\n p=%p\n",p,p++);
}
*/
//WAP ONE BYTE ONE BYTE ACCESS CHAR
/*#include<stdio.h>
int main()
{
unsigned int i;
scanf("%d",&i);
char *cp;
cp=(char *)&i;
printf("%d\n",*cp);
cp=cp+1;
printf("%d\n",*cp);
cp=cp+1;
printf("%d\n",*cp);
}
*/
/*#include<stdio.h>
int main()
{
int i;
scanf("%d",&i);
char *cp;
cp=(char*)&i;
printf("*cp=%d\n",*cp);
printf("cp=%p\n",cp);
cp=cp+1;
printf("cp=%p\n",cp);
*cp=*cp+1;
printf("*cp=%d\n",*cp);
printf("*cp=%d\n",*cp+1);
printf("i=%d\n",i);
}
*/
//WAP TP SWAP THE FIRST AND FOURTH BYTE OF DATA
/*#include<stdio.h>
int main()
{
int num,t;
scanf("%x",&num);
char *p,*q;
p=q=(char *)&num;
q=q+3;
printf("Before num =%x\n",num);
t=*p;
*p=*q;
*q=t;
printf("first  and fourth swap num=%x\n",num);
p=p+1;
q=q-1;
t=*p;
*p=*q;
*q=t;
printf("full swap num=%x\n",num);
}
*/
/*//WAP IN C RO NIBBLE SWAP OF INTEGER DATA 
#include<stdio.h>
int main()
{
int num,i;
scanf("%x",&num);
char *p;
for(i=0,p=(char*)&num;i<4;i++,p=p+1)
{
*p=*p>>4|*p<<4;
printf("num=%x\n",num);
}
}
*/
//WAP TO PRINT THE BINARY OF THE FLOAT USING CHAR POINTER
/*#include<stdio.h>
int main()
{
float f;
scanf("%f",&f);
char *p;
int pos;
for(p=(char *)&f,p=p+3;p>=(char*)&f;p--)
{
for(pos=7;pos>=0;pos--)
printf("%d",*p>>pos&1);
}
printf("\n");
}
*/
/*#include<stdio.h>
int main()
{
int num;
scanf("%d",&num);
int *p;
p=&num;
printf("%d\n",*p);
printf("%p\n",*p);
printf("%p\n",++*p);
printf("%d\n",*++p);
printf("%d\n",*p);
printf("%d\n",*p);
}
*/




















