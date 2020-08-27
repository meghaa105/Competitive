#include <bits/stdc++.h>
using namespace std;

// Write a program to cyclically rotate an array by one.
int main()
{   int num,i,j;
    vector<int> ar1;
    vector<int> ar2;
    int temp,length,new_loc;
	// your code goes here
    cin >> num; 
    while(num--)
    {   
        cin >> length;
        for(i = 0; i < length;i++)
        {
            cin >> temp;
            ar1.push_back(temp);
            ar2.push_back(temp);
        }
        for(i=0;i<length;i++)
        {
            new_loc = (i+ (length-1))%length;
            ar2[new_loc] = ar1[i];
        }
        for(i=0;i<length;i++)
        {
            cout << ar2[i]; 
        }
        
        
    }
    return 0;

}
