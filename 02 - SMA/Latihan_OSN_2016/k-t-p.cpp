#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

typedef long long ll;

ll n,m,i,j,k,l,x,y;
ll B[15];
ll A[15],sum,jum;
ll smt[15];
ll ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> B[i]; 
		sum += B[i];
	}
	sum /= 5;	//jumlah array A
	for (i = 0 ; i < n ; i++) {
		smt[i] = B[(i+1)%n]-B[i];
	}
//	for (i = 0 ; i < n ; i++) cout << smt[i] << '\n';
	j = 0;
	for (i = n-1; i >= 1 ; i--) {
		jum += i*smt[j];
		j = (j+5)%n;
	}
	A[0] = (sum-jum)/n;
	j = 0;
	for (i = 1 ; i < n ; i++) {
		A[(j+5)%n] = A[j]+smt[j];
		j = (j+5)%n;
	}
//	for (i = 0 ; i < n ; i++) cout << A[i] << '\n';
	ans = -1;
	for (i = 0 ; i < n-4 ; i++) {
		for (j = i+1 ; j < n-3 ; j++) {
			for (k = j+1; k < n-2 ; k++) {
				for (l = k+1; l < n-1 ; l++) {
					for (x = l+1; x < n; x++) {
						if (ans==-1) ans = A[i]+A[j]+A[k]+A[l]+A[x];
						else if (A[i]+A[j]+A[k]+A[l]+A[x] < ans) ans = A[i]+A[j]+A[k]+A[l]+A[x];
					}
				}
			}
		}
	}
	for (i = 0 ; i < n-4 ; i++) {
		for (j = i+1 ; j < n-3 ; j++) {
			for (k = j+1; k < n-2 ; k++) {
				for (l = k+1; l < n-1 ; l++) {
					for (x = l+1; x < n; x++) {
						if (A[i]+A[j]+A[k]+A[l]+A[x]==ans) {
							cout << i << " " << j << " " << k << " " << l << " " << x << '\n';
							return 0;
						}
					}
				}
			}
		}
	}
	return 0;
}