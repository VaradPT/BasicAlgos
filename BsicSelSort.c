#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,j,key;
	FILE *file = fopen("sel.txt","r"); //Enter the file name 
	fscanf(file,"%d",&n);

	int *Arr=(int*)malloc(n*sizeof(int));

	for(i=0;i<n;i++)
	{
		fscanf(file,"%d",&Arr[i]);
	}
	fclose(file);
//Sorting Starts Here
	for(i=0;i<n-1;i++)
	{
		key=i;
		for(j=i+1;j<n;j++)
		{
			if(Arr[j]<Arr[key])
			{
			key=j;
			}
		}
		int temp=Arr[key];
		Arr[key]=Arr[i];
		Arr[i]=temp;
	}
	printf("Sorted Array is:\n");
	for(i=0;i<n;i++)
	{
	printf("%d \t",Arr[i]);
	}
	printf("\n");

return 0;
}
