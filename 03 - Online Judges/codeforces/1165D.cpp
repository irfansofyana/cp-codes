#include <bits/stdc++.h>
using namespace std;

const int MAXN = 300;

typedef long long LL;
int t, n;
LL arr[MAXN+5];

int numFactor(LL bil){
	int res = 0;
	for (int i = 1; i <= (LL)sqrt(bil); i++){
		if (bil%i == 0){
			if (i != bil/i) res += 2;
			else res++;
		}
	}
	return res;
}

int main(){
	scanf("%d", &t);
	while (t--){
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			scanf("%lld", &arr[i]);
		sort(arr, arr + n);
		int i = 1; int j = n-2;
		LL bil = arr[0] * arr[n-1];
		bool flag = true;
		while (i <= j && flag){
			if (arr[i] * arr[j] != bil){
				flag = false;
			}else {
				i++;
				j--;
			}
		}
		if (flag){
			if (numFactor(bil) == n + 2) cout << bil << '\n';
			else cout << -1 << '\n';
		}else cout << -1 << '\n';
	}
}
