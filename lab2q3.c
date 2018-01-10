#include<stdio.h>
main()
{
int p=fork();
int q=fork();
if(p==0)
{
fork();
}
if(p==0 ||( p!=0 && q==0))
fork();
printf("%d \n",getpid());
}
