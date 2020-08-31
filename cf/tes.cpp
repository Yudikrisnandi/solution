/**
 *    author:  ykaka
 *    created: 09.08.2020 18:04:18       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
#define pb push_back
using namespace std;
using ll = long long;
 
int main()
{
  int T,i,n,k,count;
  int arr[200];
  cin>>T;
  while(T--)
  {
    count=0;
    cin>>n>>k;
    
    for(i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    for(i = 0; i < n; i++)
    {
      if(arr[i]>=0)
      {
        count++;
      }
    }
    if(count>=k)
    {
      cout<<"No"<<endl;
    }
    else
    {
      cout<<"Yes"<<endl;
    }
  }
  return 0;
}

