#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int x1, y1;
int x2, y2;
int X, Y;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> x1 >> y1 >> x2 >> y2;
	cin >> X >> Y;
	int delx = x2 - x1;
	int dely = y2 - y1;
	if ((abs(delx)%X != 0) || (abs(dely)%Y != 0)) cout << "NO\n";
	else {
		delx /= X; dely /= Y;
		if (abs(delx)%2 == abs(dely)%2) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}