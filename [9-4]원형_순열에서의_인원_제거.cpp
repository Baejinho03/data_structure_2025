#include <iostream>
#include <queue>

using namespace std;

int N, K;

int main() {
    queue<int> q;

    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            if (j == K) {
                cout << q.front() << " ";
                q.pop();
            }
            else {
                int a = q.front();
                q.pop();
                q.push(a);
            }
        }
    }

    return 0;
}
