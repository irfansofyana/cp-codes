#include <bits/stdc++.h>
using namespace std;

int n,i,prev;
int bil;

int main(){
	cin.tie(0);
	cin >> n;
	prev = 1;
	for (i=1;i<=n-1;i++) {
		bil = (prev+i)%n;
		bil = (bil==0?n:bil);
		if (i==n-1) cout << bil << endl;
		else cout << bil << " ";
		prev = bil; 
	}
	return 0;
}
