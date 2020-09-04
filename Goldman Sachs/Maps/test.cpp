#include<bits/stdc++.h>
#include<map>
using namespace std;

int main()
{
    map<int,int> m;
    m[1] = 2;
    m[2] = 4;
    cout << m.at(1); // Prints a value associated with the key 1
    cout << m[1]; // Just a variation
    cout << m.empty() << endl;
    cout<< m.size()<< endl;
    m.insert( pair <int,int> (4,5)); // Fucking inserts a value in map;
    cout << m[4] << endl;
    map<int, int>::iterator it;
    for(it = m.begin();it!=m.end();it++)
    {
        cout << it->first << it->second << endl;
    }
    it = m.find(1);
    cout << it->second<< endl;


}