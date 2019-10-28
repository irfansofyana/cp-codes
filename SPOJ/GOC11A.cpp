#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

const int N = 1000;

int t,n,i,j;
int arr[N + 5], _last, bil;
string s;

char cari(int idx, int car){
	if (car == 0) return s[idx];
	int lo = lower_bound(arr, arr + idx, car) - arr;
	if (arr[lo] == car && s[lo] >= 'a' && s[lo] <= 'z') return s[lo];
	lo--;
	return cari(lo, car%arr[lo]);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> s;
		_last = 0;
		for (i = 0 ; i < s.size(); i++) {
			if (s[i] >= 'a' && s[i] <= 'z') arr[i] = _last + 1;
			else if (s[i] >= '0' && s[i] <= '9') arr[i] = ((int)s[i] -'0')*_last;
			_last = arr[i];
		}
		cin >> n;
		while (n--) {
			cin >> bil;
			if (bil > arr[(int)s.size()-1]) cout << -1 << '\n';
			else {
				cout << cari((int)s.size()-1, bil) << '\n';
			}
		}
	}
	return 0;
}
