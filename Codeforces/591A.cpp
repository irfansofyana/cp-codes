#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

double a,b,c;

int main(){
	OPTIMASI
	cin >> a >> b >> c;
	cout << fixed << showpoint;
	cout << setprecision(15) ;
	cout << b*(a/(b+c)) << '\n';
	return 0;
}