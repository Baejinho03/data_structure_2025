#include <iostream>
#include <stack>

using namespace std;

int N;
string command[10000];
int value[10000];

int main() {
    stack<int> s;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> value[i];
            s.push(value[i]);
        }
        else if (command[i] == "pop") {
            int a = s.top();
            s.pop();
            cout << a << endl;
        }
        else if (command[i] == "size") {
            cout << s.size() << endl;
        }
        else if (command[i] == "empty") {
            cout << s.empty() << endl;
        }
        else {
            cout << s.top() << endl;
        }
    }

    return 0;
}