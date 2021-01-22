#include <bits/stdc++.h>
using namespace std;

const int INF = (int)2e9;
struct paket{
	string perintah;
	int numb;
};

int n,i,j,bil;
priority_queue<int,vector<int>,greater<int> > pq;
string s;
vector<paket> ans;
paket smt;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> s;
		if (s == "insert") {
			cin >> bil;
			pq.push(bil);
			smt.perintah = s;
			smt.numb = bil;
			ans.push_back(smt);
		}
		else if (s == "removeMin") {
			if (!pq.empty()){
				pq.pop();
				smt.perintah = s;
				smt.numb = INF;
				ans.push_back(smt);
			}
			else {
				smt.perintah = "insert";
				smt.numb = 1;
				ans.push_back(smt);
				smt.perintah = s;
				smt.numb = INF;
				ans.push_back(smt);
			}
		}
		else if (s == "getMin") {
			cin >> bil;
			bool cek = false;
			while (!pq.empty()){
				if (bil > pq.top()) {
					smt.perintah = "removeMin";
					smt.numb = INF;
					ans.push_back(smt);
					pq.pop();
				}
				else if (bil == pq.top()) {
					cek = true;
					break;
				}
				else break;
			}
			if (!cek) {
				smt.perintah = "insert";
				smt.numb = bil;
				pq.push(bil);
				ans.push_back(smt);
			}
			smt.perintah = "getMin";
			smt.numb = bil;
			ans.push_back(smt);
		}
	}
	cout << ans.size() << '\n';
	for (i = 0 ; i < ans.size(); i++){
		cout << ans[i].perintah;
		if (ans[i].numb != INF) cout << " " << ans[i].numb;
		cout << '\n';
	}
	return 0;
}