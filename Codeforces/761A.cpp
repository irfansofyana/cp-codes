#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a, b;
	cin >> a >> b;
	for (int i = 1;  i <= 1000; i++) {
		for (int j = i; j <= 1000; j++) {
			if (i == 1) {
				int gen,gan;
				if (j%2 == 0) {
					gen = j/2;
					gan = j/2;
				} 
				else {
					gen = j/2;
					gan = (j+1)/2;
				}
				if (gen == a && gan == b) {
					cout << "YES\n"; return 0;
				}
			}
			else {
				int gen,gan,gen1,gan1;
				if (j%2 == 0) {
					gen = j/2;
					gan = j/2;
				} 
				else {
					gen = j/2;
					gan = (j+1)/2;
				}
				int bil = i-1;
				if (bil%2 == 0) {
					gen1 = bil/2;
					gan1 = bil/2;
				} 
				else {
					gen1 = bil/2;
					gan1 = (bil+1)/2;
				}
				if (gen-gen1 == a && gan-gan1 == b) {
					cout << "YES\n";
					return 0;
				}
			}
		}
	}
	cout << "NO\n";
	return 0;
}