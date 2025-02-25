#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    while (b!= 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int main() {
    int A, B;
    cin >> A >> B;

    int gcd_value = gcd(A, B);
    int lcm_value = (A / gcd_value) * B; 

    cout << gcd_value << endl;
    cout << lcm_value << endl;

    return 0;
}
