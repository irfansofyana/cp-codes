#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5;

int n, arr[MAXN+5];
multiset<int> ms;

int main(){
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		ms.insert(x);
	}
	for (int i = 0; i < n; i++){
		int bil = (n - arr[i]) % n;
		auto lo = ms.lower_bound(bil);
		if (lo == ms.end()) lo = ms.begin();
		printf("%d ", (*lo + arr[i])%n);
		ms.erase(ms.find(*lo));
	}
	printf("\n");
	return 0;
}