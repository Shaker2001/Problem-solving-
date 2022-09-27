
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

using namespace std;



int main(){ FIO;

  whilet
 { int n; cin>>n;
 string s; cin>>s;
 string ans="";
 int cnt0=0;
 for (int i =0 ; i<s.size();i++)
 {
     if (s[i]=='0')
     {cnt0++;
         ans.push_back('0');
     }

 }
 int cnt1=0;
 for (int i=0 ; i<s.size(); i++)
 {
     if (s[i]=='1')
     { cnt1++;
         ans.push_back('1');
     }
 }
 if (cnt1==1 && cnt0==1 )cout<<s<<endl;
 else
    cout<<ans<<endl;
 }
        return 0;
}

