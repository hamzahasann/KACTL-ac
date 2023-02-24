#include<bits/stdc++.h>
using namespace std;
#define nl cout<<"\n"
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define tcs int t;cin>>t;for(int T=1;T<=t;T++)
#define sp <<" "<<
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define forn(a,b) for (int i = a; i <= b; ++i)
#define all(a) begin(a), end(a)
#define pb(a) push_back(a)
#define pii pair<int,int>
#define fi first
#define se second
#define mp(a, b) make_pair(a, b)
#define int long long
#define ll long long
#define dd double

ll mod=1e9+7;

ll gcd(ll a, ll b){ll tmp; while(b != 0) tmp = a, a = b, b = tmp%b; return a;}
ll po(ll x,ll y,ll _prime=mod) {if(y<0)return 0;y%=(_prime-1);ll res=1;while(y>0){if(y&1)res=(res*x)%_prime;x=(x*x)%_prime;y>>=1;}return (res%_prime);}
void solve(){

}

int32_t main(){
    // fastio;
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w+",stdout);
    tcs{
        // cout<<"Case #"<<T<<": ";
        solve(); nl;
    }
    return 0;
}

/*

*/