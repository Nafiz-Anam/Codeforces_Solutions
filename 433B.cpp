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
    int n;
    cin>>n;
    long long arr[n]= {};
    long long arr2[n]= {};
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    sort(arr2,arr2+n);
    for(int i=1; i<n; i++)
    {
        arr[i]=arr[i-1]+arr[i];
        arr2[i]=arr2[i-1]+arr2[i];
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int t,r,l;
        cin>>t>>l>>r;
        l-=1;
        r-=1;
        if(t==1)
        {
            if(l==0)
                cout<<arr[r]<<endl;
            else
            {
                cout<<arr[r]-arr[l-1]<<endl;
            }
        }
        else
        {
            if(l==0)
                cout<<arr2[r]<<endl;
            else
            {
                cout<<arr2[r]-arr2[l-1]<<endl;

            }
        }
    }

    /*ll n,sum=0,ans=0,cnt=0,i,j;
    cin>>n;
    ll a[n],b[n];
    for(i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    ll q;
    cin>>q;
    while(q--){
        ll t,l,r;
        cin>>t>>l>>r;
        if(t==1){
            for(i=l;i<=r;i++){
                //cout<<a[i]<<" ";
                sum+=a[i];
            }
            cout<<sum<<nl;
            sum=0;
        }
        else{
            sort(b+1,b+n+1);
            for(i=l;i<=r;i++){
                sum+=b[i];
            }
            cout<<sum<<nl;
            sum=0;
        }
    }*/


    //cout<<"Case "<<cn<<": "<<"good"<<endl;
    return 0;
}
