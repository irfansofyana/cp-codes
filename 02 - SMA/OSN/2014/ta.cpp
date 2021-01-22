#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pi;

string dummy;
int n,i,j;
pi A[500005];
int sudut,kecepatan;
double ans;

double toradian(double a){
	return (a*(acos(-1)))/180;
}

int sqr(int x){
	return x*x;
}

double jarak(int v,double sudut){
	return abs(2 * sqr(v) * sin(toradian(sudut))* cos(toradian(sudut)) * 9.8);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> dummy;
	cin >> n;
	for (i = 0; i < n; i++) {
		int x,y;
		cin >> x >> y;
		A[i] = make_pair(x,y);
	}
	cout << fixed << showpoint << setprecision(12) ;
	bool pertama = false;
		for (i = 1 ; i < (1<<n); i++){
			sudut = 0; kecepatan = 0;
			for (j = 0 ; j < n ; j++) {
				if ((i&(1<<j)) > 0) {
					sudut += A[j].second;
					kecepatan = max(kecepatan,A[j].first);
				}
			}
			if (sudut <= 1800) {
				if (!pertama) {
					pertama = true;
					ans = jarak(kecepatan,(sudut/10.0));
				}
				else if (jarak(kecepatan,(sudut/10.0)) > ans) ans = jarak(kecepatan,(sudut/10.0));
			}
		}
		cout << ans << '\n';
	return 0;
}