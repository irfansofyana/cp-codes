#include <bits/stdc++.h>
using namespace std;

int n, a[200005];

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n - 1; ++i){
        scanf("%d", &a[i]);
    }
    sort(a, a + n - 1);
    int j = 1;
    for (int i = 0; i < n - 1; ++i){
        if (a[i] != j){
            printf("%d\n", j);
            return 0;
        }
        ++j;
    }
    printf("%d\n", j);
    return 0;
}