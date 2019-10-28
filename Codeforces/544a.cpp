#include <bits/stdc++.h>
using namespace std;

int k,i,udah;
string s,prev;
vector<string> vi;
bool sudah[30];

int main(){
	cin >> k;
	cin >> s;
	prev = s[0];
	i = 1;
	sudah[(int)s[0]-96] = true;
	udah = 1;
	while (i<s.size() && udah!=k) {
		if (sudah[(int)s[i]-96]) {
			prev+=s[i];
			i++;
		}
		else {
			vi.push_back(prev);
			udah++;
			if (udah==k) vi.push_back(s.substr(i,s.size()-i));
			else{
			 	prev = s[i];
			 	sudah[(int)s[i]-96] = true;
			 	i++;
			}
		}
	}
	if (udah==k && k!=1) {
		puts("YES");
		for (i=0;i<vi.size();i++) cout << vi[i] << endl;
	}
	else if (udah==k && k==1) {
		puts("YES");
		cout<<s<<endl;
	}
	else puts("NO");
	return 0;
}
