    #include<iostream>
    #include<string>
    #include<sstream>
    #include<algorithm>
    #include <bits/stdc++.h>
    #define  endl  '\n'
    #define  cinarr0   int n; cin>>n; int arr[n]; for (int i=0; i<n; i++){cin>>arr[i];}
    #define  cinarr1   int n; cin>>n; int arr[n+1]={0}; for (int i=1; i<=n; i++){cin>>arr[i];}

    #define  zero   for(int i =0 ; i<n ; i++)
    #define  one   for(int i =1 ; i<=n ; i++)
    #define whilet    int t ; cin>>t ;while(t--)
    #define FIO cin.tie(0), cin.sync_with_stdio(0)
    #define ll   long long
    using namespace std;
     int  main(){ FIO;
     ll y, k, n; cin>>y>>k>>n;
      ll a =(n/k) ;
      vector<ll> ans;
      for (int i=0; i<=a ; i++)
      {
          ll x = (k*i)-y;
          if (x>0)ans.push_back(x);
      }
      if (ans.size())
      {

      for (int i =0 ; i< ans.size(); i++)
        cout<<ans[i]<<" ";
        cout<<endl;
      }
      else cout<<-1<<endl;
        return 0;
    }

 
