#include <bits/stdc++.h>
using namespace std;

double a,b,c;
double hasil;
int t;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> a >> b ;
		c = ((a/2)+sqrt(a*a-24*b))/6;
		hasil = ((b/2)-c*((a/4)-c))*c;
		cout << fixed << showpoint;
		cout << setprecision(2);
		cout << hasil << '\n';
	}
	return 0;
}