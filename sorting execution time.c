#include <stdio.h>
#include <time.h>
void selectionsort(long a[], long N);
void bubblesort(long a[], long N);
void insertionsort(long a[], long N);
long main()
{
	long  i, j, N;
	scanf("%ld", &N);
	long a[N];
	for (i = 0; i < N; i++)
	{
		a[i]=rand();
    }
	clock_t t0;
    t0 = clock();
    selectionsort(a,N);
    t0 = clock() - t0;
    double time_taken0 = ((double)t0)/CLOCKS_PER_SEC; // in seconds
    printf("selection Sort Time %f\n",time_taken0);
    clock_t t1;
    t1 = clock();
    bubblesort(a,N);
    t1 = clock() - t1;
    double time_taken1 = ((double)t1)/CLOCKS_PER_SEC; // in seconds
    printf("bubble Sort Time %f\n",time_taken1);
    clock_t t2;
    t2 = clock();
    insertionsort(a,N);
    t2 = clock() - t2;
    double time_taken2 = ((double)t2)/CLOCKS_PER_SEC; // in seconds
    printf("insertion Sort Time %f",time_taken2);

	return 0;
}

void selectionsort(long a[], long N)
{
	int i, j, temp,position;
{
	for(i = 0; i < N; i++)
        {
            position=i;
            for(j = i + 1; j < N; j++)
            {
                if(a[position] > a[j])
                position=j;
            }
    if(position != i)
            {
            temp=a[i];
            a[i]=a[position];
            a[position]=temp;
            }
        }
}
}
void bubblesort(long a[], long N)
{
	int i, j, temp,position;
{
	for(i = 0; i < N; i++)
        {
            for (j = 0; j < N - i - 1; j++)
            {
            if (a[j] > a[j + 1])
                {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                }
            }
        }
}

}
void insertionsort(long a[], long N)
{
	int i, j, temp;
{
	for (i = 0; i < N; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
}
