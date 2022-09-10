    #include<iostream>
    #include<string>
    #include<sstream>
    #include<algorithm>
    #include <bits/stdc++.h>
    #define  endl  '\n'
    #define  cinarr   int n; cin>>n; int arr[n]; for (int i=0; i<n; i++){cin>>arr[i];}
    #define  zero   for(int i =0 ; i<n ; i++)
    #define  one   for(int i =1 ; i<=n ; i++)
    #define whilet    int t ; cin>>t ;while(t--)
    #define FIO cin.tie(0), cin.sync_with_stdio(0)
    #define ll   long long
    const double eps = 1e-6;
    const int mod = 998244353;
    const int N = 1e6 + 10;
    const int M = 211;
    int dx[]={-1, 0, 1, 0};
    int dy[]={0, 1, 0, -1};
     int n, m;


    double lr[N];
    double rr[N];
    using namespace std;
     int  main(){ FIO;
          ll x,y; cin>>x>>y;
          ll cntL=0,cntR=0,cntF=0,cntB=0;
          string s ;cin>>s;
          for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'R')
			cntR++;
		else if (s[i] == 'L')
			cntL++;
		else if (s[i] == 'F')
			cntF++;
		else if (s[i] == 'B')
			cntB++;
	}
          if ( x >=0 && y>=0)
          {

              if (cntR>=abs(x) && cntF>=abs(y) && cntR<=cntL &&cntF <=cntB)cout<<"YES";
              else cout<<"NO";
              return 0;
          }
        else if  ( x >=0 && y<=0)
          {

              if (cntR>=abs(x) && cntB>=abs(y) && cntR<=cntL &&cntB <=cntF)cout<<"YES";
              else cout<<"NO";
              return 0;
          }
          else if  ( x <=0 && y>=0)
          {

              if (cntL>=abs(x) && cntF>=abs(y) && cntL<=cntR &&cntF <=cntB)cout<<"YES";
              else cout<<"NO";
              return 0;
          }
          else if  ( x <=0 && y<=0)
          {

              if (cntL>=abs(x) && cntB>=abs(y) && cntL<=cntR &&cntB <=cntF)cout<<"YES";
              else cout<<"NO";
              return 0;
          }

        return 0;
    }
 
