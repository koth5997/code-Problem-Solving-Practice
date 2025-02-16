#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int a, b, c;

    while (true) {
        cin >> a >> b >> c;

       
        if (a == 0 && b == 0 && c == 0)
            break;

     
        int ben = max({ a, b, c });
        int side1, side2;

       
        if (ben == a) { side1 = b; side2 = c; }
        else if (ben == b) { side1 = a; side2 = c; }
        else { side1 = a; side2 = b; }

    
        if (ben * ben == side1 * side1 + side2 * side2)
            cout << "right"<<"\n";
        else
            cout << "wrong"<<"\n";
    }

    return 0;
}
