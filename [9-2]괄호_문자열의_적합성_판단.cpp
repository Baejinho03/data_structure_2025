#include <iostream>
#include <stack>
#include <string>

using namespace std;

string str;
stack<char> s;

int main() {

    cin >> str;

    for (int i = 0; i < (int)str.size(); i++) {
        if (str[i] == '(')
            s.push('(');
        else {
            if (s.empty()) {
                cout << "No";
                return 0;
            }
            s.pop();
        }
    }

    if (s.empty())
        cout << "Yes";
    else
        cout << "No";
    return 0;
}