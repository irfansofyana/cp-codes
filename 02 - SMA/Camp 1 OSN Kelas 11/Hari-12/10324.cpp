#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int tc,t,k,x,y;
string s;
vector<pair<int,int> > A;
bool ans;

int bs(int le,int ri,int x,int y){
	int mid = (le+ri)/2;
	if (le>ri) return -1;
	else if (A[mid].first<=x && y<=A[mid].second) return 1;
	else if (y<=A[mid].first) return bs(le,mid-1,x,y);
	else if (x>=A[mid].first) return bs(mid+1,ri,x,y);
}

int main(){
	while (cin >> s) {
			A.clear();
			i = 0;
			while (i<s.size()) {
				j = i+1;
				while (s[j]==s[i]) j++;
				A.push_back(make_pair(i,j-1));
				i = j;
			}
			cin >> n;
			for (int it = 0 ; it < n ; it++) {
				cin >> x >> y; 
				if (it==0) cout << "Case " << ++tc << ":" << endl;
				puts(bs(0,A.size()-1,min(x,y),max(x,y))==1?"Yes":"No");
			}
	}
	return 0;
}