#include <iostream>
#include <vector>
using namespace std;

int main() {
	int m;
	cin >> m;
	vector<int> a(m), b(m);
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	int n;
	cin >> n; //����� ������ Ƚ��
	for (int i = 0; i < m; i++) {
		if (a[i] < b[i]) { //�ʱⰪ�� �� ũ�� -1����� ����
			cout << -1 << '\n';
			return 0;
		}
	}

	for (int i = m - 1; i >= 0; i--) {
		int div = a[i] + 1; //i��° �ڸ����� �ִ밪
		int quot = n / div;
		int rem = n%div;
		b[i] += rem;
		if (b[i] >= div) {
			if (i != 0) {
				quot += 1;
				b[i] -= div;
			}
			else {
				b[i] = 0;
			}
		}
		n = quot;
	}
	for (int i = 0; i < m; i++) {
		cout << b[i];
	}
	cout << '\n';
	return 0;
}