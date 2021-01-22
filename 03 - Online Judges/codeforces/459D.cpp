#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const int MAXN = 1e6;

int n;
int arr[MAXN+5], maks;
int brr[MAXN+5];
int frek[MAXN+5];
LL ans;
LL BIT[MAXN+5];
map<int, int> sudah;

void update(int bit,int val){
	int now = bit;
	while (now <= MAXN){
		BIT[now]+=val;
		now += (now&(-now));
	}
}

LL query(int bil){
	int now = bil;
	LL ans = 0;
	while (now > 0){
		ans += 1LL*BIT[now];
		now -= (now&(-now));
	}
	return ans;
}

void compress(){
	int now = 1;
	for (int i = 0; i < n; i++){
		if (sudah.find(arr[i]) != sudah.end()) 
			arr[i] = sudah[arr[i]];
		else {
			sudah[arr[i]] = now;
			arr[i] = now;
			now++;
		}
	}
	maks = now-1;
}


int main(){
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	compress();
	for (int i = 0; i < n; i++){
		frek[arr[i]]++;
		brr[i] = frek[arr[i]];
	}
	memset(frek, 0, sizeof frek);
	for (int i = n-1; i >= 0; i--){
		if (i != n-1) {
			int bil = brr[i];
			ans += query(bil-1);
		}
		frek[arr[i]]++;;
		update(frek[arr[i]], 1LL);
	}
	printf("%lld\n", ans);
	return 0;
}