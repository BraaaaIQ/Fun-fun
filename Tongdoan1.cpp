#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin >> n >> q;
    int a[n];
    int b[q];
    int s = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < b[i]; j++) {
            s += a[j];
        }
        cout << s << endl;
        s = 0;
    }
}
