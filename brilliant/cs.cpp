#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int sum,frek;
int ans;

int main(){
	for (i = 2016 ; i >= 1 ; i--) {
		j = i;
		while (j > 0) {
			frek++;
			ans += j%10;
			j /= 10;
		}
	}
	cout << (ans-frek)%2016 << '\n';
}