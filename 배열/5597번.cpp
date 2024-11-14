#include <iostream>

using namespace std;

int main() {

    int std[31] = { 0, };
    int num;

    for (int i = 0; i < 28; i++) {
        cin >> num;
        std[num] = 1;
    }

    for (int i = 1; i <= 30; i++)
    {
        if (!std[i])
        {
            cout << i << endl;
        }
    }

    return 0;
}