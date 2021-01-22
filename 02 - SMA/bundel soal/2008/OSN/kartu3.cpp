#include <bits/stdc++.h>
using namespace std;
char A[100][100];
char peta[100][100];
int n,i,j,k,idx,idy,tot,awal;
bool ada;
char def;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	for (i=0;i<3*n;i++){
		for (j=0;j<6;j++){
			cin>>A[i][j];
		}
	}
	i=0;
	while (i<3*n){
		idx=0; idy=0; ada=false;
		memset(peta,0,sizeof(peta));
		awal=i;
		for (j=i;j<=awal+2;j++){
			idy=0;
			for (k=0;k<6;k++){
				if (k%2==1){
					peta[idx][idy]=A[j][k];
					idy++;
				}
			}
			idx++;
		}
		/*for (j=0;j<3;j++){
			for (k=0;k<3;k++){
				cout<<peta[j][k];
			}
			cout<<endl;
		} */
		for (j=0;j<3;j++){
			for (k=0;k<3;k++){
				if (peta[j][k]!='#'){
					tot=0;
					def=peta[j][k];
					for (int z=k;z<3;z++){                // cek horizontal
						if (peta[j][z]==def) tot++;
					}
					if (tot==3) {
						cout<<def<<endl;
						ada=true;
						break;
					}
					else{ 
						tot=0;
						for (int z=0;z<3;z++){
							if (peta[z][k]==def) tot++;
						}
						if (tot==3) {
							cout<<def<<endl;
							ada=true;
							break;
						}
						else {
							tot=0;
							if ((j==0 && (k==0 || k==2))||(j==2 && (k==0 || k==2))) {
								if (j==0 && k==0){
									for (int z=0;z<3;z++){
										if (peta[z][z]==def) tot++;
									}
									if (tot==3) {
										cout<<def<<endl;
										ada=true;
										break;
									}
								}
								else if (j==0 && k==2){
									int l=0; 
									for (int z=0;z<3;z++){
										if (peta[l][2-z]==def) tot++;
										l++;
									}
									if (tot==3) {
										cout<<def<<endl;
										ada=true;
										break;
									}
								}
								else if (j==2 && k==0){
									int l=0;
									for (int z=0;z<3;z++){
										if (peta[2-z][z]==def) tot++;
									}
									if (tot==3) {
										cout<<def<<endl;
										ada=true;
										break;
									}
								}
								else if (j==2 && k==2){
									for (int z=2;z>=0;z--){
										if (A[z][z]==def) tot++;
									}
									if (tot==3) {
										cout<<def<<endl;
										ada=true;
										break;
									}
								}
							}
						}	
					}
				}
			}
			if (ada) break;
		} 
		if (!ada) cout<<'S'<<endl;
		i+=3;
	}
}
