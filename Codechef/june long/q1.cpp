#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005
#define INF LLONG_MAX

#define mem(a,val) memset(a,val,sizeof(a))
#define rep(i,j,n) for(i=j;i<n;i++)
#define invrep(i,j,n) for (i = j-1; i >=n ; --i)

#define pb push_back
#define mp make_pair
#define f first
#define s second

#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
#define bin_long stoi(to_string(x), nullptr, 2);

using namespace std;
typedef long double ld;
ld pi=2.0*acos(0.0);

typedef long long int ll;
typedef pair<ll,ll> pl;

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());

ll N;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("../../input","r",stdin);
    freopen("../../output","w",stdout);
    #endif
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	double P,O,I;
	char A[mx];
	memset(A,-1,sizeof(A));

	cin>>t;
	while(t--){
		f=0;
		r=0;
		cin>>n;
		cin>>A;
		rep(i,0,n){
			if (A[i]=='P')
			{
				f++;
			}
		}
		rep(i,2,n-2){
			if (A[i]=='A')
			{
				if ((A[i-1]=='P'||A[i-2]=='P')&&(A[i+1]=='P'||A[i+2]=='P'))
				{
					r++;
				}
			}
		}

		if (ceil(0.75*n) <= r+f)
		{
			a=ceil(0.75*n)-f;
			if(a<0)
				a=0;
			cout<<a;
		}else{
			cout<<"-1";
		}
		cout<<"\n";
	}

	return 0;
}