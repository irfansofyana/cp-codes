#include <bits/stdc++.h>
using namespace std;

int n,i,j,idx,ans;
bool udah[10];
int arr[4];

int main(){
	ans = 0;
	for (i = 1000; i <= 9999; i++) {
		j = i; idx = 3;
		while (j > 0) {
			arr[idx] = j%10;
			j /= 10;
			idx--;
		}
		if (arr[0]%2 == 0 && (arr[1] >= 0 && arr[1] <= 7) && (arr[2] >= 0 && arr[2] <= 7) && arr[3]%2 == 1) {
			memset(udah, false, sizeof udah);
			bool cc = true;
			for (int z = 0 ; z < 4 ; z++) {
				if (udah[arr[z]]) {
					cc = false;
					break;
				}
				else udah[arr[z]] = true;
			}
			if (cc) ans++;
		}
	}
	cout << ans << '\n';
}
