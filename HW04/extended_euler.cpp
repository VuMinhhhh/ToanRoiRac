#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cout << "Enter a and b (a < b): ";
    cin >> a >> b;
    if(__gcd(a, b) != 1) {
        cout << "No inversion of a modulo b";
        return 0;
    }
    else {
        vector<int> r; r.push_back(b); r.push_back(a);
        vector<int> q;
        vector<int> x; x.push_back(0); x.push_back(1);
        int i = 1;
        while(r[i] != 1) {
            int m = r[i - 1] % r[i]; r.push_back(m);
            int n = r[i - 1] / r[i]; q.push_back(n);
            int p = x[i - 1] - x[i] * q[i - 1]; x.push_back(p);
            i++;
        }
        cout << "Inversion of a modulo b is " << x[i];
        return 0;
    }
}
