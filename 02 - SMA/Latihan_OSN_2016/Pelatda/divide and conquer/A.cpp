#include <bits/stdc++.h>
using namespace std;

int n,i,j,dummy;
int arr[1005];
vector<int> ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++)
		cin >> arr[i];
	sort(arr,arr+n);
	i = 0; j = n-1;
	while (i <= j){
		if (i==j) {
			ans.push_back(arr[i]);
			i++;
			j--;
		}
		else {
			ans.push_back(arr[i]);
			ans.push_back(arr[j]);
			i++;
			j--;
		}
	}
	for (i = 1 ; i < ans.size(); i++){
		if (i%2==1) {
			if (ans[i] < ans[i-1]) break;
		}
		else {
			if (ans[i] > ans[i-1]) break;
		}
	}
	if (i!=(int)ans.size()) cout << "Impossible\n";
	else {
		for (i = 0 ; i < ans.size(); i++){
			cout << ans[i];
			cout << (i==(int)ans.size()-1 ? '\n':' ');
		}
	}	
	return 0;
}