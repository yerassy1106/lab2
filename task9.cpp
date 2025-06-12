#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "fibonacci ";
    cin >> n;

    int a = 0, b = 1;
    int count = 0;

    while (count < n) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
        count++;
    }
}
