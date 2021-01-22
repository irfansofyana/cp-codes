#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int t;
ull n,m,i,j;
ull akhir,bilangan;
ull awal,ans;

ull binser(ull l,ull r){
	ull ret = (ull)2e+9;
	while (l<=r) {
		ull mid = (l+r)/2;
		if ((n/mid) > bilangan) l = mid+1;
		else {
			ret = mid;
			r = mid-1;
		}
	}
	return ret;
}

ull jumlah(ull a,ull b){
	return ((b-a+1)*(a+b))/2;
}

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	scanf("%d", &t);
	while (t--) {
		scanf("%llu", &n);
		akhir = n;
		ans = 0;
		while (akhir>0) {
			bilangan = (n/akhir);
			awal = binser(1,akhir);
			ans += jumlah(awal,akhir)*bilangan;
			akhir = awal-1;
		}
		printf("%llu\n", (ans > 1000000007 ? ans-(ans/1000000007)*1000000007 : ans));
	}
	return 0;
}