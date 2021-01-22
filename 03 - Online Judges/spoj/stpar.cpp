#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int arr[1005];
int curr;
bool ans;

int main(){
	while (scanf("%d", &n)){
		if (n == 0) return 0;
		for (i = 1 ; i <= n ; i++)
			scanf("%d", &arr[i]);
		stack<int> st;
		curr = 1; i = 1;
		ans = true;
		while (curr != n) {
			if (i>=1 && i <=n && !st.empty()){
				if (curr == arr[i]) {
					curr++;
					i++;
				}
				else if (curr == st.top()){
					curr++;
					st.pop();
				}
				else {
					st.push(arr[i]);
					i++;
				} 
			}
			else if (i >= 1 && i <= n) {
				if (curr == arr[i]) {
					curr++;
					i++;
				}
				else {
					st.push(arr[i]);
					i++;
				}
			}
			else if (i > n && !st.empty()){
				while (!st.empty()){
					if (st.top()!=curr){
						ans = false;
						break;
					}
					st.pop();
					curr++;
				}
				break;
			}
		}
		puts(ans ? "yes": "no");
	}
	return 0;
}