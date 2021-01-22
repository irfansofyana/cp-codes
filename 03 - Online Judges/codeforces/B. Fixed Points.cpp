#include <bits/stdc++.h>
using namespace std;

int n,i,A[100010];
int ans,beda;
bool ada=false;

int main() {
	cin >> n;
	for (i=0;i<n;i++) cin>>A[i];
	for (i=0;i<n;i++){
		if (A[i]==i) ans++;
		else if (A[i]!=i && !ada){
			beda++;
			if (A[A[i]]==i) {
				ada = true;
				ans+=2;
			}
		}
	}
	if (!ada && beda>=1) ans++;
	cout << ans << endl;
}
