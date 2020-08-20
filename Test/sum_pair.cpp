#include <bits/stdc++.h>
using namespace std;

// Given an array of integers, and an integer  ‘K’ , find the count of pairs of elements in the array whose sum is equal to 'K'.
int main()
{   int num,i,j;
    vector<int> ar1;
    int temp,length,sum;
    cin >> num; 
    while(num--)
    {   
        cin >> length >> sum;
        for(i = 0; i < length;i++)
        {
            cin >> temp;
            ar1.push_back(temp);
        }
        temp = 0;
        for(i=0;i<length-1;i++)
        {
            for(j=i+1;j<length;j++)
            {
                if(ar1[i]+ar1[j]==sum)
                {
                    temp++;
                }
            }
        }
        
    }
    return 0;

}
