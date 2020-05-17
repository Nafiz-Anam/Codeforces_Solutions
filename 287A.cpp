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

ll Count(char a[4][4], ll p,ll b, char c)
{
    ll cnt=0;
    if(a[p][b]==c){
        cnt++;
    }
    if(a[p+1][b]==c){
        cnt++;
    }
    if(a[p][b+1]==c){
        cnt++;
    }
    if(a[p+1][b+1]==c){
       cnt++;
    }
    return cnt;

}


int main()
{
    ios
    ll n,i,j,bcnt=0,wcnt=0,l=2;
    bool ok;
    char ch,a[4][4];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    ok=0;
    for(i=0;i<=l;i++){
        for(j=0;j<=l;j++){
           bcnt = Count(a,i,j,'#');
           wcnt = Count(a,i,j,'.');
           if(bcnt>=3 || wcnt>=3){
            ok=1;
           }
        }
    }
    if(ok){
        cout<<"YES"<<nl;
    }
    else{
        cout<<"NO"<<nl;
    }
    //cout<<"Case "<<cn<<": "<<"good"<<endl;
    return 0;
}
