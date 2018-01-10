#include<stdio.h>
int bork()
{
int p;
p=fork();
if(p!=0)
{
	int q=fork();
	if(q!=0)
		return q;
	else
		return p;
}
return getppid();
}
int cork()
{
int p;
p=fork();
int g=getppid();
if(p==0)
{
	int q=fork();
	if(q==0)
	return g;
	else
	return q;

}
return p;
}



main()
{
int q;
q=cork();
printf("%d ",getpid());
printf("%d ",getppid());
printf("%d\n ",q);
sleep(1);
}
