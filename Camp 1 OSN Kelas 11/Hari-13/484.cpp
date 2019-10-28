#include <bits/stdc++.h>
using namespace std;

map<int,int> mep;
map<int,bool> udah;
queue<int> q;
int n,i,j;

int main(){
	while (cin >> n) {
		q.push(n);
		mep[n]++;
		udah[n] = false;
	}
	while (!q.empty()) {
		if (!udah[q.front()]) {
			cout << q.front() << " " << mep[q.front()] << endl;
			udah[q.front()] = true;
		}
		q.pop();
	}
	return 0;
}