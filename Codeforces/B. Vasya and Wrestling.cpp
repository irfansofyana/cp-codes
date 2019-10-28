/*
	CODEFORCES PROBLEM : B. Vasya and Wrestling
	AUTHOR : IRFAN SOFYANA PUTRA (cokguzel48)
*/

#include <bits/stdc++.h>
using namespace std;

long long n,i,j;
long long A[200005];
long long pa,pb;
vector<long long> la,lb;
int akhir;

int main(){
	cin.tie(0);
	cin >> n;
	for (i=0;i<n;i++) {
		cin >> A[i];
		if (A[i]>0) {
			pa+=A[i];
			la.push_back(A[i]);
		}
		else if (A[i]<0) {
			pb+=(-1*A[i]);
			lb.push_back(A[i]);
		}
		if (i==n-1 && A[i]>0)  akhir = 1;
		else if (i==n-1 && A[i]<0) akhir = 2;
	}
	if (pa!=pb) {
		cout << (pa>pb?"first":"second") << endl;
	}
	else {
		if (la.size()==lb.size()) {
			for (i=0;i<la.size();i++) {
				if (abs(la[i])!=abs(lb[i])) {
					cout << (abs(la[i])>abs(lb[i])?"first":"second") << endl;
					break;
				}
			}
			if (i==la.size()) {
				cout << (akhir==1?"first":"second") << endl;
			}
		}
		else {
			if (la.size()>lb.size()) {
				for (i=0;i<lb.size();i++) {
					if (abs(la[i])!=abs(lb[i])) {
						if (abs(la[i])>abs(lb[i])) puts("first");
						else puts("second");
						break;
					}
				}
				if (i==lb.size()) puts("first");
			}
			else {
				for (i=0;i<la.size();i++) {
					if (abs(la[i])!=abs(lb[i])) {
						if (abs(la[i])>abs(lb[i])) puts("first");
						else puts("second");
						break;
					}
				}
				if (i==la.size()) puts("second");
			}
		}
	}
	return 0;
}
