#include <bits/stdc++.h>
using namespace std;

int n,i,j;
deque <int> deq;
string s;

int main(){
	cin >> n;
	while (n--) {
		cin >> s;
		if (s=="push_back") {
			int temp;
			cin >> temp;
			deq.push_back(temp);
		}
		else if (s=="push_front") {
			int temp;
			cin >> temp;
			deq.push_front(temp);
		}
		else if (s=="pop_back") deq.pop_back();
		else if (s=="pop_front") deq.pop_front();
	}
	while (!deq.empty()){
		cout << deq.front() << endl;
		deq.pop_front();
	}
}