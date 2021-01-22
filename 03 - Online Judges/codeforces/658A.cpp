#include <bits/stdc++.h>
using namespace std;

int n,c,timee;
int skor[55];
int waktu[55];
int li,ra,i;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> c;
	for (i = 0 ; i < n ; i++) {
		cin >> skor[i];
	}
	for (i = 0 ; i < n ; i++) {
		cin >> waktu[i];
	}
	timee = 0;
	for (i = 0 ; i < n ; i++) {
		timee += waktu[i];
		li += max(0,skor[i]-c*timee);
	}
	timee = 0;
	for (i = n-1; i >= 0 ; i--) {
		timee += waktu[i];
		ra += max(0,skor[i]-c*timee);
	}
	if (li==ra) cout << "Tie";
	else cout << (li>ra?"Limak":"Radewoosh");
	cout << '\n';
	return 0;
}