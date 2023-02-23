#include <iostream>

using namespace std;

int binary_search(int a[], int pos, int left, int right) {
    while(left < right) {
        int mid = (left + right) / 2;
        if(a[mid] == pos)
            return mid;
        else if(pos < a[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return (pos < a[left])? left : left + 1;
}

void binary_insertion_sort(int a[], int n) {
    for(int i = 1; i < n; i++) {
        int j = i - 1;
        int pos = a[i];
        int location = binary_search(a, pos, 0, j);
        while(j >= location) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = pos;
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    binary_insertion_sort(a, n);
    for(int x : a)
        cout << x << " ";
    return 0;
}
