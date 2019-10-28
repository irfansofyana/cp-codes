#include <bits/stdc++.h>

using namespace std;

int n;
string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	int res = 0;
	while (n--) {
		cin >> s;
		if (s == "Tetrahedron") res += 4;
		else if (s == "Cube") res += 6;
		else if (s == "Octahedron") res += 8;
		else if (s == "Dodecahedron") res += 12;
		else res += 20;
	}
	cout << res << '\n';
	return 0;
}