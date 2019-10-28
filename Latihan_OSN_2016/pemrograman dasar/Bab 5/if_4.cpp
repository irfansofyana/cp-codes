#include <bits/stdc++.h>
using namespace std;

int x;

int main(){
	cin >> x;
	
	if (x < 10) cout << "satuan";
	else if (x < 100) cout << "puluhan";
	else if (x < 1000) cout << "ratusan";
	else if (x < 10000) cout << "ribuan";
	else cout << "puluhribuan";
	cout << '\n';
	return 0;
}