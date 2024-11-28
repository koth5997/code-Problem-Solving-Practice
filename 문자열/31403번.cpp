#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a, b, c;

	cin >> a;
	cin >> b;
	cin >> c;

	
	cout << a + b - c<<endl;
	
	
	string strA = to_string(a);
	string strB = to_string(b);
	string strC = to_string(c);

	int stringResult = stoi(strA + strB) - stoi(strC);
	cout << stringResult << endl;
	return 0;
	
}