#include <iostream>
using namespace std;
//int n = 1260; //�մԿ��� �Ž�������� ��
//int cnt = 0;  //���� ����
//int coinTypes[4] = { 500, 100, 50, 10 }; //ū ������ ȭ����� Ȯ��
int main() {
    int n, cnt = 0, coinTypes[4] = { 500, 100, 50, 10 }; //ū ������ ȭ����� Ȯ��
    cin >> n;
    for (int i = 0; i < 4; i++) {
        int coin = coinTypes[i];
        cnt += n / coin;
        n %= coin;
    }
    cout << cnt << "\n";
}