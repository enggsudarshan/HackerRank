#include <stdio.h>
#include <stdlib.h>


int max(int a, int b)
{
	return (a > b)? a : b;
}

int maximum(int a, int b, int c)
{
	return max(max(a, b), c);
}

int Max_Crossing_Sub_Array(int arr[],int a,int q,int b)
{

	int i,j,lowest_val = -1000000,sum=0,max1,max2;
	for(i=a;i<=q;i++)
	{

		sum = sum + arr[i];
		if(sum > lowest_val)
		{
			lowest_val = sum;
		}

	}
	max1=lowest_val;


	lowest_val = -1000000,sum=0;
	for(j=q+1;j<=b;j++)
	{
		sum = sum + arr[j];
		if(sum > lowest_val)
		{
			lowest_val = sum;
		}
	}
	max2 = lowest_val;

	return (max1 + max2);
}


int Max_Sub_Array(int arr[],int a,int b)
{
    printf("a= %d\tb = %d\n",a,b);
	if(a==b)
    {
        printf("\n");
        return arr[a];
    }


	int x,y,z,q;
	q = (a+b)/2;
    printf("a = %d\tq = %d\tb = %d\n",a,q,b);
	x = Max_Sub_Array(arr,a,q);
	printf("a = %d\tq = %d\tb = %d\tx = %d\n",a,q,b,x);
	y = Max_Sub_Array(arr,q+1,b);
	printf("a = %d\tq = %d\tb = %d\ty = %d\n",a,q,b,y);
	z = Max_Crossing_Sub_Array(arr,a,q,b);
    printf("a = %d\tq = %d\tb = %d\tz = %d\n",a,q,b,z);
	int i = maximum(x,y,z);

	return i;
}


int main()
{


	int arr[20],size,i,max_sub_array_size;
	printf("Enter the number of elements in Array");
	scanf("%d",&size);
	printf("Enter the array elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	max_sub_array_size = Max_Sub_Array(arr,0,size-1);
	printf("Maximum sub array is %d",max_sub_array_size);

    return 0;
}















