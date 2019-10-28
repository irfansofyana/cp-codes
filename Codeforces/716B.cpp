#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

queue<int> antri;
int n,i,j,tanya;
string s;
int arr[30];

bool cek(queue<int> x,int ukuran){
	queue<int> xxx;
	xxx = x;
	for (int z = 0 ; z < 26 ; z++) {
		if (arr[z] > 1 ) {
		while (!xxx.empty()) {
				s[xxx.front()] = '?';
				xxx.pop();
			}
			return false;	
		}
		else if (arr[z] == 0 && x.empty()) {
			while (!xxx.empty()) {
				s[xxx.front()] = '?';
				xxx.pop();
			}
			return false;
		}
		else if (arr[z] == 0) {
			int xx = x.front();
			x.pop();
			s[xx] = char((int)z + 'A');
			ukuran--;
		}
	}
	if (ukuran == 0) return true;
	else {
		while (!xxx.empty()) {
			s[xxx.front()] = '?';
			xxx.pop();
		}
		return false;
	}
}

void print(string s){
	for (int z = 0; z < s.size(); z++) {
		if (s[z] == '?') cout << 'A';
		else cout << s[z];
	}
	cout <<'\n';
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	if (s.size() < 26) cout << -1 << '\n';
	else {
		for (i = 0 ; i < 26 ; i++) {
			if (s[i] != '?') {
				arr[s[i] - 'A']++;
			}
			else {
				antri.push(i);
				tanya++;
			}
		}
		if (cek(antri, tanya)) {
			//cout << s << '\n';
			print(s);
			return 0;
		}
		for (i = 1; i < (int)s.size() - 25 ; i++) {
			if (s[i-1] == '?') {
				antri.pop();
				tanya--;
			}
			else arr[s[i-1] - 'A']--;
			if (s[i + 25] == '?') {
				antri.push(i + 25);
				tanya++;
			}
			else arr[s[i + 25] - 'A']++;
			if (cek(antri,tanya)) {
				print(s);
				return 0;
			}
		}
		cout << -1 << '\n';
	}
	return 0;
}
