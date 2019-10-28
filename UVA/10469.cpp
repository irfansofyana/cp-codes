#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

int a,b;

int main(){
	OPTIMASI
	while (cin >> a >> b){
		cout << (a^b) << '\n';	
	}
	return 0;
}