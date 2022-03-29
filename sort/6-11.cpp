#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
struct Student {
	string name;
	int grade;

	Student(string name, int grade) {
		this->name = name;
		this->grade = grade;
	}

    bool operator <(Student& other) {
        return this->grade < other.grade;
    }
};
vector<Student> v;

int main() {
    for (int i = 0; i < n; i++) {
        string x;
        int y;
        cin >> x >> y;
        v.push_back(Student(x, y));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        cout << v[i].name << ' ';
    }
	return 0;
}