#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, k;
	int cnt = 0;
	cin >> n >> k;
	while (true) {
		int x;
		x = (n / k) * k;
		cnt += (n-x);
		n = x;
		if (n < k) break;
		cnt++;
		n /= k;

	}
	//cout << n<<"\n"; //n=0, n=1에 도달해야 함, 너무 많이 뺐음
	cnt += (n - 1);
	cout << cnt;
}