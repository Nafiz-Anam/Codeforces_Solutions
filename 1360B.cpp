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

    ll t,n,i,j,mini=INT_MAX;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n];
        ia(a,0,n);
        sort(a,a+n);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                else{
                    ll rem = abs(a[i]-a[j]);
                    if(mini>rem){
                        mini=rem;
                    }
                }
            }
        }
        cout<<mini<<nl;
        mini=INT_MAX;
    }

    //cout<<"Case "<<cn<<": "<<"good"<<endl;
    return 0;
}
