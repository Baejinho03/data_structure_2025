
#include <iostream>

using namespace std;

int n;

void a(int n) {

    if (n == 0) {
        return;
    }
    
    cout << n << " ";
    a(n-1);
    cout << n << " ";

}

int main()
{
    cin >> n;

    a(n);

    return 0;
}
