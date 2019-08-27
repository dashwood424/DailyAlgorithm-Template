#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;

	for (int i = 2; i <= 16; i++) {
		int len = s.size();
		int sum = 0;
		int index = 0;
		for (int j = 0; j < len; j++) {
			++index;
			int temp = (s[j] - '0' < 10) ? s[j] - '0' : s[j] - 'A' + 10; //16���� ���� ����
			if (temp >= i) break; //���� i�����ε� i�̻��� ���� ������ x
			sum *= i;
			sum += temp; //len�� �ڸ� ���� i�� len-1��
		}
		if (index == len && sum == n) { //s�� ������ Ž���� �� sum�� ���ϴ���
			cout << i << '\n';
			return 0;
		}
	}
	return 0;
}