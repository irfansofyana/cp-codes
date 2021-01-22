#include <bits/stdc++.h>
using namespace std;

int row[105];
int colom[105];

int ans[105][105];
int n, m, h;

int main(){
    scanf("%d %d %d", &n, &m, &h);
    for (int i = 0; i < m; i++)
        scanf("%d", &colom[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &row[i]);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            int tmp;
            scanf("%d", &tmp);
            if (tmp == 1){
                ans[i][j] = min(row[i], colom[j]);
            }else 
                ans[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0;j < m; j++){
            printf("%d", ans[i][j]);
            if (j == m-1) printf("\n");
            else printf(" ");
        }
    }
    return 0;
}