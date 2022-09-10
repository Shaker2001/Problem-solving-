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

 int  main(){

     FIO;
 string s;
    cin>>s;
    int x1=s.find("AB");
    int x2=s.find("BA",x1+2);
   int y1=s.find("BA");
   int y2=s.find("AB",y1+2);
   if((x1!=-1 && x2!=-1)  || (y1!=-1 && y2!=-1)){
    cout<<"YES"<<endl;
   }
   else
    cout<<"NO"<<endl;
    return 0;
}
 
