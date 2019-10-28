#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

const int N = (int)1e6;

int n,m,i,j;
int arr[N + 5];
int x,l,r,batas, sum;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m >> batas;
	while (n--) {
		cin >> l >> r;
		arr[l]++;
		arr[r+1]-=1;
	}
	for (i = 0 ; i <= batas; i++) {
		sum += arr[i];
		arr[i] = sum;
	}
	while (m--) {
		 cin >> x;
		 cout << arr[x] << '\n';
	}
	return 0;
}
