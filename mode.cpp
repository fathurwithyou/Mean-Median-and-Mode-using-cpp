#include <bits/stdc++.h>
#define fathurwithyou            \
    ios::sync_with_stdio(false); \
    cin.tie(0);

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve() {
    int n, max, tmp = 0, now;
    vector<int> mode;
    cin >> n >> max;
    int cnt[max + 2], data;
    memset(cnt, 0, sizeof(cnt));
    for (int i = 0; i < n; i++) {
        cin >> data;
        cnt[data]++;
        if (cnt[data] >= tmp) {
            if (tmp == cnt[data] && now != data) {
                mode.push_back(data);
            } else {
                mode.clear();
                mode.push_back(data);
            }
            tmp = cnt[data];
            now = data;
        }
    }
    for (int x : mode) cout << x << " ";
    return;
}

int main() {
    fathurwithyou solve();
    return 0;
}
