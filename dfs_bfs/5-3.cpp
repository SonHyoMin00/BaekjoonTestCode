#include <iostream>
using namespace std;

void recursiveFunction(int i) {
    /*cout << "��� �Լ��� ȣ���մϴ�." << '\n';
    recursiveFunction();*/
    
    if (i == 100) return;
    cout << i << "��° ��� �Լ����� " << i + 1 << "��° ����Լ��� ȣ���մϴ�." << '\n';
    recursiveFunction(i + 1);
    cout << i << "��° ��� �Լ��� �����մϴ�." << '\n';
}

int main(void) {
    /*recursiveFunction();*/
    recursiveFunction(1);
}