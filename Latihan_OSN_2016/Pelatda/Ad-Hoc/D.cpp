#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll tinggi[100005];
ll temp_area;
ll ans;
ll atas;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n , n > 0) {
		for (i = 0 ; i < n ; i++) cin >> tinggi[i];
		stack<ll> st;
		i = 0 ; ans = 0; atas = 0; temp_area = 0;
		while (i < n) {
			if (st.empty() || tinggi[st.top()] <= tinggi[i])
				st.push(i++);
			else {
				atas = st.top();
				st.pop();
				temp_area = tinggi[atas] * (st.empty() ? i : i-st.top()-1);
				if (ans < temp_area) ans = temp_area;
			}
		}
		while (!st.empty()){
			atas = st.top();
			st.pop();
			temp_area = tinggi[atas] * (st.empty() ? i : i-st.top()-1);
			if (ans < temp_area) ans = temp_area;
		}
		cout << ans << '\n';
	}
	return 0;
}