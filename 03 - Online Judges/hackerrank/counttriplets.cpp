#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const int MAXN = 1e5;

int N;
LL r, arr[MAXN+5];
map<LL,LL> frek;
map<LL,LL> ada;
LL ans;

int main(){
	scanf("%d %lld", &N, &r);
	for (int i = 0; i < N; i++){
		scanf("%lld", &arr[i]);
		ada[arr[i]]++;
	}
	for (int i = N-1; i >= 0; i--){
		if (i == N-1){
			frek[arr[i]]++;
			ada[arr[i]]--;
		}else{
			ada[arr[i]]--;
			LL bil = arr[i] * r;
			if (arr[i] % r == 0){
				LL cari = arr[i] / r;
				ans += (ada[cari] * frek[bil]);
			}
			frek[arr[i]]++;
		}
	}
	printf("%lld\n", ans);
	return 0;
}