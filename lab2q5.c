#include<stdio.h>
int main()
{
int p=getpid();
fork();
if(p!=getppid())
{
fork();
if(p!=getppid())
{
int q=fork();
if(p!=getppid() && q==0)
fork();
}
sleep(5);
}
else
{
sleep(3);
fork();
}
printf("%d %d \n",getpid(),getppid());
}

