#include <iostream>
using namespace std;

int main()
{
    int num[9];
    int max = 0, index = 0;
    int min;

    for (int i = 0; i < 9; i++)
    {
        cin >> num[i];
    }

    max = num[0];
    min = num[0]; 

    for (int i = 0; i < 9; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
            index = i + 1;
        }

        if (num[i] < min)
        {
            min = num[i];
        }
    }

    cout << max << '\n' << index << endl; 
    cout << min;

    return 0;
}
