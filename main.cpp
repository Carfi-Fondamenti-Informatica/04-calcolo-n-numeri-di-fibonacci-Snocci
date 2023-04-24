#include <iostream>
using namespace std;

int main() {
   int a = 1, b = 1, z = 3;
    int n, Fibonacci;
    cin >> n;
    if (n >= 2) {
        cout << "1" << endl;
        cout << "1" << endl;

        while (z <= n) {
            Fibonacci = a + b;
            cout << Fibonacci << endl;
            b = a;
            a = Fibonacci;
            z = z + 1;
        }
        cout << endl;
    } else
        cout << "Errore";

   return 0;
}
