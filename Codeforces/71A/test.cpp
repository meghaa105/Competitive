#include <bits/stdc++.h>
using namespace std;

// This helps in debugging values
#define deb(x) cout << #x << " " << x << endl
int main()
{
    string str;
    int n;
    cin >> n;
    while(n--)
    {
        cin >> str;
        if(str.length() < 11)
        {
            cout << str << endl;
        }
        else
        {
            //  Keep in mind the index that you are giving in the str.at()
            cout << str.at(0) << str.length()-2 << str.at(str.length()-1) << endl; 
        }
    }
  
}