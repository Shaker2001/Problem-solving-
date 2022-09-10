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
      cinarr0
      ll sum =0;
      for (int i =0 ; i< n ; i++)
          sum+=arr[i];

       ll mx=arr[0];
       ll mxi=0;
      for ( ll i =0 ; i<n ; i++ ){
            if (mx <arr[i])
            { mxi=i;
                mx=arr[i];
            }
          }
          //cout<<mx<<"  "<<mxi<<endl;
          ll secmx=INT_MIN,secxi=-1;
          zero
          {
              if (i==mxi)continue;
              if (arr[i]> secmx)
              {
                  secmx=arr[i]; secxi=i;
              }
          }
          vector<ll> ans;

          zero
          { //cout<<"this index : "<<i+1<<endl;
              if (i == mxi)
              { //cout<<"I entered "<<endl;
                  if (sum-arr[i] - secmx ==secmx)
                  {//cout<<i<<endl;
                    ans.push_back(i+1);
                    }
              }
              else
              {
                  if (sum-arr[i] - mx ==mx){
                        //cout<<i<<endl;
                    ans.push_back(i+1);}

              }
          }
          cout<<ans.size()<<endl;
          if (ans.size()){
          for (int i =0 ;i < ans.size(); i++)
            cout<<ans[i]<<" ";
            cout<<endl;
          }




        return 0;
    }

 
