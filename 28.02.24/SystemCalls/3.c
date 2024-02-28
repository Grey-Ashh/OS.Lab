#include<unistd.h>
int main(void)
{
	char *binarypath="/bin/ls";
	char *arg1="-l";
	char *arg2="/home/exam/Desktop/grey/test";
	execl(binarypath,binarypath,arg1,arg2,NULL);
	return 0;	
}
