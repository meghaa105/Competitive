#include <bits/stdc++.h>
using namespace std;
// https://onedrive.live.com/?authkey=%21ACJZrA1zLzPGdmU&cid=842AECBB531CCEA4&id=842AECBB531CCEA4%218809&parId=842AECBB531CCEA4%218803&o=OneUp

void printUnion(int arr1[], int arr2[], int m, int n) 
{ 
  int i = 0, j = 0; 
  while (i < m && j < n) 
  { 
    if (arr1[i] < arr2[j]) 
       cout << arr1[i++] << " "; 
      
    else if (arr2[j] < arr1[i]) 
       cout << arr2[j++] << " "; 
      
    else
    { 
       cout << arr2[j++] << " "; 
       i++; 
    } 
  } 
  
  /* Print remaining elements of the larger array */
  while(i < m) 
     cout << arr1[i++] << " "; 
  
  while(j < n) 
    cout << arr2[j++] << " "; 


cout << endl;
} 
int printIntersection(int arr1[], int arr2[], int m, int n) 
{ 
  int i = 0, j = 0; 
  while (i < m && j < n) 
  { 
    if (arr1[i] < arr2[j]) 
       i++; 
    else if (arr2[j] < arr1[i]) 
       j++; 
    else /* if arr1[i] == arr2[j] */
    { 
       cout << arr2[j] << " "; 
       i++; 
       j++; 
    } 
  } 
} 
int q3(int array[],int n)
{
    int i=1;
    for(int j=0;j<n;j++)
    {
        if(array[j]==i)
        {
            i++;
        }
        else
        {
            break;
        }
        
    }
    return i;
}
void print (int array[],int size)
{
    // Question 1
    for(int i = 0;i<size;i++)
    {
        cout << array[i] << endl;
    }
}

int main()
{    
    int size,size1;
    cout << "Enter the size of the array\n";
    cin >> size;
    cout << "Enter the size of the array\n";
    cin >> size1;
    int array[size],array2[size1];
    for(int i = 0 ;i<size;i++)
    {
        cin >> array[i];
    }
    for(int j = 0 ;j<size1;j++)
    {
        cin >> array2[j];
    }
    print(array,size);
    print(array2,size1);
    int n = sizeof(array)/(sizeof(array[0]));
    int n1 = sizeof(array2)/(sizeof(array2[0]));
    sort(array,array+n);
    // sort(array2,array2+n1);
    // printUnion(array,array2,n,n1);
    // printIntersection(array,array2,n,n1);
    cout << q3(array,n) << endl;
    
    return 0;
}