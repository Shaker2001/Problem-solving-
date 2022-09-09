
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
    ll n , k,q ; cin>>n>>k>>q;


     while(n--)
     {
         ll l , r ; cin>>l>>r;
        ch[l]++; ch[r+1]--;

     }
     for (ll i=1;i<2000000;i++)
    {
        ch[i]+=ch[i-1];
    }
     for (ll i=1;i<2000000;i++)
    {
        if (ch[i]>= k )ch[i]=1;
        else ch[i]=0;
    }
     for (ll i=1;i<2000000;i++)
    {
        ch[i]+=ch[i-1];
    }

     while(q--)
     {
         ll x, y ; cin>>x>>y;
         cout<<ch[y]-ch[x-1]<<endl;

     }
    /* for (int i=1;i<102;i++)
    {
        cout<<ch[i]<<" ";
    }*/
        return 0;
}


