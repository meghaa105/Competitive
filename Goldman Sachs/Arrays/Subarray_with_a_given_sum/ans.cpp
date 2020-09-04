#include<bits/stdc++.h>
using namespace std;

int main()
{
    int no,n,sum;
    cin >>no;
    while(no--)
    {
        cin >> n >> sum;
        int temp;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        
        int max_so_far = INT_MIN, max_ending_here = 0; 
        int size = a.size();
    
        for (int i = 0; i < size; i++) 
        { 
            max_ending_here = max_ending_here + a[i]; 
            if (max_so_far < max_ending_here) 
                max_so_far = max_ending_here; 
    
            if (max_ending_here < 0) 
                max_ending_here = 0; 
        } 
        return max_so_far; 
    

    }
}