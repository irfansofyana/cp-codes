#include <bits/stdc++.h>
using namespace std;

int main(){
	int ans = 0;
	for (int i = 100 ; i<= 999 ; i++) {
		int temp = i;
		int sum = 0;
		while (temp>0) {
			sum += (temp%10)*(temp%10);
			temp/=10;
		}
		if (i==sum+543) ans += i;
	}
	cout << ans << endl;
}