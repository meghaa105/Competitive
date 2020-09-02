#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>  n;
    while(n--)
    {
        int t,temp;
        cin >> t;
        vector<int> v;
        while(t--)
        {
            // cout << "Enter a number:";
            cin >> temp;
            v.push_back(temp);
        }
        for(int i=0;i<v.size();i++)
        {
            if(i%2!=0)
            {
                // cout << "Check";
                int min = INT_MAX;
                int index = 0;
                for(int j = i;j<v.size();j++)
                {
                    if(v[j]<min)
                    {
                        min = v[j];
                        index = j;
                    }
                }
                int temp = v[index];
                v[index]=v[i];
                v[i]= temp;
            }
            if(i%2==0)
            {
                int max = INT_MIN;
                int index = 0;
                for(int j = v.size()-1;j>=i;j--)
                {
                    if(v[j]>max)
                    {
                        max = v[j];
                        index = j;
                    }
                }
                int temp = v[index];
                v[index]=v[i];
                v[i]= temp;
                // cout<< "After swap" << v[i] << v[index] << endl;


            }
            
        }
        for(int i = 0;i<v.size();i++)
        {
            cout << v[i] << endl;
        }
    }
}