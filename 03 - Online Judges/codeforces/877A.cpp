#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

string s;
string nama[5] = {"Danil","Olya","Slava","Ann","Nikita"};

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	int t = 0;
	for (int i = 0 ; i < 5; i++) {
		int cek = 0;
		int j = s.find(nama[i],0);
		while (j >= 0 && j < s.size()) {
			cek++;
			j = s.find(nama[i], j + 1);
		}
		//cout << cek << '\n';
		if (cek == 1) {
			t++;
		}
		else if (cek > 1){
			puts("NO");
			return 0;
		}
		if (t > 1) {
			puts("NO");
			return 0;
		}
	}
	if (t == 1) puts("YES");
	else puts("NO");
	return 0;
}