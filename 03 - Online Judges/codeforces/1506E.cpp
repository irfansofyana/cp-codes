#include <bits/stdc++.h>
using namespace std;

int t, n;
vector<int> ansMini, ansMaks;
set<int> available;

void solve() {
    vector<int> ansMini, ansMaks;
    set<int> available;

    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        available.insert(i);
    }

    for (int i = 0; i < n; ++i) {
        int num;  cin >> num;
        int now = -1;
        if (available.find(num) != available.end()) {
            now = num;
            available.erase(num);
        }
        ansMini.push_back(now);
        ansMaks.push_back(now);
    }

    set<int>::iterator it = available.begin();
    for (int i = 0; i < n; ++i) {
        if (ansMini[i] == -1) {
            ansMini[i] = *it;
            ++it;
        }
    }

    int current = ansMaks[0];
    for (int i = 0; i < n; ++i) {
        if (ansMaks[i] == -1) {
            set<int>::iterator it = available.lower_bound(current); --it;
            int bil = *it;
            ansMaks[i] = bil;
            available.erase(bil);
        } else {
            current = ansMaks[i];
        }
    }

    for (int i = 0; i < n; ++i) {
        printf("%d", ansMini[i]);
        if (i == n-1) printf("\n");
        else printf(" ");
    }

    
    for (int i = 0; i < n; ++i) {
        printf("%d", ansMaks[i]);
        if (i == n-1) printf("\n");
        else printf(" ");
    }
}

int main(){
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}