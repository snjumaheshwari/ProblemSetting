#include<bits/stdc++.h>
using namespace std;
#define int long long
const int NN = 1e6;
const int MOD = 1e9 +7;

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        // freopen("in.txt","r",stdin);
        // freopen("out.txt","w",stdout);
    #endif

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int K; cin>>K;
        vector<int> arr(n);
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        
        vector<int>dp(n+1);
        int l,r;
        for(int i=0;i<K;++i){
            cin>>l>>r;
            l--;
            r--;
            dp[l]++;
            dp[r+1]--;
        }
        for(int i=1;i<n;++i){
            dp[i]+=dp[i-1];
        }
        
        int ca = 0;
        for(int i=0;i<n;++i){
            ca+= arr[i]*dp[i];
        }
        sort(dp.begin(),dp.end(),greater<int>());
        sort(arr.begin(),arr.end(),greater<int>());

        int newAns = 0;
        for(int i=0;i<n;++i){
            newAns+=arr[i]*dp[i];
        }
        cout<<newAns-ca<<endl;

    }

    return 0;
}