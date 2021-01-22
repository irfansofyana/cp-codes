#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n;

string cari(int n){
	if (n == 0) return "0";
	else if (n == 1) return "2(0)";
	else if (n == 2) return "2";
	else {
		bool pertama = true;
		string res = "";
		for (int i = 20; i >= 0; i--) {
			if ((n&(1 << i)) > 0) {
				if (i != 1) {
					if (pertama) {
						pertama = false;
						res = res + "2(" + cari(i) + ")";
					}
					else {
						res = res + "+2(" + cari(i) + ")";
					}
				}
				else {
					if (pertama) {
						pertama = false;
						res = res + "2";
					}
					else {
						res = res + "+2";
					}
				}
			}
		}
		return res;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int arr[7]={137, 1315, 73, 136, 255, 1384, 16385};
	for (int i = 0 ; i < 7; i++) {
		cout << arr[i] << "=" << cari(arr[i]) << '\n';
	}
	return 0;
}