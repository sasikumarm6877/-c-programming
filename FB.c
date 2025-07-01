         // forward goto 



/*#include<stdio.h>
void main()
{
printf("hello\n");
goto sasi;
printf("hai 1\n");
printf("hai 2\n");
sasi:
printf("bye\n");
}*/

//           backword goto(infine loop)


/*#include<stdio.h>
void main()
{
printf("hello\n");
sasi:
printf("hai 1\n");
printf("hai 2\n");
goto sasi;
printf("bye\n");
}*/

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
*/

    //WAP TO PRINT MULTIPILACTION TABLE FOR GIVEN NUMBER USING GOTO


/*#include<stdio.h>
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
*/
 // anothe method(up)

/*#include<stdio.h>
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
}*/

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
*/

// another method(up)

/*
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
*/

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






































