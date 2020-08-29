#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,d;
    cin >> n;
    vector<int> card;
    while(n--)
    {   int temp;
        cin >> temp;
        card.push_back(temp);
    }
    int i = 0;
    int j = card.size()- 1;
    s = d = n = 0;
    while(i<=j)
    {
        if(n%2==0)
        {
            if(card[i]>card[j])
            {
                s+=card[i++];
            }
            else
            {
                s+=card[j--];
            }
            n++;            
        }
        else
        {
            if(card[i]>card[j])
            {
                d+=card[i++];
            }
            else
            {
                d+=card[j--];
            }
            n++; 
        }        
    }
    cout << s <<" "<< d << endl;
    card.clear();
}