
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
    ll t,n,i,j,ans,an;
    cin>>t;
    while(t--){
        cin>>n;
        set<ll> used;
        for(i=2;i*i<=n;i++){
            if(n%i==0 and !used.count(i)){
                used.insert(i);
                n/=i;
                break;
            }
        }
        for(i=2;i*i<=n;i++){
            if(n%i==0 and !used.count(i)){
                used.insert(i);
                n/=i;
                break;
            }
        }

        if(used.size()<2 or used.count(n) or n==1){
            cout<<"NO"<<nl;
        }
        else{
            cout<<"YES"<<nl;
            used.insert(n);
            for(auto it : used){
                cout<<it<<" ";
            }
            cout<<nl;
        }


//        ll a=-1,b=-1,c=-1;
//        if(n%2==0){
//            a=2;
//            an=n/2;
//            for(i=4;i<=n/2;i+=2){
//                if(an%i==0){
//                    b=i;
//                    break;
//                }
//            }
//            ans=an/b;
//            if(ans!=b){
//                c=ans;
//            }
//        }
//        else{
//            a=3;
//            an=n/3;
//            for(i=5;i<=n/2;i+=2){
//                if(an%i==0){
//                    b=i;
//                    break;
//                }
//            }
//            ans=an/b;
//            if(ans!=b){
//                c=ans;
//            }
//        }
//        if(a>=2 and b>=2 and c>=2 and a!=b and b!=c and c!=a){
//            cout<<"YES"<<nl;
//            cout<<a<<" "<<b<<" "<<c<<nl;
//        }
//        else{
//            cout<<"NO"<<nl;
//        }
    }


    //cout<<"Case "<<cn<<": "<<"good"<<endl;
    return 0;
}

