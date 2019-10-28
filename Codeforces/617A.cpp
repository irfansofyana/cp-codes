#include <bits/stdc++.h>
using namespace std;

int x;
int main(){
	cin >> x;
	cout << (x%5==0?(x/5):(x/5)+1 ) << '\n';
	return 0;
}