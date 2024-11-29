#include <iostream>
using namespace std;

int main()
{
    int num;  
    int max = -1000000; 
    int min = 1000000;  
    int value;          

    cin >> num;  

    for (int i = 0; i < num; i++)
    {
        cin >> value;
        if (value > max)
            max = value;
        if (value < min)
            min = value; 
    }

 
    cout << min << " " << max << endl;

    return 0;
}
