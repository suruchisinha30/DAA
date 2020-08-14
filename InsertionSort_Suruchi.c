#include <stdio.h>
int main()
{
    int n,i,j,temp,count=0;
    int array[50];
 
    printf("Enter number of elements\n");
    scanf("%d",&n);
 
    printf("Enter %d integers\n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    count++;
    for (i=1; i<=n-1; i++)
    {
	    j=i;
	    count++;
            while (j>0 && array[j-1] > array[j])
            {	  
                count++;
                temp= array[j];
                count++;
                array[j]= array[j-1];
                count++;
                array[j-1]= temp;
                count++;
                j--;
                count++;
            }
            count++;
    }
    count++;
    printf("Sorted list in ascending order:\n");
    count++;
    for (i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
    count++;
    printf("Count=%d",count);
    return 0;
}
