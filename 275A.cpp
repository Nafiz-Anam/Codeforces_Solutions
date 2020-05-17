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


int a[10][10];
int main()
{
    memset(a,0,sizeof(a));
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            cin>>a[i][j];
        }
    }
        for(int i=1; i<=3; i++)
        {
            for(int j=1; j<=3; j++)
            {
                int cnt=a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1];
                if(cnt%2==1)cout<<0;
                else cout<<1;
            }
            cout<<nl;
        }
        return 0;
}
