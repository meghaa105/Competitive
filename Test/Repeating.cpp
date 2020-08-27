#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string str;
	int count = 0;
	cin >> str;
	for(int i=0;i<str.length()-1;i++)
	{
	    char ch = str.at(i);
	    for(int j = i+1;j< str.length();j++)
	    {
	        if(ch == str.at(j))
	        {   
	            count = 1;
	            break;
	        }
	        else
	        {
	            count = 0;
	        }
	    }
	    if(!count)
	    {
	        cout << ch;
	        break;
	    }
	}
	return 0;
}
