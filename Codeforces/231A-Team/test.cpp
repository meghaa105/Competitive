#include <bits/stdc++.h>
using namespace std;

// This helps in debugging values
#define deb(x) cout << #x << " " << x << endl
int main()
{
    int n,count,prob,temp;
    vector < int > v;
    cin >> n;
    prob = 0;
    while(n--)
    {   count = 0;
        for (size_t i = 0; i < 3; i++)
        {
            cin >> temp;
            count = count + temp;
        }
        if(count > 1)
        {
            prob++;
        }
    }
    cout << prob << endl;
  
}