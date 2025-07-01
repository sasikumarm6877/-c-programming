
// WAP TO PRINT BINARY OF GIVEN INTEGER USING GOTO STATEMENT



/*#include<stdio.h>
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
}*/

// WAP TO GET ADDITION OF EACH DIGIT GIVEN NUMBER USING GOTO STATEMENT


/*#include<stdio.h>
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
}*/


//  TASK (WAP TO GIVEN INPUT AND CONVERT BINARY CODE TO HOW MANY SET,CLEAT COUNT GIVE)

/*#include<stdio.h>
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
*/


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



/*#include<stdio.h>
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
*/



















