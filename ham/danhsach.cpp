#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Ð?nh ngh?a l?p SinhVien
class Student {
public:
    string name;
    int score;

    Student(string n, int s) : name(n), score(s) {}
};

int main() {
    // T?o danh sách sinh viên
    vector<Student> students = {
        {"Alice", 85},
        {"Bob", 70},
        {"Charlie", 95},
        {"David", 60},
        {"Eve", 80}
    };

    // M? file ð? ghi danh sách sinh viên
    ofstream file("students.txt");

    // Ki?m tra xem file có m? thành công không
    if (!file.is_open()) {
        cout << "Không th? m? file.\n";
        return 1;
    }

    // Ghi thông tin c?a t?ng sinh viên vào file
    for (const auto& student : students) {
        file << student.name << "," << student.score << "\n";
    }

    // Ðóng file sau khi ghi xong
    file.close();

    cout << "Danh sách sinh viên ð? ðý?c ghi vào file.\n";

    return 0;
}
