#include <bits/stdc++.h>
#define _ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main () {
	int x1, y1, x2, y2, ans, m, n, i;
	string S1, S2, S3;
	cin >> S1 >> S2;
	x1 = int(S1[0]-96); x2 = int(S2[0]-96); 
	y1 = int(S1[1]-48); y2 = int(S2[1]-48);
	m = x2-x1; n = y2-y1;
	ans = max(abs(m),abs(n));
	cout << ans << endl;
	if (m!=0 && n!=0) {
		if (m>0 && n>0)
			S3 = "RU";
		else if (m>0 && n<0)	
			S3 = "RD";
		else if (m<0 && n>0)	
			S3 = "LU";
		else if (m<0 && n<0)
			S3 = "LD";
		for (i=1; i<=ans-abs(abs(m)-abs(n)); i++)
			cout << S3 << endl;
		for (i=1; i<=abs(abs(m)-abs(n)); i++)
			if (abs(m)>abs(n))
				cout << S3[0] << endl;
			else
				cout << S3[1] << endl;
	}
	else if (m==0) { 
		if (n>0)
			for (i=1; i<=abs(n); i++)
				cout << "U" << endl;
		else
			for (i=1; i<=abs(n); i++)
				cout << "D" << endl;
	}
	else if (n==0) {
		if (m>0)
			for (i=1; i<=abs(m); i++)
				cout << "R" << endl;
		else
			for (i=1; i<=abs(m); i++)
				cout << "L" << endl;
	}
	return 0;
}
