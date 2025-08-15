#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin >> n >> q;
    int a[n];
    int b[q][2];
    int s = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++) {
        cin >> b[i][1] >> b[i][2];
    }
    for (int i = 0; i < q; i++) {
        for (int j = b[i][1]; j <= b[i][2]; j++) {
            s += a[j];
        }
        cout << s << endl;
        s = 0;
    }

}
