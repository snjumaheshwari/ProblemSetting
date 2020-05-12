/*input

*/
// #include<bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <queue>
#include <bitset>
#include <iomanip>
#include <fstream>
#include <stack>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #include<ext/pb_ds/detail/standard_policies.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound
#define rterr exit(0);
#define rall(v) v.rbegin(),v.rend()
#define all(v) v.begin(),v.end()
#define sorta(v) sort(all(v));
#define sortd(v) { sort(all(v)); reverse(all(v)); }
#define initdp(dp) memset(dp, -1, sizeof(dp));
#define mem(dp,a) memset(dp,a,sizeof(dp));
#define pr print
#define endl "\n"

#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__);
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#define print(...) __p(#__VA_ARGS__, __VA_ARGS__);
template <typename Arg1>
void __p(const char* name, Arg1&& arg1){
    cout << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __p(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');
    cout<< arg1<<" ";
    __p(comma+1, args...);
}

#define out(container) for (auto it : container) cout << it << " "; cout << endl;

template < typename T > string toString(T a)       { return to_string(a); }
template < typename T > void toInt(string s, T &x) { stringstream str(s); str >> x;}
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define lp(var,start,end) for(ll var=start; var<=end; ++var)
#define rlp(var,start,end) for(ll var=start ; var>=end ; --var)
#define rep(var,n) for(ll var=0;i<n;++var)
#define forn(var,n) for(ll var=1;var<=n;++var)

#define int long long
#define vi vector<int> 
#define pp pair<int,int> 
#define ppp pair<int,pp>
#define pppp pair<pp,pp>
#define minpq priority_queue<int,vector<int>, greater<int>> 
#define maxpq priority_queue<int,vector<int> >
#define ma map<int,int> 
#define uma unordered_map<int,int> 

const int mod = (1e9)+7;
const int inf = 1034567891;
const ll INF = 1234567890123456789ll;
#define PI 3.14159265
const int MOD = (1e9)+7;
const int MAX = (1e5)+5;
const int NN = (1e6)+1;
#define EPS 1e-5 
inline void rukk(int &ans, int M = mod){ if( ans >= M ) ans -= M;}
inline void bhagg(int &ans, int M = mod){ if( ans < 0 ) ans += M;}

// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// ordered_set o_set;

int item,cnt,mn,mx,sz,sum;
int ca,ans,ans1,ans2,ans3,val,num;
int i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
char ch;
string S;

vector<int> z_function(string s) {
    int n = (int) s.length();
    vector<int> z(n);
    for (int i = 1, l = 0, r = 0; i < n; ++i) {
        if (i <= r)
            z[i] = min (r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    return z;
}


bool hasTestCases =    1 ; 
int solve(){
    // Think More -- write Less -- No Error
    string s; cin>>s;

    int n = s.length();
    int i = 0;
    int j = n-1;
    
    string ans ;
    int mx = 0;
    string s1;
    for(int i=0;i<n;++i){
        s1 = s.substr(0,i);
        for(int j= i+1;j<n;++j){
            
        }
    }

    return 0;
}
signed main(){
//        --- Better Than Yesterday ---
    ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
    // pre compute here


    int t=1;
    if(hasTestCases) cin>>t;
    int test= t;
    while(t--){
        // cout<<"Case #"<<test-t<<": ";
        solve();
        // cout<<solve()<<endl;
        // if(solve()){
        //     cout<<"YES\n";
        // }
        // else{
        //     cout<<"NO\n";
        // }
    } 
  return 0;
}
//          --#SaveCompilationError
// queue - front push pop
// stack - top push pop
// pq - top push pop
// set - begin erase insert
// multiset - begin erase insert find_by_order(index) order_of_key(item)
// - orderedset - find erase insert

// // find at index i 
// cout<<*(oset.find_by_order(1))<<endl;
// // find no of items  strictly less than x
// cout<<oset.order_of_key(50)<<endl;

//            --  #NoPeneltyCheck  -- 
//       int <-> long long
//       oset stores unique item only ..use pair..
//       check MAX ,constraints
//       init mn, mx, ans properly 
//       mod -- trouble maker