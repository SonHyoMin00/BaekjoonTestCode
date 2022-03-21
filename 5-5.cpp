#include <iostream>
using namespace std;

int factorialInterative(int n) {
	int result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

int factorialRecursive(int n) {
	if (n <= 1) return 1;
	return n * factorialRecursive(n - 1);
}

int main(void) {
	cout << "반복적으로 구현:" << factorialInterative(3) << "\n";
	cout << "재귀적으로 구현:" << factorialRecursive(3) << "\n";

}