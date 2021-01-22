#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;
ll arr[1005];

void gene(){
	arr[1] = 5;
	for (int i = 2; i <= 1000; i++) {
		arr[i] = arr[i-1] + 4 + (i-1)*3;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	gene();
	while (cin >> n) {
		if (n == 0) return 0;
		cout << arr[n] << '\n';
	}
	return 0;
}