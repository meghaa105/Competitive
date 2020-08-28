#include<bits/stdc++.h>
using namespace std;
// The first line of the input gives the number of test cases, T. T test cases follow. Each test case starts with a line containing the two integers N and P, the number of students and the number of students you need to pick, respectively. Then, another line follows containing N integers Si; the i-th of these is the skill of the i-th student. 
long long team_selection(vector<long> team,long total_stu,long team_final)
{
        long long min = INT_MAX;
        long long  dif = 0;
        long long k,i,temp;
        for(i=0;i<=total_stu-team_final;i++)
        {
            dif = 0;
            k = i+team_final- 1;
            temp = k - 1;
            while(temp>=i && temp >=0)
            {
                dif = dif + (team[k]-team[temp]);
                if(dif > min)
                {
                    break;
                }
                temp--;
            }            
            if(dif < min)
            {
                min = dif;
            }            
        }

        return min;
}

int main()
{
    long n,total_stu,team_final,temp;
    vector<long> team;
    cin >> n;
    int count = 1;
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
    
        cout << "Case #"<<count++<< ": " <<team_selection(team,total_stu,team_final) << endl;
        team.clear();
    }

    return 0;

}