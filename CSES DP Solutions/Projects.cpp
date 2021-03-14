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
 

struct project
{
    ll start,finish,money;
};
 bool comp(project& p1,project& p2){
   return p1.finish<p2.finish;
}
ll findbest(vector<ll> &endtimes,int val){
    auto it=lower_bound(endtimes.begin(),endtimes.end(),val);
    if(it==endtimes.begin()){
    	return -1;
    }
    else{
    	it--;
    	return distance(endtimes.begin(),it);
    }
}

void solve(){
    ll n; 
    cin>>n;
    vector<project> v(n);
    for(int i=0;i<n;i++){
    	cin>>v[i].start>>v[i].finish>>v[i].money;
    }
    sort(v.begin(),v.end(),comp);
    vector<ll> endtimes;
    for(project &p:v){
    	endtimes.push_back(p.finish);
    }
    ll dp[n];
    dp[0]=v[0].money;
    for(ll i=1;i<n;i++){
    	ll opt1=dp[i-1];
    	ll opt2=v[i].money;
    	ll j=findbest(endtimes,v[i].start);
        if(j!=-1){
        	opt2+=dp[j];
        }
        dp[i]=max(opt1,opt2);
    }
    cout<<dp[n-1]<<nl;   
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
 