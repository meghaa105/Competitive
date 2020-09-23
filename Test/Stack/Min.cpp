#include<bits/stdc++.h>
using namespace std;
void push(stack<int> &s,int x)
{
    if(!s.empty() && s.top()<x)
    {
        // while(s.top()<x && !s.empty())
        {
            int temp = s.top();
            s.pop();
            s.push(x);
            s.push(temp);
        }
    }
    else
    {
        s.push(x);
    }    
}
int getmin(stack<int> &s)
{
    return s.top();
}

int main()
{
    stack<int> s;
    push(s,4);
    push(s,-8);
    push(s,-1);
    push(s,2);
    cout << getmin(s);
}