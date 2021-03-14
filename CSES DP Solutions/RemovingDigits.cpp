#define ONLINE_JUDGE
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

#define ll long long
#define ld long double

#define dairymilk6969 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define all(a) a.begin(),a.end()

#define pb push_back

const ll INF = 1e18 ;

const ll N = 2e5 + 7;
const int mod = 1e9 + 7;
 


void solve(){
   int n;
   cin>>n;
   //dp[x]==number of steps to make x=0
   vector<int> dp(n+1,1e9);
   dp[0]=0;
   for(int i=1;i<=9;i++){
   	dp[i]=1;
   }
   for(int i=10;i<=n;i++){
   	 for (char c : to_string(i)) {
      dp[i] = min(dp[i], dp[i-(c-'0')]+1);
    }
   }
   cout<<dp[n]<<nl;

}
int main()
{
	dairymilk6969
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	 ll t=1;
	 //cin>>t;
	 while(t--){
	 	   solve();
	   }
}
 