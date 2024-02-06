#include<stdio.h>
#define size 10
int wt[size];
int tat[size];
int bt[size];
int cp[size];

void calc_cp(int n)
{
	int i;
	cp[0]=bt[0];
	for(i=1;i<n;i++)
	{
		cp[i]=cp[i-1]+bt[i];
	}
}

void calc_wt(int n)
{
	int i;
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
	}
}

void calc_tat(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		tat[i]=wt[i]+bt[i];
	}
}

void print_table(int n)
{	
	float avg_wt,avg_tat;
 int i;
	int temp_wt=0;
	int temp_tat=0;
	calc_cp(n);
	calc_wt(n);
	calc_tat(n);
	for(i=0;i<n;i++)
	{
		temp_wt=temp_wt+wt[i];
	}
		for(i=0;i<n;i++)
	{
		temp_tat=temp_tat+tat[i];
	}
	avg_wt=temp_wt/size;
	avg_tat=temp_tat/size;
	
	printf("PROCESS\tBT\tCP\tWT\tTAT\n");
	for(i=0;i<n;i++)
	{
		printf("P%d\t%d\t%d\t%d\t%d\n",i+1,bt[i],cp[i],wt[i],tat[i]);
	}
	printf("\n\n");
	printf("Avg WT = %f\nAvg TAT = %f\n",avg_wt,avg_tat);
}

int main()
{
	int n,i;
	printf("Enter the no of processes: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the burst time of processes %d: ",i+1);
		scanf("%d",&bt[i]);
	}
	print_table(n);
	return 0;
}
