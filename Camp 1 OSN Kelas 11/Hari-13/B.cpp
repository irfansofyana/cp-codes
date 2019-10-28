#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,ans,temp;
int x,A[10005];

int main(){
	cin.tie(0);
	while (cin >> n && n!=0) {
		ans = temp = 0;
		for (i = 1 ; i <= n ; i++) {
			cin >> x;
			temp += x;
			if (temp<=0) temp = 0;
			else ans = max(ans,temp);
		}
		if (ans==0) cout << "Losing streak." << endl;
		else cout << "The maximum winning streak is "<< ans << "." << endl;
	} 
	return 0;
}