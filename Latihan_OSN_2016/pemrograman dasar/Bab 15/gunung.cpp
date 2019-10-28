#include <bits/stdc++.h>
using namespace std;

int n,i;

void gambar(int x){
	if (x==1) {cout << "*\n";}
	else {
		gambar(x-1);
		for (int z = 0 ; z < x; z++)
			cout << '*';
		cout << '\n';
		gambar(x-1);
	}
}

int main(){
	cin >> n;
	gambar(n);
	return 0;
}