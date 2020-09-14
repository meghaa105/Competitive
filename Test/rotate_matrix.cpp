#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int> > &A) 
{
    vector<vector<int> > B;
    int m = A.size();
    
    int j = 0;
    
    while(j<m)
    {
        vector<int> v;
        for(int i = m - 1;i>=0;i--)
        {
            v.push_back(A[i][j]);
        }
        j++;
        B.push_back(v);
        
    }
    for(int i = 0;i<m;i++)
    {
        for(int j =0;j<m;j++)
        {
            cout << B[i][j];
        }
        cout << endl;
    }
    return ;
}
int main()
{
    int m;
    cout << "Enter Size of the Array";
    cin >> m;
    vector< vector<int> > A;
    for(int j = 0;j<m;j++)
    {
        vector<int> v;
        for(int i = 0;i<m;i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        A.push_back(v);        
    }
    rotate(A); 
}