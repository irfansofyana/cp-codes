#include <bits/stdc++.h>
using namespace std;

int arr[10], pilih[10];
int n, k;

void rec(int pos,int bef){
	if (pos > k) {
		for (int i = 1; i <= k; i++)
			cout << pilih[i] << " ";
		cout << '\n';
	}
	else {
		for (int i = bef + 1; i <= n - k + pos; i++){
			pilih[pos] = arr[i];
			rec(pos + 1, i);
		}
	}
}

int main(){
	cin >> n;
	for (int i = 1; i <= n; i++)
		arr[i] = i;
	cin >> k;
	rec(1, 0);
	return 0;
}