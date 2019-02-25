#include <iostream>
#include <cstring>
#include <fstream>

#ifndef LECTURE_3_TASKS_H
#define LECTURE_3_TASKS_H

#endif

void task1() {
    struct Student {
        std::string name;
        int age;
        double grade;
    };

    Student students[2];
    Student *student1 = &students[0];
    Student *student2 = &students[1];

    std::cout << "Enter student name:\n";
    std::cin >> (*student1).name;
    std::cout << "Enter student age:\n";
    std::cin >> (*student1).age;
    std::cout << "Enter student grade:\n";
    std::cin >> (*student1).grade;

    std::cout << "Enter student name:\n";
    std::cin >> (*student2).name;
    std::cout << "Enter student age:\n";
    std::cin >> (*student2).age;
    std::cout << "Enter student grade:\n";
    std::cin >> (*student2).grade;

    if ((*student1).grade > (*student2).grade) {
        std::cout << "The better grade is student 1\n";
    } else {
        std::cout << "The better grade is student 2\n";
    }

    Student temp = students[0];
    students[0] = students[1];
    students[1] = temp;
    std::cout << "Swapped students.\n";

    std::fstream file;
    file.open("students.txt", std::ios::out);

    if (!file) {
        std::cout << "Error, file not opened.";
    } else {
        file << (*student1).name << "\n"
             << (*student1).age << "\n"
             << (*student1).grade << "\n";

        file << (*student2).name << "\n"
             << (*student2).age << "\n"
             << (*student2).grade << "\n";
    }

    file.close();
}

void task2() {
    int rows;
    int columns;
    
    std::cout << "Enter matrix rows: ";
    std::cin >> rows;
    std::cout << "\nEnter matrix columns: ";
    std::cin >> columns;
    
    int **arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[columns];
        for (int j = 0; j < columns; j++) {
            std::cout << "\nEnter attendance for day " << j << ":";
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << arr[i][j] << "\t";
        }

        std::cout << "\n";
    }

    for (int i = 0; i < rows; i++) {
        delete [] arr[i];
    }

    delete [] arr;
}