#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n;
string plans;
int x = 1, y = 1;

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };
char moveTypes[4] = { 'L', 'R', 'U', 'D' };

int main() {
	cin >> n;
	cin.ignore(); //\n때문에 plans를 입력 못받으니까 버퍼 비워주기
	getline(cin, plans); //공백문자와 함께 입력, 문자열 입력받아서 string으로 저장

	for (int i = 0; i < plans.size(); i++) {
		char plan = plans[i];

		/*int nx = -1, ny = -1;*/
		int nx = 0, ny = 0;
		/*int nx, ny;*/ //runtime error
		for (int j = 0; j < 4; j++) {
			if (plan == moveTypes[j]) {
				nx = x + dx[j];
				ny = y + dy[j];
			}
		}
		if (nx<1 || ny<1 || nx>n || ny>n) continue;
		x = nx;
		y = ny;
	}
	cout << x << ' ' << y << '\n';
	return 0;
}