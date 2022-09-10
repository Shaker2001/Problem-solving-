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
double lr[N];
double rr[N];
using namespace std;

 int  main(){

     FIO;
     cinarr
 ll ans[n]={0};
ll mx =arr[n-1];
int j =n-2;

 for ( int i =n-2 ; i>=0; i--,j--)
 {

     if (arr[i]>mx)
     {
         mx=arr[i];
     }
     else
        ans[j]=mx+1 -arr[i];
 }
 for (int i =0 ;i < n ; i++)
    cout<<ans[i]<<" ";

    return 0;
}
 
