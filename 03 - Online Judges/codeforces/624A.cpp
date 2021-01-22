#include <bits/stdc++.h>
using namespace std;

double d,l,v1,v2;
double x;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> d >> l >> v1 >> v2;
	x = (v1*(l-d))/(v1+v2);
	cout << fixed << showpoint << setprecision(7);
	cout << (x/v1) << '\n';
	return 0;
}