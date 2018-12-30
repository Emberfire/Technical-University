#include <iostream>

struct student {
    std::string facultyNumber;
    std::string firstName;
    std::string lastName;
    std::string discipline;
    int grade;
};

int main() {
    int n;
    std::cout << "Enter number of students: ";
    std::cin >> n;

    student students[n];
    for (int i = 0; i < n; ++i) {
        student student;
        std::cout << "Enter faculty number: ";
        std::cin >> student.facultyNumber;
        std::cout << "Enter first name: ";
        std::cin >> student.firstName;
        std::cout << "Enter last name: ";
        std::cin >> student.lastName;
        std::cout << "Enter discipline: ";
        std::cin >> student.discipline;
        std::cout << "Enter grade: ";
        std::cin >> student.grade;
        students[i] = student;
    }

    for (int j = 0; j < n - 1; ++j) {
        student temp;
        if (students[j].grade > students[j + 1].grade) {
            temp = students[j];
            students[j] = students[j + 1];
            students[j + 1] = temp;
        }
    }

    for (int k = 0; k < n; ++k) {
        std::cout << "Name: " << students[k].firstName + " " + students[k].lastName << "\n"
                  << "Faculty number: " << students[k].facultyNumber << "\n"
                  << "Discipline: " << students[k].discipline << "\n"
                  << "Grade: " << students[k].grade << "\n";
    }

    int failCount;
    int excellentCount;
    for (int l = 0; l < n; ++l) {
        if (students[l].grade = 2)
    }
}