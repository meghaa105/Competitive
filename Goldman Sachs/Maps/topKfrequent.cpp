#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>& a,pair<int, int>& b) 
    { 
        return a.second < b.second; 
    } 
    
    void topKFrequent(vector<int>& nums, int k) 
    {
        map<int,int> m;
        map<int,int> :: iterator it;
        vector<int> v;
        for(int i= 0;i<nums.size();i++)
        {
            it = m.find(nums[i]);
            if(it!=m.end())
            {
                m.insert( pair<int,int> (nums[i],0));
            }
            else
            {
                m[nums[i]]++;
            }
        }
        // sort(m.begin(), m.end(),cmp);
        for (auto it = m.rbegin(); it != m.rend(); it++)
        { 
            if(k)
            {
                cout << it->first << endl;
            k--;}
        } 
        
        
              
    }

int main()
{
    vector<int> r;
    r.push_back(1);
    r.push_back(1);
    r.push_back(1);
    r.push_back(2);
    r.push_back(2);
    r.push_back(3);

    topKFrequent(r,2);


}
