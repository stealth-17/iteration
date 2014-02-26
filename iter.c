#include<stdio.h>
#include<string.h>

char a[10];
int lim,rep;
int iter(int n,FILE *fd)
{
	int i;
	if(n==rep)
	{
		a[n]=='\0';
		fprintf(fd,"%s\n",a);
		//printf("%s\n",a);
		return 0;
	}
	else
		for(i=97;i<123;i++)
		{
			a[n]=i;
			iter(n+1,fd);
		}
}

int main(int argc,char *argv[])
{
	int n=0,i;
	FILE *fd = fopen("password.lst","w+r");
	lim=*argv[1]-48;
	for(i=1;i<=lim;i++)
	{
		rep=i;
		iter(n,fd);
	}
//	printf("%s\n",a);
	fclose(fd);
	return 0;
}
