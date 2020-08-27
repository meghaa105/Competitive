#include<bits/stdc++.h>
using namespace std;
// The first line of the input gives the number of test cases, T. T test cases follow. Each test case starts with a line containing the two integers N and P, the number of students and the number of students you need to pick, respectively. Then, another line follows containing N integers Si; the i-th of these is the skill of the i-th student. 
int main()
{
    long n,total_stu,team_final,temp;
    vector<long> team;
    cin >> n;
    while(n--)
    {
        // cout << "Enter the total size" << endl;
        cin >> total_stu >> team_final;
        for(int i = 0;i<total_stu;i++)
        {
            cin >> temp;
            team.push_back(temp);
        }
        sort(team.begin(),team.end());
        long min = INT_MAX;
        long dif = 0;
        long k,i;
        for(i=0;i<=total_stu-team_final;i++)
        {
            dif = 0;
            k = i+team_final- 1;
            temp = k - 1;
            while(temp>=i && temp >=0)
            {
                dif = dif + (team[k]-team[temp]);
                temp--;
            }            
            if(dif < min)
            {
                min = dif;
            }            
        }
        cout << min << endl;
        team.clear();
    }

    return 0;

}