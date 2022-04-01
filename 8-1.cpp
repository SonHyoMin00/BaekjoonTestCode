#include <iostream>
using namespace std;

long long d[100]; //�޸������̼� ��� -> �����

long long fibo(int x) {
	if (x == 1 || x == 2) {
		return 1;
	}
	if (d[x] != 0) {
		return d[x];
	}
	d[x] = fibo(x - 1) + fibo(x - 2); 
	return d[x];
}

int main(void) {
	//cout << fibo(4) << '\n';

	d[1] = 1;
	d[2] = 1;
	int n = 50;

	// �Ǻ���ġ �Լ�(Fibonacci Function) �ݺ������� ����(���Ҿ� ���̳��� ���α׷���)
	for (int i = 3; i <= n; i++) {
		d[i] = d[i - 1] + d[i - 2];
	}
	cout << d[n] << '\n';
}