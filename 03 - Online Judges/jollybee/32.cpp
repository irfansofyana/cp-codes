#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;
ll biaya,t,n,m,i,j,temp;
string s;
vector<ll> A;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n >> m;
		cin >> s;
		i = 0 ; biaya = 0;
		A.clear();
		while (i<s.size()) {
			if (s[i]=='.') i++;
			else {
				temp = 1;
				j = i+1;
				while (j < s.size() && s[j]=='X') {
					temp++; j++;
				}
				A.push_back(temp);
				i = j;
			}
		}
		sort(A.begin(),A.end());
		for (i = 0 ; i < A.size(); i++) {
			biaya += m*A[i];
			m--;
		}
		cout << biaya << '\n';
	}
	return 0;
}