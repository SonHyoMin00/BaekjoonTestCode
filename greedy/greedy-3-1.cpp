#include <iostream>
using namespace std;
//int n = 1260; //손님에게 거슬러줘야할 돈
//int cnt = 0;  //동전 개수
//int coinTypes[4] = { 500, 100, 50, 10 }; //큰 단위의 화폐부터 확인
int main() {
    int n, cnt = 0, coinTypes[4] = { 500, 100, 50, 10 }; //큰 단위의 화폐부터 확인
    cin >> n;
    for (int i = 0; i < 4; i++) {
        int coin = coinTypes[i];
        cnt += n / coin;
        n %= coin;
    }
    cout << cnt << "\n";
}