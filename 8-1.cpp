#include <iostream>
using namespace std;

long long d[100]; //메모이제이션 기법 -> 하향식

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

	// 피보나치 함수(Fibonacci Function) 반복문으로 구현(보텀업 다이나믹 프로그래밍)
	for (int i = 3; i <= n; i++) {
		d[i] = d[i - 1] + d[i - 2];
	}
	cout << d[n] << '\n';
}