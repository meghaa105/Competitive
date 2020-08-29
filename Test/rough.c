#include <stdio.h>
#include <limits.h>

int main() 
{
    int check;
    scanf("%d",&check);
    while(check--)
    {
        int n, t;
        scanf("%d %d", &n, &t);
        int arr[n]; // Array of iqs
        int arr2[n-1]; //Array of differences
        int i, j = 1, k;
        int sum = 0;
        int min = INT_MAX;
        for (i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);	
        }
        sort(arr,arr+n);
        for (i=0;i<n-1;i++)
        {
            arr2[i] = arr[i+1] - arr[i]; //Storing the consecutive differences
        }
        for (i=0;i+t-2 < n-1; i++)
        {
            sum = 0;
            k=1;
            for (j=i;j<i+t-1;j++)
            {
                if (arr2[j]!=0)
                {
                    sum += arr2[j] * k++;
                }
            }
            if(min > sum) min = sum;
        }
        int random = 1;
        printf("Case #%d: %d",random++,min);

    }
	
	return 0;
}