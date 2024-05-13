#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// �?nh ngh?a l?p SinhVien
class Student {
public:
    string name;
    int score;

    Student(string n, int s) : name(n), score(s) {}
};

int main() {
    // T?o danh s�ch sinh vi�n
    vector<Student> students = {
        {"Alice", 85},
        {"Bob", 70},
        {"Charlie", 95},
        {"David", 60},
        {"Eve", 80}
    };

    // M? file �? ghi danh s�ch sinh vi�n
    ofstream file("students.txt");

    // Ki?m tra xem file c� m? th�nh c�ng kh�ng
    if (!file.is_open()) {
        cout << "Kh�ng th? m? file.\n";
        return 1;
    }

    // Ghi th�ng tin c?a t?ng sinh vi�n v�o file
    for (const auto& student : students) {
        file << student.name << "," << student.score << "\n";
    }

    // ��ng file sau khi ghi xong
    file.close();

    cout << "Danh s�ch sinh vi�n �? ��?c ghi v�o file.\n";

    return 0;
}
