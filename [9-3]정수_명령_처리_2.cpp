#include <iostream>
#include <string>
#include <queue>

using namespace std;

int N;
string command[10000];
int A[10000];

int main() {
    queue<int> q;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> A[i];
            q.push(A[i]);
        }
        else if (command[i] == "pop") {
            int a = q.front();
            q.pop();
            cout << a << endl;
        }
        else if (command[i] == "size") {
            cout << q.size() << endl;
        }
        else if (command[i] == "empty") {
            cout << q.empty() << endl;
        }
        else {
            cout << q.front() << endl;
        }

    }

    return 0;
}