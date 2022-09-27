#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/numeric>
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define o_0 cin.tie(0),ios::sync_with_stdio(0),cout.tie();
#define all(a) a.begin(),a.end()
#define allr(v) v.rbegin(), v.rend()
#define T  int t; cin >> t;while (t--)
#define lcm(x, y) x / __gcd(x, y) * y
#define filein freopen("worklife_balance_chapter_1_input.txt", "r", stdin);
#define fileout freopen("worklife_balance_chapter_1_output.txt", "w", stdout);
#define ll long long
//using L = __int128;
//mt19937 rnd(time(nullptr));
const long double pi = acos(-1);
using namespace __gnu_pbds;
using namespace std;
template <class type1>
using ordered_multiset = tree <type1, null_type, less_equal <type1>, rb_tree_tag, tree_order_statistics_node_update>;
ll n,x,z,y;
const ll oo=(ll)8e18;
const int c5=1e5+9;
const int c3=1e3+9;
const int N=1e5+5;
const int c6=1e6+5;
const int mod = 1e9+7;
const int mod2 =998244353;
int dx[]={-1,0,0,1};
int dy[]={0,1,-1,0};
char dd[]={'D','L','R','U'};
//int64_t w;
 
int main()
{
    o_0
    T
    {
        cin>>n;
        vector<vector<ll>>se(c5),se2(c5);
        vector<vector<pair<ll,ll>>>per(c5);
        vector<ll>v(n);
        vector<vector<ll>>mp(c5);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]].push_back(i);
            if(i)v[i]+=v[i-1];
        }
        for(int i=2;i<c5-7;i++)
        {
            for(int j=i;j<c5-7;j+=i)
            {
                if(mp[j].size())
                {
                    for(auto a:mp[j])
                    {
                        se[i].push_back(j);
                        per[i].push_back({a,j});
                    }
                }
            }
            if(per[i].size())
            {
                reverse(all(se[i]));
                for(int k=1;k<se[i].size();k++)
                    se[i][k]+=se[i][k-1];
                sort(all(per[i]));
                for(int k=1;k<se[i].size();k++)
                    per[i][k].second+=per[i][k-1].second;
                for(auto a:per[i])
                    se2[i].push_back(a.first);
            }
        }
        cin>>x;
        while(x--)
        {
            cin>>y>>z;
            int index=upper_bound(all(se2[y]),z-1)-se2[y].begin();
            ll sum=v[z-1];
            if(index)
            {index--;
            sum+=se[y][index];
            sum-=per[y][index].second;}
            cout<<sum<<'\n';
        }
    }
}
