#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void inputArray();//getting values for array
void sortArray(int y[]);//sorting the array
void displayArray(int x[]);//display the array

int array[11];


void main()
{

	inputArray();
	displayArray(array);
	sortArray(array);
	displayArray(array);
}

void inputArray()
{
	int i;
	for(i=0;i<11;i++)
	{
		array[i]=rand()%50;
	}
}

void sortArray(int y[])
{
	int mid=11/2;
	while(mid!=0)
	{
		int i,count=0;
		
		int temp;
		for(i=0;i<(11-mid);i++)
		{
			if(y[i]>y[mid+i])
			{
				temp=y[i];
				y[i]=y[mid+i];
				y[mid+i]=temp;
				count++;
			}
		}
		if(count==0)
		{
			mid=mid/2;
		}
		
	}
}

void displayArray(int x[])
{
	int i;
	for(i=0;i<11;i++)
	{
		printf("%d ",x[i]);
	}
}


/*
changes
	array eke namai size ekai function ala namui wenas karann(displayArray ek output wage namak daann)
	thaw oya i , j wage eew wenas karnn
	oya ud daala tyenw 
	mid kyana eka count kyana ek wena nam daann
	rand()%50 kyana ek wena agyak dann 20,30,60 mkk hari
	uda tyen comment tika wenas karnn 
	thaw poddk program ek wenas krla ghann 

*/