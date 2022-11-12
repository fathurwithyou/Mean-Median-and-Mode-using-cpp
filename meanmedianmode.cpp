#include <bits/stdc++.h>
#define fathurwithyou            \
    ios::sync_with_stdio(false); \
    cin.tie(0);

typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const int MAX = 1e7;

vector<int> mode;
int cnt[MAX] = {0};
int tmp = 0, cur;

void findMode(int a) {
    cnt[a]++;
    if (cnt[a] >= tmp) {
        if (cnt[a] == tmp && cur != a) {
            mode.push_back(a);
        } else {
            mode.clear();
            mode.push_back(a);
        }
        tmp = cnt[a];
        cur = a;
    }
}

void solve() {
    int n;
    cin >> n;
    int arr[n];
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        findMode(arr[i]);
    }
    sort(arr, arr + n);
    cout << "Mean: " << sum / n;
    cout << "\nMedian: ";
    if (n % 2)
        cout << arr[n / 2];
    else
        cout << (arr[n / 2] + arr[n / 2 - 1]) / 2;
    cout << "\nMode: ";
    sort(mode.begin(), mode.end());
    for (int x : mode) cout << x << " ";
    return;
}

int main() {
    fathurwithyou solve();
    return 0;
}
