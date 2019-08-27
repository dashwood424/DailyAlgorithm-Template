#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, d;
	cin >> n >> d;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());

	int ans = 1000000;

	for (int start = 0, end = 0; end < n;) {
		if (a[end] - a[start] <= d) {
			ans = min(ans, n - (end - start + 1));
			end++; //������ �����Ƿ� ū������ �ε��� �̵����� start~end ���� ������Ű��
		}
		else {
			start++;
		}
	}
	cout << ans << '\n';
	return 0;
}