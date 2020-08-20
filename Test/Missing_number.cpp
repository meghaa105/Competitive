#include <bits/stdc++.h>
using namespace std;

// You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in the list. One of the integers is missing in the list. Write an efficient code to find the missing integer.
int main()
{   int num,i,j;
    vector<int> ar1;
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
        }
        temp = 1;
        for(i=0;i<length-1;i++)
        {
            if(temp == ar1[i])
            {
                temp++;
                continue;
            }
            if(temp!=ar1[i])
            {
                break;
            }
        }
        cout << temp;
        
        
    }
    return 0;

}
