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
    ll t,n,ss,r,a,s,i,j,sum=0,ans=0,cnt=0;
    cin>>t;
    while(t--){
        cin>>n>>r>>a>>s;
        if(n>r and a<=s){
            cout<<-1<<nl;
            continue;
        }
        else if(n<=r){
            cout<<r<<nl;
            continue;
        }
        else{
        //sum=r;
            ss=a-s;
            ll rem= n-r;
            cnt = ceil((double)rem/(double)ss);
            ans = r+(cnt*a);
            cout<<ans<<nl;
        }
        /*while(1){
            sum+=ss;
            cnt++;
            if(sum>=n){
                break;
            }
        }*/
//        cout<<"sum"<<sum<<nl;
//        cout<<"cnt"<<cnt<<nl;
//        ans=r+(a*cnt);
//        cout<<ans<<nl;
//        ans=0;
//        cnt=0;

    }


    //cout<<"Case "<<cn<<": "<<"good"<<endl;
    return 0;
}
