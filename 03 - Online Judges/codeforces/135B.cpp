#include <bits/stdc++.h>
using namespace std;

long long a,c;
long long pangkat[30];

void isi(){
	pangkat[0] = 1;
	for (int z=1;z<=20;z++) 
		pangkat[z] = pangkat[z-1]*3;
} 
int main(){
	cin.tie(0);
	isi();
	cout << pangkat[20] << endl;
	cin >> a >> c;
}
