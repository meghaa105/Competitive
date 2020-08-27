#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    char letter;
    cin >> n;
    b = n;
    while(b > 0)
    {
        letter = (b%26)+64;
        cout << letter;
        b = b-26;
    }
    return 0;
}