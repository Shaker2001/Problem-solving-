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
 
            whilet
            {
                ll n ; cin>>n;
                string res="";
                string s ; cin>>s;
                for (int i =s.size()-1 ; i>=0;)
                {
                    if (s[i]=='0')
                    {
                        int a = s[i-1]-'0';
                        int b = s[i-2]-'0';
                        int c =b*10 + a;
                        res+=char(96+c);
                        i-=3;
                       // cout<<"when  we get into 0 : "<<res<<endl;
                    }
                    else
                    {
                        int a = s[i]-'0';
                        res+=char(96+a);
                        i--;
                        //cout<<"when we get int no : "<<res<<endl;
                    }
                }
                for (int i =res.size()-1 ; i>=0 ;i--)
                    cout<<res[i];
                cout<<endl;
                }
            //cout<<char(96+10)<<endl;
    return 0;
 
           }
