#include <bits/stdc++.h>
using namespace std;

int main(){
	multiset<int> s;
	s.insert(1); s.insert(100); s.insert(1);
	
	for (auto a : s){
		cout << a << " ";
	}cout << '\n';

	s.erase(s.find(1));
	for (auto a : s){
		cout << a << " ";
	}cout << '\n';
	return 0;
}