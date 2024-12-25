#include <iostream>
#include<string>
#include <vector>
#include <algorithm>

struct Student {
    std::string id;
    std::string name;
    std::string class_id;
    std::string email;
};

// Comparator function to sort students by class_id, and by id if class_id is the same
bool compareStudents(const Student& a, const Student& b) {
    if (a.class_id == b.class_id) {
        return a.id < b.id;
    }
    return a.class_id < b.class_id;
}

int main() {
    int n;
    std::cout << " ";
    std::cin >> n;
    std::vector<Student> students(n);

    // Input student data
    for (int i = 0; i < n; ++i) {
        std::cout << " ";
        std::cin >> students[i].id >> std::ws;
        std::getline(std::cin, students[i].name);
        std::cin >> students[i].class_id >> students[i].email;
    }

    // Sort the students
    std::sort(students.begin(), students.end(), compareStudents);

    // Output the sorted list
    std::cout << " " << std::endl;
    for (const auto& student : students) {
        std::cout << student.id << " " << student.name << " " << student.class_id << " " << student.email << std::endl;
    }

    return 0;
}
