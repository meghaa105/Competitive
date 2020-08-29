#include<iostream>

using namespace std;

void sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            {
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
            }
}

int main()
{
  int iq[100],n,t;
  cout<<"Enter the number of students";
  cin>>n;
  cout<<"Enter no. of players to pick";
  cin>>t;
  cout<<"Enter IQ of every no.";
  for(int i=0; i<n; i++)
  {
    cin>>iq[i];
  }
  if(t<2)
  {
    cout<<"Time req is 0";

    exit(0);
  }
  sort(iq, n);
  int min=iq[t-1]-iq[0];
  if(n==t)
  {
    cout<<"Time Required is "<<iq[n-1]-iq[0];
  }

  else
  {
    for(int i=0;i<=n-t;i++)
    {
      if(iq[i+t-1]-iq[i]==0)
      {
        cout<<"Time req is 0";
        exit(0);
      }
      else if(iq[i+t-1]-iq[i]<min)
      {
        min= iq[i+t-1]-iq[i];
      }
    }
  }
  cout<<"Time req"<<min;
  return 0;
}
