#include <bits/stdc++.h>
using namespace std;

string s,temp,ans,t1,t2;
int n,i,j,tot;
int frek[6]; // p, q, r, s, t
int K,A,N,C,E;
vector<string> arr;

bool cek(){
	for (int z = 0 ; z < 5 ; z++) {
		if (frek[z] > 0) return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> s) {
		if (s == "0") return 0;
		memset(frek, 0 , sizeof frek);
		K = 0; A = 0; N = 0; C = 0; E = 0;
		for (i = 0 ; i < s.size(); i++) {
			if (s[i] >= 'p' && s[i] <= 't') 
				frek[(int)s[i]-'p']++;
			else {
				if (s[i] == 'K') K++;
				else if (s[i] == 'A') A++;
				else if (s[i] == 'N') N++;
				else if (s[i] == 'C') C++;
				else E++;
			}
		}
		if (!cek()) cout << "no WFF possible\n";
		else {
			i = 0;
			arr.clear();
			while (N > 0 && i < 5) {
				if (frek[i] > 0) {
					temp = "";
					temp = temp + 'N';
					temp = temp + char(i + (int)('p'));
					arr.push_back(temp);
					frek[i]--; N--;
				}
				else i++;
			}
			for (i = 0 ; i < 5 ; i++) {
				for (j = 0 ; j < frek[i]; j++) {
					temp = "";
					temp = temp + char(i + (int)('p'));
					arr.push_back(temp);
				}
			}
			//for (i = 0 ; i < arr.size(); i++) cout << arr[i] << '\n';
			queue<string> antri;
			for (i = 0 ; i < arr.size(); i++) antri.push(arr[i]);
			i = 0;
			while (!antri.empty()) {
			 	t1,t2;
				int x = 0;
				if (!antri.empty()) {
					t1 = antri.front();
					x++;
					antri.pop();
				} 
				if (!antri.empty()) {
					t2 = antri.front();
					x++;
					antri.pop();
				}
				temp = "";
				if (x == 2) {
					if (K > 0) {
						temp = temp + 'K';
						temp = temp + t1;
						temp = temp + t2;
						K--;
					}
					else if (A > 0) {
						temp = temp + 'A';
						temp = temp + t1;
						temp = temp + t2;
						A--;
					}
					else if (C > 0) {
						temp = temp + 'C';
						temp = temp + t1;
						temp = temp + t2;
						C--;
					}
					else if (E > 0) {
						temp = temp + 'E';
						temp = temp + t1;
						temp = temp + t2;
						E--;
					}
					//cout << temp << '\n';
					if (temp != "" )antri.push(temp);
					else {
						antri.push(t1); antri.push(t2);
						break;
					}
				}
				else {
					antri.push(t1);
					break;
				}
			} 
			ans = "";
			while (!antri.empty()) {
				string tt = antri.front();
				if (ans == "") ans = antri.front();
				else if (tt.size() > ans.size()) ans = tt;
				antri.pop();
			}
			cout << ans << '\n';
		}
	}
	return 0;
}
