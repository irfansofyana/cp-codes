#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int tc,t,n,i,j;
int tes[3],x;
double sum;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		sum = 0;
		for (i = 1 ; i<= 4 ; i++) {
			cin >> x;
			sum += double(x);
		}
		for (i = 0 ; i < 3 ; i++) {
			cin >> tes[i];
		}
		sort(tes,tes+3);
		sum += double(tes[1]+tes[2])/2;
		//cout << sum << endl;
		cout << "Case " << ++tc << ": ";
		if (sum>=90.0) cout << "A";
		else if (sum>=80.0) cout << "B";
		else if (sum>=70.0) cout << "C";
		else if (sum>=60.0) cout << "D";
		else cout << "F" ;
		cout << '\n';
	}
	return 0;
}