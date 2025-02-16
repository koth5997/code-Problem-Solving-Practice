#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    string alph = "abcdefghijklmnopqrstuvwxyz"; 
    cin >> s;

    for (int i = 0; i < alph.length(); i++) {
        size_t pos = s.find(alph[i]);
        if (pos == string::npos) {
            cout << "-1 ";
        }
        else {
            cout << pos << " ";
        }
    }
    return 0;
}
