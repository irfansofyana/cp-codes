#include <bits/stdc++.h>
using namespace std;

int main(){
	int x = 10;
	int &c = x;
	c++; c*=c;
	cout << x << '\n';
	return 0;
}