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
    ll n,m,d,i,j,k,cnt=0,ans=0;
    cin>>n>>m>>d;
    vll v(n*m);
    ll x=n*m;
    for(i=0;i<x;i++){
        cin>>v[i];
    }
    sort(all(v));
    bool an=true;

    sll s;

    for(i=0;i<x;i++){
        s.insert(v[i]%d);
        if(s.size()>1){
            an=false;
            cout<<-1<<nl;
            break;
        }
    }
    if(an){
        k=v[(x)/2];
        for(i=0;i<x;i++){
            ans+=abs(v[i]-x);
        }
        cout<<ans/d<<nl;
    }



    //cout<<"Case "<<cn<<": "<<"good"<<endl;
    return 0;
}


