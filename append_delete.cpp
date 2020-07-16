#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    int count=0;
    int i=0;
    int length1=s.length();
    int length2=t.length();
    for(i=0;i<=length1;i++)
    {   if(s.at(i)==t.at(i))
        {count++;}
        else
        {
            break;
        }
        
    }
    int length1=s.length();
    int length2=t.length();
    int no_of_moves=(length1-count)+(length2-count);
    if(no_of_moves>=k)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
    


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
