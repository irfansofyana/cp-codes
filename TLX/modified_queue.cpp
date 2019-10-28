#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int banyak;
bool depan;
deque<int> deq;
string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	depan = true;
	while (n--) {
		cin >> s;
		if (s == "add") {
			cin >> i >> j;
			for (int z = 0 ; z < j ; z++) {
				if (depan) deq.push_back(i);
				else deq.push_front(i);
			}
			banyak += j;
			cout << banyak << '\n';
		}
		else if (s == "del") {
			cin >> i;
			banyak -= i;
			for (int z =0 ; z < i ; z++) {
				if (z == 0 && depan) cout << deq.front() << '\n';
				else if (z == 0) cout << deq.back() << '\n';
				if (depan) deq.pop_front();
				else deq.pop_back();
			}
		}
		else if (s == "rev") depan = !depan;
	}
	return 0;
}