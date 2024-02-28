#include<stdio.h>
#include<sys/stat.h>
int main()
{
	struct stat sfile;
	stat("Grey",&sfile);
	printf("st_mode = %o\n",sfile.st_mode);
	return 0;
}
