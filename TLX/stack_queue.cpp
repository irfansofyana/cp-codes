#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,i,j;
string s;
deque<int> deq;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	while (n--) {
		cin >> s;
		if (s == "push_back" || s == "push_front") {
			cin >> j;
			if (s == "push_back") deq.push_back(j);
			else deq.push_front(j);
		}
		else if (s == "pop_back") deq.pop_back();
		else deq.pop_front();
	}
	while (!deq.empty()){
		cout << deq.front() << '\n';
		deq.pop_front();
	}
	return 0;
}