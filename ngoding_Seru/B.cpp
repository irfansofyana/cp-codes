#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
char c;

int main(){
	cin >> n >> c >> m;
	for (i = 0; i < n ; i++) {
		for (j =0 ; j < n ; j++) {
			if (i==0||i==n-1||j==0 || j==n-1) cout << m;
			else if (n%2==1 && i==((n+1)/2)-1 && j==((n+1)/2)-1) cout << '*';
			else cout << c;
		}
		cout << '\n';
	}
	return 0;
}