#include <bits/stdc++.h>
using namespace std;

string perintah;
int n,x,y,i,j,hapus,frek;
vector<int> vi;

int main(){
	scanf("%d",&n);
	while (n--){
		cin >> perintah;
		if (perintah=="add"){
			scanf("%d %d",&x,&y);
			frek+=y;
			for (int z=0;z<y;z++) vi.push_back(x);
			printf("%d\n",frek);
		}
		else if (perintah=="del") {
			scanf("%d",&y);
			frek-=y;
			//cout<<hapus<<endl;
			printf("%d\n",vi[hapus]);
			for (int z=0;z<y;z++){
				vi[hapus] = -1;
				hapus++;
			}
		}
		else {
			reverse(vi.begin(),vi.end());
			hapus = 0;
		}
	}
}