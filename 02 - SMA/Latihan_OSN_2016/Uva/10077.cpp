#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pl;

ll n,m,i,j;
double nilai;
pl awal,akhir;
string s;

void binser(pl awal,pl akhir) {
	ll x,y;
	double temp;
	x = awal.first + akhir.first;
	y = awal.second + akhir.second;
	temp = (double)x/y;
	if (x==n && y==m) return ;
	else if (temp < nilai) {
		s = s + 'R';
		binser(make_pair(x,y),akhir);
	}
	else if (temp > nilai) {
		s = s + 'L';
		binser(awal,make_pair(x,y));
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n >> m){
		if (n==1 && m==1) return 0;
		nilai = (double)n/m;
		//cout << nilai << endl;
		s = "";
		binser(make_pair(0,1),make_pair(1,0));
		cout << s << '\n';
	}
	return 0;
}