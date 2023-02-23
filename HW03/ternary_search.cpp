#include <iostream>

using namespace std;

int ternary_search(int a[], int x, int left, int right) {
    while(left <= right) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;
        if(a[mid1] == x)
            return mid1;
        if(a[mid2] == x)
            return mid2;
        if(x < a[mid1])
            right = mid1 - 1;
        else if(x > a[mid2])
            left = mid2 + 1;
        else {
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }
}

int main() {
    int n, x;
    cin >> n >> x;
    int count[] = {0};
    cout << count[10];
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << ternary_search(a, x, 0, n - 1);
    return 0;
}

