#include <bits/stdc++.h>
using namespace std;

pair<long long,long long> A[105];
long long n,m,i,j;
long long x,y;
long long s1,s2;



int main(){
	A[1] = make_pair(0,1);
	A[2] = make_pair(1,0);
	A[3] = make_pair(0,1);
	A[4] = make_pair(-2,2);
	A[5] = make_pair(-1,0);
	A[6] = make_pair(3,-3);
	for (i = 7 ; i <= 100; i++) {
		A[i] = make_pair(A[i-1].first-2*A[i-2].first+A[i-3].first,A[i-1].second-2*A[i-2].second+A[i-3].second);
	}
	x = abs(A[100].second - A[99].second);
	y = abs(A[99].first - A[100].first);
	for (i = 1 ; i <= 100; i++) {
		s1 += A[i].first;
		s2 += A[i].second;
	}
	cout << (s1*x)/y + s2 << '\n';
}