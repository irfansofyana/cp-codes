#include <bits/stdc++.h>
using namespace std;

string a,b;
string awal,akhir;
int i;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> b;
	for (i = 0 ; i < a.size(); i++){
		awal = a.substr(0,i);
		akhir = a.substr(i+1,(int)a.size()-(i+1));
		awal = awal+akhir;
		if (awal==b){
			puts("Tentu saja bisa!");
			return 0;
		}
	}
	puts("Wah, tidak bisa :(");
	return 0;
}