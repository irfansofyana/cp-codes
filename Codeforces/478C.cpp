#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;

ll arr[3];
ll tmp,n,i,j,pasti,smt;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr,arr+3);
	
	if (arr[2] >= 2*arr[0] + 2*arr[1]) {
		cout << arr[0] + arr[1] << '\n';
		return 0;
	}
	tmp = arr[0] + arr[1];
	
	if (arr[2] < tmp) {
		pasti = tmp - arr[2];
		smt = arr[2] - pasti;
		//cout << smt << '\n';
		cout << pasti + (2*smt)/3 << '\n';
		return 0;
	}
	
	pasti = arr[2]%tmp;
	smt = tmp-pasti;
	//cout << smt << '\n';
	cout << pasti + (2*smt)/3 << '\n';
	return 0;
}
