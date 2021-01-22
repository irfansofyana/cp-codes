#include <bits/stdc++.h>
using namespace std;

int n,i,j;
string deret,s1,s2,rev="";
int pos1[100005],pos2[100005];
int ukuran1,ukuran2,prev;
bool a=false,b=false;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> deret >> s1 >> s2;
	for (i=deret.size()-1;i>=0;i--) rev = rev+deret[i];
	j =  0;
	prev = 0;
	while (deret.find(s1,prev)>=0 && deret.find(s1,prev)<deret.size()) {
		pos1[j] = deret.find(s1,prev);
		prev = deret.find(s1,prev)+s1.size();
		j++;
	}
	ukuran1 = j;
	j =0;
	prev = 0;
	while (deret.find(s2,prev)>=0 && deret.find(s2,prev)<deret.size()) {
		pos2[j] = deret.find(s2,prev);
		prev = deret.find(s2,prev)+s2.size();
		j++;
	}
	ukuran2 = j;
	for (i=0;i<ukuran1;i++) {
		for (j=0;j<ukuran2;j++) {
			if (pos1[i]<pos2[j]) {
				if (z==0) a = true;
				else b = true;
				break;
			}
		}
			if (z==0 && a) break;
			else if (b) break;
	}
	if (a&&b) puts("both");
	else if (a) puts("forward");
	else if (b) puts("backward");
	else puts("fantasy");
	return 0;
}
