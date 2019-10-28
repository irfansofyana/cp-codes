#include <bits/stdc++.h>
using namespace std;
int a,b;
int c,d;

int main(){
	cin.tie(0);
	cin >> a >> b;
	c = (a-1)*(a)*(2*a-1);
	d = b*(b+1)*(2*b+1);
	cout << (d-c)/6 << endl;
}