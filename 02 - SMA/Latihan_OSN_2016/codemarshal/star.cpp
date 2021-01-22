#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
char a,b;
int t,tc;

void gambar(int _size,char a,char b){
	if (a=='U') {
		if (b=='R') {
			for (int z = 1 ; z <= _size; z++) {
				for (int zz = 1; zz <= z; zz++) cout << '*';
				cout << '\n';
			}
		}
		else {
			for (int z = 1 ; z <= _size; z++) {
				for (int zz = 1; zz <= _size-z; zz++) cout << ' ';
				for (int zz = 1; zz <= z; zz++) cout << '*';
				cout << '\n';
			}
		}
	}
	else {
		if (b=='R') {
			for (int z = _size; z >= 1; z--) {
				for (int zz = 1; zz <= z; zz++) cout << '*';
				cout << '\n';
			}
		}
		else {
			for (int z = 1; z <= _size; z++) {
				for (int zz = 1 ; zz <= z-1; zz++) cout << ' ';
				for (int zz = 1 ; zz <= _size-z+1; zz++) cout << '*';
				cout << '\n';
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> a >> b;
		cout << "Case " << ++tc << ":\n";
		gambar(n,a,b);
	}
	return 0;
}