#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

int t,tc,i,j;
ll a,b,n,m;
ll sum1,sum2;

ll fpb(ll a,ll b){
	if (b==0) return a;
	else return fpb(b,a%b);
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> a >> b >> n >> m;
		ll awal = a+n-(a%n);
		ll akhir = b-(b%n);
		sum1 = ((akhir/n)*((akhir/n)+1))/2 - (((awal/n)-1)*(awal/n))/2
		sum1 *= n;
		ll temp = (n*m)/fpb(n,m);
		ll awal1 = a+temp-(a%temp);
		ll akhir1 = b-(b%temp);
		sum2 = ((akhir1/temp)*((akhir1/temp)+1))/2 - (((awal1/temp)-1)*(awal1/temp))/2
		sum2 *= temp;
		cout << sum1 - sum2 << '\n';
	}
	return 0;
}