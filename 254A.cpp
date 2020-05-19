
/////**** In the name of ALLAH ****/////
/**
	Kazi Nafiz Anam
		CSE'19
**/
#include<bits/stdc++.h>
using namespace std;

///*** Optimization ***/
//#pragma GCC optimize("Ofast,no-stack-protector")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma GCC optimize("unroll-loops")

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
#define     fill(arr)       memset(arr,0,sizeof(arr))
#define	    nl              '\n'
#define     allr(x)         x.begin(),x.end(),greater<int>()
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

vpll v,v2;

int main()
{
    ios
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll n,i,j,a;
    cin>>n;
    for(i=1;i<=2*n;i++){
        cin>>a;
        v.pb(mp(a,i));
    }
    bool c=0;
    sort(all(v));
    for(i=0;i<v.size()-1;i+=2){
        if(v[i].ff==v[i+1].ff){
            v2.pb(mp(v[i].ss,v[i+1].ss));
        }
        else{
            c=1;
            break;
        }
    }
    if(c){
        cout<<-1<<nl;
    }
    else{
        for(i=0;i<v2.size();i++){
            cout<<v2[i].ff<<" "<<v2[i].ss<<nl;
        }
    }


    //cout<<"Case "<<cn<<": "<<"good"<<endl;
    return 0;
}
