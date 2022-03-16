#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string night;
int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
int result=0;

int main() {
	cin >> night;
	
	int row = night[1] - '0';
	int column = night[0] - 'a' + 1;

	for (int i = 0; i < 8; i++) {
		int nrow = row + dx[i];
		int ncolumn = row + dy[i];

		if (nrow < 1 || ncolumn < 1 || nrow>8 || ncolumn>8) continue;
		result += 1;
	}
	cout << result;
	return 0;
}