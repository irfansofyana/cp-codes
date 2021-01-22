#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define mod 1000000
#define INF 2e9
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;

int n,i,j,a,b,temp,C;
pair<int,int> c[100005];
int t,jaw[100005];

bool comp(pair<int,int> a,pair<int,int> b){
	return a.first<b.first;
}

int main(){
	_
	cin >> t;
	for (i = 0 ; i < t ; i++) {
		cin >> n;
		c[i] = make_pair(n,i);
	}
	sort(c,c+t,comp);
	j = 0;
	a = 1; b =2;
	for (i = 3 ; i <= 10000000 ; i++) {
		if (i==c[j].first) {
			jaw[c[j].second] = a+b;
			j++;
		}
		C = a+b;
		a = b;
		b = C;
	}
	for (i = 0 ; i < t; i++) {
		cout << jaw[i] << endl;
	}
	return 0;
}
