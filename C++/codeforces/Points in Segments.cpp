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
     ll n , m ; cin>>n>>m;
     vector<bool> check(m+1);
     for (int i =0 ; i<check.size() ; i++)check[i]=0;
     while(n--)
     {
         ll l , r ; cin>>l>>r;
        if (l>r)swap(l,r);
        for (int i=l ; i<= r ; i++)
        {
            check[i-1]=1;
        }

     }
     vector<ll> ans ;
     for (int i =0 ; i<check.size()-1 ; i++)
     {
          if (check[i]==0)ans.push_back(i);
     }

      if (ans.size())
      { cout<<ans.size()<<endl;
           for (int i =0 ; i<ans.size() ; i++)cout<<ans[i]+1<<" " ;
      }
      else cout<<0<<endl;


        return 0;
    }

 
