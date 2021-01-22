#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

typedef pair<int,int> pi;

int n,i,j,k;
string s;
pi tombol[30];

void generate(){
	for (i = 0 ; i <= 14 ; i++) {
		j = i - (i%3);
		j /= 3;
		j += 2;
		k = (i%3) + 1;
		tombol[i] = mp(j,k);
	}
	for (i = 15 ; i <= 18; i++) {
		tombol[i] = mp(7,i-14);
	}
	for (i = 19; i<= 21; i++) {
		tombol[i] = mp(8,i-18);
	}
	for (i = 22 ; i <= 25; i++) {
		tombol[i] = mp(9,i-21);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	cin >> n;
	int tc = 0;
	getline(cin,s);
	while (n--) {
		getline(cin,s);
		cout << "Case #" << ++tc << ": ";
		int curr;
		for (i = 0 ; i < s.size(); i++){
			if (s[i] == ' ') {
				if (curr == '0') cout << " ";
				cout << "0";
				curr = '0';
				continue;
			}
			if (i == 0) {
				for (j = 0 ; j < tombol[s[i]-'a'].second; j++)
					cout << tombol[s[i]-'a'].first;
				curr = tombol[s[i]-'a'].first;
			}
			else {
				if (tombol[s[i]-'a'].first == curr) cout << " ";
				curr = tombol[s[i]-'a'].first;
				for (j = 0 ; j < tombol[s[i]-'a'].second; j++)
					cout << tombol[s[i]-'a'].first;
			}
		}
		cout << '\n';
	}
	return 0;
}