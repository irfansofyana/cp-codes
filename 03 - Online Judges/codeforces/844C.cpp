#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100005;

int asli[MAXN], urut[MAXN];
int N;
map<int,int> pos;
bool visit[MAXN];
vector<vector<int> > ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 0 ; i < N; i++){
		cin >> asli[i];
		urut[i] = asli[i];
		pos[asli[i]] = i;
	}
	sort(urut, urut + N);
	for (int i = 0; i < N; i++) {
		if (visit[i]) continue;
		vector<int> tmp;
		tmp.push_back(i);
		visit[i] = true;
		int now = i;
		while (1) {
			int posisi = pos[i];
			if (visit[posisi]) break;
			tmp.push_back(posisi);
			visit[posisi] = true;
			i = urut[posisi];
		}
		for (int j = 0 ; j < tmp.size(); j++) {
			cout << tmp[j] << " ";
	}
	return 0;
}