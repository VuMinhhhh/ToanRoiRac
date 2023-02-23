#include <bits/stdc++.h>

using namespace std;

int cnt[10000001] = {0};
void Counting_sort(int a[], int n) {
	int k = -1e9;
	for(int i = 0; i < n; i++)
		k = max(k, a[i]);
	for(int i = 0; i < n; i++)
		cnt[a[i]]++;
    int z = 0;
	for(int i = 0; i <= k; i++)
		for(int j = 1; j <= cnt[i]; j++)
			a[z++] = i;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	Counting_sort(a, n);
	for(int i = 0; i < n; i++)
        cout << a[i] << " ";
	return 0;
}
