#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A;
    int n,temp,carry=0;
    cout << "Size :";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        A.push_back(temp);
    }
    carry = (A[n-1]+ 1)/10;
    A[n-1] = (A[n-1]+ 1)%10;
    int i = 1;
    while(carry!=0)
    {
        carry = (A[n - i -1]+ 1)/10;
        A[n- i - 1] = (A[n- i - 1]+ 1)%10;
        i++;
    }
    
    for(int i=0;i<n;i++)
    {
        cout << A[i] << " ";
    }
    return 1;

}