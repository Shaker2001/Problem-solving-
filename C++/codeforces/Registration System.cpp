
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
  ll n ; cin>>n;
  unordered_multiset<string> mlt;
  int cnt =1;
  map<string,int> mp;
  while(n--)
  { string x ; cin>>x;

     if (mlt.size() )
     {
       if(mlt.find(x) != mlt.end() )
       {
            mp[x]++;

             cout<<x<<mp[x]<<endl;
       }
       else
       {
           mlt.insert(x);
           cout<<"OK"<<endl;
       }
     }
     else
     { cout<<"OK"<<endl;
         mlt.insert(x);
     }
  }


 return 0;

}
