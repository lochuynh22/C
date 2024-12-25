#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct Company {
    std::string code;
    std::string name;
    int num_students;
};

// Hàm so sánh để sắp xếp các doanh nghiệp
bool compareCompanies(const Company& a, const Company& b) {
    if (a.num_students == b.num_students) {
        return a.code < b.code;
    }
    return a.num_students > b.num_students;
}

int main() {
    int n;
    std::cout << " ";
    std::cin >> n;
    std::vector<Company> companies(n);

    // Nhập thông tin doanh nghiệp
    for (int i = 0; i < n; ++i) {
        std::cin.ignore();  // Xóa bỏ ký tự xuống dòng
        std::cout << " ";
        std::getline(std::cin, companies[i].code);
        std::cout << " ";
        std::getline(std::cin, companies[i].name);
        std::cout << " ";
        std::cin >> companies[i].num_students;
    }

    // Sắp xếp doanh nghiệp
    std::sort(companies.begin(), companies.end(), compareCompanies);

    // Xuất danh sách đã sắp xếp
    std::cout << " " << std::endl;
    for (const auto& company : companies) {
        std::cout << company.code << " " << company.name << " " << company.num_students << std::endl;
    }

    return 0;
}
