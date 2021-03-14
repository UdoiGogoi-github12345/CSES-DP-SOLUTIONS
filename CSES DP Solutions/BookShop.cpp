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
	//pure 0-1knapsack
    int n,x; //n is the size and x is the maximum total price or capacity
    cin>>n>>x;
    int price[n],pages[n];
    for(int i=0;i<n;i++){
    	cin>>price[i];
    }
    for(int j=0;j<n;j++){
    	cin>>pages[j];
    }
    int dp[n+1][x+1];
    for(int i=0;i<=n;i++){
    	dp[i][0]=0;
    }
    for(int j=0;j<=x;j++){
    	dp[0][j]=0;
    }
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=x;j++){
    		if(price[i-1]<=j){
    			dp[i][j]=max(dp[i-1][j],pages[i-1]+dp[i-1][j-price[i-1]]);
    		}
    		else{
    			dp[i][j]=dp[i-1][j];
    		}
    	}
    }
    cout<<dp[n][x]<<nl;
    
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
 