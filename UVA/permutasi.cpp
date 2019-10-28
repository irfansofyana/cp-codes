#include <bits/stdc++.h>
#define ALL(v) v.begin(),v.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
using namespace std;
char c[100];
vector<string> vi;
int n,i,j;
string s,temp;

int main(){
	cin.tie(0);
	cin >> n;
	while (n--) {
		cin >> s;
		vi.clear();
		memset(c,0,sizeof c);
		for (i=0;i<s.size();i++)
			c[i] = s[i];
		do {
			temp="";
			for (i=0;i<s.size();i++)
				temp = temp+c[i];
			vi.push_back(temp);
		} while (next_permutation(c,c+s.size()));
		sort(ALL(vi));
		//UNIQUE(vi);
		for (i=0;i<vi.size();i++) cout<<vi[i]<<endl;
	}
}

