#include <bits/stdc++.h>
#define fathurwithyou            \
    ios::sync_with_stdio(false); \
    cin.tie(0);

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve() {
    int n, max;
    cin >> n >> max;
    int cnt[max + 2], data;
    memset(cnt, 0, sizeof(cnt));
    for (int i = 0; i < n; i++) {
        cin >> data;
        cnt[data]++;
    }
    int tmp = cnt[0];
    int mode = 0;
    for (int i = 1; i <= max; i++) {
        if (cnt[i] >= tmp) {
            tmp = cnt[i];
            mode = i;
        }
    }

    cout << mode;
    return;
}

int main() {
    fathurwithyou solve();
    return 0;
}
