#include <bits/stdc++.h>
using namespace std;


map <string, pair<float,float>> mymap;


void addkey (string word, int k) {
	if (mymap.find(word) != mymap.end()) {
		if (k == 0) mymap[word].first += 1;
		else mymap[word].second += 1;
	}
	else {
		if (k == 0) mymap[word] = make_pair(1,0);
		else mymap[word] = make_pair(0,1);
	}
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	string label;
	cin >> n >> label;
	while ((n != 0) && (label != "0")) {
		float c[2] = {0,0}; 
		int t[2] = {0,0};
		for (int i = 0; i < n-1; ++i) {
			int k;
			cin >> k;
			++c[k];
			string s, dumm;
			getline(cin, dumm);
			getline(cin,s);
			istringstream iss(s);
			string word;
			while (iss >> word) {
				addkey(word,k);
				++t[k];
			}
		}
		int d = c[0]+c[1];
		c[0] *= 1.0/d;
		c[1] *= 1.0/d;
		for (auto& x: mymap) {
			x.second.first *= 1.0/t[0];
			x.second.second *= 1.0/t[1];
		}

		string s;
		getline(cin,s);
		istringstream iss(s);
		string word;
		float cmap[2];
		cmap[0] = log10(c[0]);
		cmap[1] = log10(c[1]);
		while (iss >> word) {
			cmap[0] += log10(mymap[word].first);
			cmap[1] += log10(mymap[word].second);
		}

		cout << cmap[0] << ' ' << cmap[1] << ' ' << '\n';

		cin >> n >> label;
	} 
}