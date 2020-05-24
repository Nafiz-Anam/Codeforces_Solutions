/////**** In the name of ALLAH ****/////
/**
	Kazi Nafiz Anam
		CSE'19
**/
#include<bits/stdc++.h>
using namespace std;

/*** Optimization ***/
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
///use for long num in vector
/// to find max/min dig
#define     minv(v)         *min_element(v.begin(),v.end())
#define     maxv(v)         *max_element(v.begin(),v.end())

#define     ios             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     pi              acos(-1.00)
#define     ia(arr,a,n)	    for(int i=a; i<n; i++) cin>>arr[i];
#define     oa(arr,a,n)	    for(int i=a; i<n; i++) cout<<arr[i]<<" ";
#define     all(x)          x.begin(),x.end()
#define     allr(x)         x.begin(),x.end(),greater<int>()
#define     fill(arr)       memset(arr,0,sizeof(arr))
#define	    nl              '\n'
/*** STLs ***/
typedef vector<ll> vll;
typedef set<ll> sll;
typedef multiset<ll> msll;
typedef queue<ll> qll;
typedef map<ll,ll> mll;
typedef pair<ll,ll> pll;
typedef vector<pair<ll,ll>> vpll;

#define pb push_back
#define ff first
#define ss second
#define mp make_pair

/// *** ============= *** Star from Here *** ============= *** ///



int main()
{
    ios

    ll t,n,k,ans=0,cnt=0,i,j;
    bool ok;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ans=n;
        for(i=1;i*i<=n;i++){
            if(n%i==0){
                if(i<=k){
                    ans=min(ans, n/i);
                }
                if(n/i<=k){
                    ans=min(ans,i);
                }
            }
        }
        cout<<ans<<nl;
//        if(n<=k){
//            cout<<1<<nl;
//            continue;
//        }
//        else if(n%k==0){
//            cout<<(n/k)<<nl;
//            continue;
//        }
//        else{
//            ld sq= sqrt(n);
//            ll s=ceil(sq);
//            ok=1;
//            for(i=s;i<=k;i++){
//                if(n%i==0){
//                    ans=n/i;
//                    ok=1;
//                    break;
//                }
//                else{
//                    ok=0;
//                }
//            }
//            cout<<ans<<nl;
//
//        }
    }

    //cout<<"Case "<<cn<<": "<<"good"<<endl;
    return 0;
}
