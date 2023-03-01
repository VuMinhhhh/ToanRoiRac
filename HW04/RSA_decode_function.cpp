#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter your modulo: ";
    cin >> n;
    int d;
    cout << "Enter key inversion: ";
    cin >> d;
    int c;
    cout << "Enter your cypher text: ";
    cin >> c;
    int res = 1;
    for(int i = 1; i <= d; i++)
        res = res * c % n;
    cout << "The decrypted message is: " << res;
    return 0;
}
