#include <bits/stdc++.h>
using namespace std;
int size = 20;

// https://onedrive.live.com/?authkey=%21AEi8Z5FpImxZ4ww&cid=842AECBB531CCEA4&id=842AECBB531CCEA4%218808&parId=842AECBB531CCEA4%218803&o=OneUp
void print (int array[])
{
    // Question 1
    for(int i = 0;i<size;i++)
    {
        cout << array[i] << endl;
    }
}
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
void bubbleSort(int array[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)   
    {
        for (j = 0; j < n-i-1; j++)  
        {
             if (array[j] > array[j+1])  
             {
                 swap(&array[j], &array[j+1]); 
             }
        }
           
    }           
}  
void range(int array[])
{
    sort(array,array+size);
    cout << array[size-1] - array[0] << endl;
}
void find_max(int array[])
{
    int max = INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(max < array[i])
        {
            max = array[i];
        }
    }
    cout << "The max value is " << max << endl;
}
void find_min(int array[])
{
    int min = INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(min > array[i])
        {
            min = array[i];
        }
    }
    cout << "The min value is " << min << endl;
}
void reverse(int array[])
{
    int reverse[size];
    int count = 0;
    for(int i = size-1;i>=0;i--)
    {
        reverse[count++] = array[i];
    }
    print(reverse);
}
int main()
{    
    cout << "Enter the size of the array\n";
    cin >> size;
    int array[size];
    for(int i = 0 ; i<size;i++)
    {
        cin >> array[i];
    }
    print(array);
    find_min(array);
    find_max(array);
    reverse(array);
    sort(array,array+size);
    print(array);
    cout << binary_search(array,array+size,50);
    bubbleSort(array,size);
    range(array);
    return 0;
}