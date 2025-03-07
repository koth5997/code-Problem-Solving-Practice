#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Q {
private:
    vector<int> q;

public:
    void push(int x) 
    {
        q.push_back(x);
    }

    void pop() {
        if (q.empty())
        {
            cout << "-1\n"; 
        }
        else 
        {
            cout << q.front() << "\n";
            q.erase(q.begin());
        }
    }

    void size()
    {
        cout << q.size() << '\n';
    }

    void empty()
    {
        cout << (q.empty() ? 1 : 0) << "\n";
    }

    void front() 
    {
        if (q.empty()) 
        {
            cout << "-1\n";
        }
        else
        {
            cout << q.front() << '\n';
        }
    }

    void back() 
    {
        if (q.empty()) 
        {
            cout << "-1\n";
        }
        else
        {
            cout << q.back() << '\n';
        }
    }
};

int main()
{
    int N;
    cin >> N;

    Q myQueue;
    string command;

    while (N--)
    {
        cin >> command;

        if (command == "push")
        {
            int X;
            cin >> X;
            myQueue.push(X);
        }
        else if (command == "pop")
        {
            myQueue.pop();
        }
        else if (command == "size")
        {
            myQueue.size();
        }
        else if (command == "empty")
        {
            myQueue.empty();
        }
        else if (command == "front")
        {
            myQueue.front();
        }

        else if (command == "back") 
        {
            myQueue.back();
        }
    }
    return 0;
}
