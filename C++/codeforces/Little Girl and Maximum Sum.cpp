
#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
#define  endl  '\n'
#define  cinarr0   int n; cin>>n; int arr[n]; for (int i=0; i<n; i++){cin>>arr[i];}
#define  cinarr1   int n; cin>>n; int arr[n+1]={0}; for (int i=1; i<=n; i++){cin>>arr[i];}
#define dpp(arr,val) memset(arr,val,sizeof(arr))
#define  zero   for(int i =0 ; i<n ; i++)
#define  one   for(int i =1 ; i<=n ; i++)
#define whilet    int t ; cin>>t ;while(t--)
#define FIO cin.tie(0), cin.sync_with_stdio(0)
#define ll   long long
ll ch [2000006];
using namespace std;
int  main(){ FIO;
 int n,q; cin>>n>>q;
  ll arr[n+2]={0};
  ll presum [n+2]={0};
  one {cin>>arr[i];}
ll sum =0;
vector<ll> ans ;
  while(q--)
  {
      ll x, y ; cin>>x>>y;
      presum[x]+=1;
      if (y<n)presum[y+1]-=1;

  }
  one{presum[i]+=presum[i-1];}
  sort(arr,arr+n+1);
  sort(presum,presum+1+n);
  one
  {
    sum+=arr[i]*presum[i];
  }
  cout<<sum<<endl;
 return 0;

}
