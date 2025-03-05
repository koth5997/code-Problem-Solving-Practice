#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Stack
{
private:
    vector<int> stack;

public:
    void push(int x)
    {
        stack.push_back(x);
    }

    void pop()
    {
        if (stack.empty())
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << stack.back() << '\n';
            stack.pop_back();
        }
    }

    void size()
    {
        cout << stack.size() << '\n';
    }

    void empty()
    {
        cout << (stack.empty() ? 1 : 0) << '\n';
    }

    void top()
    {
        if (stack.empty())
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << stack.back() << '\n';
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    Stack s;

    for (int i = 0; i < N; i++)
    {
        string command;
        cin >> command;

        if (command == "push")
        {
            int x;
            cin >> x;
            s.push(x);
        }
        else if (command == "pop")
        {
            s.pop();
        }
        else if (command == "size")
        {
            s.size();
        }
        else if (command == "empty")
        {
            s.empty();
        }
        else if (command == "top")
        {
            s.top();
        }
    }

    return 0;  
}
