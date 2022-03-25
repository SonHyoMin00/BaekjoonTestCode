#include <iostream>
#include <stack>
using namespace std;

stack<int> s;

int main(void) {
    s.push(5);
    s.push(2);
    s.push(3);
    s.push(7);
    s.pop();
    s.push(1);
    s.push(4);
    s.pop();
    
    while (!s.empty()) {// 스택의 최상단 원소부터 출력
        cout << s.top() << ' ';
        s.pop();
    }
}