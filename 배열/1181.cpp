#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
using namespace std;

 
bool compare(const string& a, const string& b)
{
	if (a.length() != b.length())
	{
		return a.length() < b.length();
		
	}
	return a < b;
}
int main()
{
	int N;
	cin >> N;
	set<string> words;
	string word;
	for (int i = 0; i < N; i++)
	{
		cin >> word;
		words.insert(word);
	}
	vector<string> sortedWords(words.begin(), words.end());
	sort(sortedWords.begin(), sortedWords.end(), compare);

	for (const string& w : sortedWords)
	{
		cout << w << '\n';
	}
	
	return 0;
}