#include<bits/stdc++.h>
using namespace std;

int findPoisonedDuration(vector<int>& v, int duration) 
{
    int time = 0;
    int current = 2;
    for(int i =1;i<v.size();i++)
    {
        if(v[i]-v[i-1]==1)
        {
            current++;
        }
        else
        {
            current+=duration;
        }
        
    }
}