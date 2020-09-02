#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int size;
        cin >> size;
        int v[size-1];
        int sum = 0;
        int s1 = size*(size+1)/2;
        for(int i= 0 ;i<size-1;i++)
        {
            
            cin >> v[i];
            sum+=v[i];
        }
        cout << s1-sum << endl;        
    }
}