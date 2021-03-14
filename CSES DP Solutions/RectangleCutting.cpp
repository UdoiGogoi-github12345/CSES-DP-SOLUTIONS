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
   int a,b;
   cin>>a>>b;
   int dp[a+1][b+1];
   for(int i=0;i<=a;i++){
   	for(int j=0;j<=b;j++){
   		if(i==j){
   			dp[i][j]=0;
   		}
   		else{
   			dp[i][j]=1e9;
   			for(int k=1;k<i;k++){
              dp[i][j]=min(dp[i][j],1+dp[i-k][j]+dp[k][j]);
   			}
   			for(int k=1;k<j;k++){
                dp[i][j]=min(dp[i][j],1+dp[i][j-k]+dp[i][k]);
   			} 
   		}
   	}
   }
   cout<<dp[a][b]<<nl;
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
 