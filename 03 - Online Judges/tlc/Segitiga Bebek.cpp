#include <bits/stdc++.h>
using namespace std;
 
int n,i,j,k;
int x[1000];
int y[1000];
double ans,temp;
bool ganti = false;

int main(){
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d %d",&x[i],&y[i]);
    }
    if (n<3) printf("-1.00\n");
    else{
        ganti = false;
        for (i=0;i<n;i++){
            for (j=i+1;j<n;j++){
                for (k=j+1;k<n;k++){
                    temp = abs(double(x[i]*(y[j]-y[k])+x[j]*(y[k]-y[i])+x[k]*(y[i]-y[j])))*(0.5);
                    if (i==0 && j==1 && k==2) ans = temp;
                    else if (temp<ans && temp>0) {
                        ganti = true;
                        ans = temp;
                    }
                    else if (temp==ans) ganti = false;
                }
            }
        }
        if (!ganti && n>=4) printf("-1.00\n");
        else printf("%.2lf\n",ans);
    }
    return 0;
}