#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

string s,temp;
int n,m,i,j;
char A[10005];

int main(){
	OPTIMASI
	cin >> s;
	cin >> m;
	while (m--) {
		int a,b,c;
		cin >> a >> b >> c;
		a--; b--;
		temp = s.substr(a,b-a+1);
		for (i = 0 ; i < temp.size(); i++) {
			A[(i+c)%(int)(temp.size())] = temp[i];
		}
		j = 0;
		for (i = a; i <= b ; i++) {
			s[i] = A[j];
			j++;
		}
	}
	cout << s << '\n';
	return 0;
}