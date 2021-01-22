#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

int a,b;
int sum;

int main(){
	OPTIMASI
	cin >> a >> b;
	sum = a+b;
	cout << min(a,b) << " "  << (sum-2*min(a,b))/2 << '\n';	
	return 0;
}