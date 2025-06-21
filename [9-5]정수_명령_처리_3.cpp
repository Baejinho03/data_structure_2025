#include <iostream>
#include <string>
#include <deque>

using namespace std;

int N;
string cmd[10000];
int num[10000];

int main() {
    deque<int> dq;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> cmd[i];
        if (cmd[i] == "push_front" || cmd[i] == "push_back") {
            cin >> num[i];
            if (cmd[i] == "push_front") {
                dq.push_front(num[i]);
            }
            else {
                dq.push_back(num[i]);
            }
        }
        else if (cmd[i] == "pop_front") {
            int a = dq.front();
            dq.pop_front();
            cout << a << endl;
        }
        else if (cmd[i] == "pop_back") {
            int b = dq.back();
            dq.pop_back();
            cout << b << endl;
        }
        else if (cmd[i] == "size") {
            cout << dq.size() << endl;
        }
        else if (cmd[i] == "empty") {
            cout << dq.empty() << endl;
        }
        else if (cmd[i] == "front") {
            cout << dq.front() << endl;
        }
        else {
            cout << dq.back() << endl;
        }
    }

    return 0;
}