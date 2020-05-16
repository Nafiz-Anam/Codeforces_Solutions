
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

typedef long long int ll;
typedef long double ld;

#define     ios             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     pi              acos(-1.00)
#define     ia(arr,a,n)	    for(int i=a; i<n; i++) cin>>arr[i];
#define     oa(arr,a,n)	    for(int i=a; i<n; i++) cout<<arr[i]<<" ";
#define     all(x)          x.begin(),x.end()
#define	    nl              '\n'
/*** STLs ***/
typedef vector <ll> vll;
typedef set <ll> sll;
typedef multiset <ll> msll;
typedef queue <ll> qll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;

#define pb push_back
#define ff first
#define ss second
#define mp make_pair

/// *** ============= *** Star from Here *** ============= *** ///



int main()
{
    ios
    ll n,k,i,j,ans=0,cnt[128];
    memset(cnt,0,sizeof(cnt));
    vll v;
    char ch;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>ch;
        cnt[ch]++;
    }
    for(i=0;i<128;i++){
        if(cnt[i]>0){
            v.pb(cnt[i]);
        }
    }
    sort(all(v));
    for(i=v.size()-1; i>=0 and k>0 ; i--){
        if(k >= v[i]){
            ans+= v[i]*v[i];
            k-=v[i];
        }
        else{
            ans+=k*k;
            k=0;
        }
    }
    cout<<ans<<nl;




    //cout<<"Case "<<cn<<": "<<"good"<<endl;
    return 0;
}


