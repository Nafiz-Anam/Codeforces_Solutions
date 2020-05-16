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
    ll n,i,j,cnt=0,l=-1,r=-1;
    cin>>n;
    ll a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            l=i;
            break;
        }
    }
    for(i=n-1;i>0;i--){
        if(a[i]<a[i-1]){
            r=i;
            break;
        }
    }
    //cout<<l<<" "<<r<<nl;
    if(l==-1 && r==-1){
        cout<<"yes"<<nl;
        cout<<1<<" "<<1<<nl;
        return 0;
    }
    reverse(a+l,a+r+1);
    sort(b,b+n);
    for(i=0;i<n;i++){
        if(a[i]!=b[i]){
            cnt++;
            break;
        }
    }
    if(cnt>0){
        cout<<"no"<<nl;
    }
    else{
        cout<<"yes"<<nl;
        cout<<l+1<<" "<<r+1<<nl;
    }

    //cout<<"Case "<<cn<<": "<<"good"<<endl;
    return 0;
}


