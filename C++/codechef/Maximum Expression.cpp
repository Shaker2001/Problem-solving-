
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
 {
   int n ; cin>>n;
   string s; cin>>s;
   string no ="" ; string ch ="";
   string ans="";
   for (int i=0 ; i< n ; i++)
   {
       if (s[i]!='-' && s[i]!='+')
       {
           no.push_back(s[i]);
       }
       else
        ch.push_back(s[i]);
   }
   sort(no.begin(),no.end(),greater<>());
   sort(ch.begin(),ch.end());
   int k = no.size()-ch.size();
   for (int i =0 ; i< k ; i++)
       {ans.push_back(no[i]);

       }
 for (int i =0,j=k ; i< ch.size(); i++,j++)
 {
     ans.push_back(ch[i]);
     ans.push_back(no[j]);
 }
 cout<<ans<<endl;

 }

        return 0;
}
