#include <bits/stdc++.h>
using namespace std;

int n,i,j;
string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	cin >> n;
	i = n;
	while (n--) {
		cout << "Anak ayam turunlah " << i << '\n';
		if (i>1) cout << "Mati satu tinggallah " << i-1 << '\n';
		else cout << "Mati satu tinggallah induknya\n";
		i--;
	}
	return 0;
}