#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, i, tmp;
  cin >> n;
  stack<int> scores;
  for (i = 0; i < n; ++i)
  {
    cin >> tmp;
    // Only add distinct numbers in the stack
    // 100 90 80 
    if (scores.empty() || scores.top() != tmp) 
    {
        scores.push(tmp);
    } 
  }
  
  cin >> m;
  
  for (i = 0; i < m; ++i) {
    cin >> tmp;
    // Since alice's scores are in ascending order, we can pop the values of the stack which are less than the score, this reduces the time complexity significantly
    while (!scores.empty() && tmp >= scores.top()) 
    {
        scores.pop();
    }
    cout << (scores.size() + 1) << endl;
  }
  return 0;
}