#include <bits/stdc++.h>
using namespace std;

int A[1005];
queue<int> ite,temp;
int n,i,j,ans;
int bil;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	sort(A,A+n);
	for (i = 0 ; i < n ; i++) 
		ite.push(A[i]);
	while(!ite.empty()){
		bil = ite.front();
		ite.pop();
		while (!ite.empty()){
			if (ite.front()==bil) {
				temp.push(ite.front());
				ite.pop();
			}
			else {
				bil = ite.front();
				ans++;
				ite.pop();
			}
		}
		while (!temp.empty()){
			ite.push(temp.front());
			temp.pop();
		}
	}
	cout << ans << '\n';
	return 0;
}