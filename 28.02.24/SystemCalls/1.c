#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>
struct dirent *dptr;
int main(int argc,char *arg[])
{
	char buff[100];
	DIR *drip;
	printf("Enter the directory name: ");
	scanf("%s",buff);
	if((drip=opendir(buff))==NULL)
	{
		printf("Directory does not exist\n");
		exit(1);
	}
	while(dptr=readdir(drip))
	{
		printf("%s\n",dptr->d_name);
	}
	closedir(drip);
}

