#include <bits/stdc++.h>
using namespace std;

void array_inter(vector<int> ar1, vector<int> ar2,int length)
{
    int i,j;
    i=j=0;
   while(i<length && j<length)
        {
            if(ar1[i]<ar2[j])
            {
                i++;
            }
            if(ar1[i]>ar2[j])
            {
                j++;
            }
            if(ar1[i]==ar2[j])
            {
                cout << ar2[j++];
                i++;
            }
        }
    
}
void array_union(vector<int> ar1, vector<int> ar2,int length)
{
    int i,j;
    i=j=0;
        while(i<length && j<length)
        {
            if(ar1[i]<ar2[j])
            {
                cout << ar1[i++];
            }
            if(ar1[i]>ar2[j])
            {
                cout << ar2[j++];
            }
            if(ar1[i]==ar2[j])
            {
                cout << ar2[j++];
                i++;
            }
        }
        if(i==length)
        {
            while(j<length)
            {
                cout << ar2[j++];
            }
        }
        else if(j==length)
        {
            while(i<length)
            {
                cout << ar1[i++];
            }
        }
        cout << endl;
    
}
// Find the Union and Intersection of the two sorted arrays.
int main()
{   int num,i,j;
    vector<int> ar1;
    vector<int> ar2;
    int temp,length;
	// your code goes here
    cin >> num; 
    while(num--)
    {   
        cin >> length;
        for(i = 0;i<length;i++)
        {
            cin >> temp;
            ar1.push_back(temp);
        }
        for(i = 0;i<length;i++)
        {
            cin >> temp;
            ar2.push_back(temp);
        }
        array_union(ar1,ar2,length);
        array_inter(ar1,ar2,length);
        
        
        
    }
    return 0;

}
