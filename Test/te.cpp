#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() 
{
	int n,k,j,temp;
	int sum = 0;
	vector<int>shop;
	cin >> n >> k >>j;
	while(n--)
	{
		cin >> temp;
		shop.push_back(temp);
	}
    
	sort(shop.begin(),shop.end());
	int count = 0;
	int i = 0;
	while(count<k)
	{
		if(i!=j)
		{
			sum+=shop[i++];
		}
		if(i==j)
		{
			i++;
		}
	}
	cout << sum << endl;
	
	// Your code here
	return 0;
}