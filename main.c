#include<stdio.h>
#include<time.h>
#include<sys/time.h>
#include "pro.h"

int main(int argc, char** argv)
{
	FILE *fp;
	fp=fopen("input.txt","r");
        
        int i;
        int n;
        printf("Enter the no. of Inputs : ");
        scanf(" %d",&n);
        int arr[n];
	long time_start,time_end;
	struct timeval tv;
	printf("\nTime taken by - \n\n");
	
	
//for bubble sort
	for(i=0;i<n;i++)
	{
		fscanf(fp,"%d\n",&arr[i]);
	}
	gettimeofday(&tv,NULL);
	time_start=(tv.tv_sec *1e+6) + tv.tv_usec;
	bsort(arr,n);
	gettimeofday(&tv,NULL);
	time_end=(tv.tv_sec *1e+6) + tv.tv_usec;
	printf("Bubble Sort    : %ld\n",(time_end-time_start));
	//for(i=0;i<n;i++)
	//printf("%d ",arr[i]);
	fclose(fp);
	
// for selection sort
	fp=fopen("input.txt","r");
	for(i=0;i<n;i++)
	{
		fscanf(fp,"%d\n",&arr[i]);
	}
	gettimeofday(&tv,NULL);
	time_start=(tv.tv_sec *1e+6) + tv.tv_usec;
	ssort(arr,n);
	gettimeofday(&tv,NULL);
	time_end=(tv.tv_sec *1e+6) + tv.tv_usec;
	printf("Selection Sort : %ld\n",(time_end-time_start));
	//for(i=0;i<n;i++)
	//printf("%d ",arr[i]);
	fclose(fp);
	
	
//for insertion sort		
	fp=fopen("input.txt","r");
	for(i=0;i<n;i++)
	{
		fscanf(fp,"%d\n",&arr[i]);
	}
	gettimeofday(&tv,NULL);
	time_start=(tv.tv_sec *1e+6) + tv.tv_usec;
	isort(arr,n);
	gettimeofday(&tv,NULL);
	time_end=(tv.tv_sec *1e+6) + tv.tv_usec;
	printf("Insertion Sort : %ld\n",(time_end-time_start));
	//for(i=0;i<n;i++)
	//printf("%d ",arr[i]);
	fclose(fp);


//for quick sort
	fp=fopen("input.txt","r");
	for(i=0;i<n;i++)
	{
		fscanf(fp,"%d\n",&arr[i]);
	}
	gettimeofday(&tv,NULL);
	time_start=(tv.tv_sec *1e+6) + tv.tv_usec;
	quickSort(arr,0,n-1);
	gettimeofday(&tv,NULL);
	time_end=(tv.tv_sec *1e+6) + tv.tv_usec;
	printf("Quick Sort     : %ld\n",(time_end-time_start));
	//for(i=0;i<n;i++)
	//printf("%d ",arr[i]);
	fclose(fp);

//for merge sort
	fp=fopen("input.txt","r");
	for(i=0;i<n;i++)
	{
		fscanf(fp,"%d\n",&arr[i]);
	}
	gettimeofday(&tv,NULL);
	time_start=(tv.tv_sec *1e+6) + tv.tv_usec;
	msort(arr,0,n-1);
	gettimeofday(&tv,NULL);
	time_end=(tv.tv_sec *1e+6) + tv.tv_usec;
	printf("Merge Sort     : %ld\n\n",(time_end-time_start));
	//for(i=0;i<n;i++)
	//printf("%d ",arr[i]);
	fclose(fp);
	
	return 0;
	
}
