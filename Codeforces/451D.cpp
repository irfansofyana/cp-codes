#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

string s;
ll a[2], b[2];
ll genap, ganjil, tot;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	for (int i = 0 ; i < s.size(); i++) {
		if (s[i] == 'a') {
			a[(i+1)%2]++;
		}
		else b[(i+1)%2]++;
	}
	tot = ((a[0]+a[1])*(a[0]+a[1]+1))/2; 
	tot += ((b[0]+b[1])*(b[0]+b[1]+1))/2;
	ganjil = (a[1]*(a[1]+1))/2; ganjil += (b[1]*(b[1]+1))/2;
	ganjil += (a[0]*(a[0]+1))/2; ganjil += (b[0]*(b[0]+1))/2;
	cout << tot-ganjil << " " << ganjil << '\n'; 
	return 0;
}