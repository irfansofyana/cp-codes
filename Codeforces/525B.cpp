#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int m, t;
string s;
int arr[200005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s >> t;
	for (int i = 0 ; i < t; i++) {
		cin >> m;
		m--;
		arr[m]++;
		int tmp = (int)s.size();
		arr[tmp/2]--;
	}
	int tot = 0;
	if ((int)s.size()%2 == 0) {
		string belakang = "";
		for (int i = 0 ; i < (int)s.size()/2; i++) {
			tot += arr[i];
			//cout << i << " " << tot << '\n';
			if (tot%2 == 0) {
				cout << s[i];
				belakang = s[(int)s.size()-i-1] + belakang;
			}
			else {
				cout << s[(int)s.size()-i-1];
				belakang = s[i] + belakang;
			}	
		}
		cout << belakang << '\n';
	}
	else {
		string belakang = "";
		for (int i = 0 ; i <= (int)s.size()/2; i++) {
			tot += arr[i];
			if (tot%2 == 0) {
				cout << s[i];
				if (i!= (int)s.size()/2) belakang = s[(int)s.size()-i-1] + belakang;
			}
			else {
				cout << s[(int)s.size()-i-1];
				if (i!= (int)s.size()/2) belakang = s[i] + belakang;
			}	
		}
		cout << belakang << '\n';
	}
	return 0;
}