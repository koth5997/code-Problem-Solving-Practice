#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    int apt[15][15] = { 0 };

    for (int i = 1; i <= 14; i++) {
        apt[0][i] = i;
    }

  
    for (int k = 1; k <= 14; k++) {
        for (int n = 1; n <= 14; n++) {
            for (int i = 1; i <= n; i++) {
                apt[k][n] += apt[k - 1][i];
            }
        }
    }

    
    while (T--) {
        int k, n;
        cin >> k >> n;
        cout << apt[k][n] << '\n';
    }

    return 0;
}
