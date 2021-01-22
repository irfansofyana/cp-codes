#include <bits/stdc++.h>
using namespace std;

int n,i,j,x,y;
deque<int> deq;
string s;
bool ganti = false;
int main(){
	cin >> n;
	while (n--) {
		cin >> s;
		if (s=="add") {
			cin >> x >> y;
			if (!ganti) {while (y--) {
				deq.push_back(x);
			}}
			else {
				while (y--) {
					deq.push_front(x);
				}
			}
			cout << deq.size() << endl;
		}
		else if (s=="del") {
			cin >> y;
			if (!ganti){ cout<<deq.front()<<endl;
			while (y--) {
				deq.pop_front();
			} }
			else {
				cout<<deq.back()<<endl;
				while (y--) {
					deq.pop_back();
				}
			}
		}
		else if (s=="rev") {
			ganti = (!ganti);
		}
	}
	return 0;
}	