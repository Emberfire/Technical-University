//Problem 1: create a program with a function main() and a choice between functions via menu:
//  1.      Entering a number of students(their information) in a matrix(array in array) with
//      a maximum of 25 students. Information contains their faculty numbers, speciality,
//      speciality code(52 for E, 61 for AUIT), group (1, 2, 3 or 4) and average grade for
//      the semester. Everything must be done with validation checks.
//  2.      Rewriting the initial matrix in 2 new arrays for the two specialities and
//      printing the two arrays on the console.
//  3.      Search of a specific student by faculty number, or display that there is no
//      information for said student in the database.
//  4.      Printing on the console of every student with a grade "Excellent" in the groups
//      or printing that there are no excellents in a group.

#include <iostream>
#include <vector>
#include <iomanip>

//Declaring class and functions so main function is top-most
class Student;

void addStudent();

void splitMatrix();

void searchStudent();

void searchStudentByGrade();

//Declaring the matrix of vectors. Defining size because of the inner vector not generating and throwing segmentation faults
std::vector<std::vector<Student>> students(5);

int main() {
    //Structuring menu with commands
    int command;
    std::cout << "Please select a command from the menu and write its number:\n"
              << "\t1. Add student\n"
              << "\t2. Split matrix by speciality and print to console\n"
              << "\t3. Search a student by faculty number\n"
              << "\t4. Search all students with 5.50 grade or above\n"
              << "\t5. End the program\n";

    std::cin >> command;

    while (command != 5) {
        switch (command) {
            case 1:
                addStudent();
                break;
            case 2:
                splitMatrix();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                searchStudentByGrade();
                break;
            default:
                std::cout << "Error, invalid command.";
        }

        std::cout << "Please select a new command:";
        std::cin >> command;
    }
}
//Algorithm of the actual Student class, with proper encapsulation
class Student {
private:
    int facultyNumber;
    std::string speciality;
    int group;
    double averageGrade;

    //Constructor setting the initial values of the student
public:
    Student(int facultyNumber, int speciality, int group, double averageGrade) {
        this->setFacultyNumber(facultyNumber);
        this->setSpeciality(speciality);
        this->setGroup(group);
        this->setAverageGrade(averageGrade);
    }

public:
    int getFacultyNumber() {
        return this->facultyNumber;
    }

private:
    void setFacultyNumber(int facultyNumber) {
        this->facultyNumber = facultyNumber;
    }

public:
    std::string getSpeciality() {
        return this->speciality;
    }

    //Determining the speciality based on the input speciality code
private:
    void setSpeciality(int speciality) {
        if (speciality == 52) {
            this->speciality = "E";
        } else {
            this->speciality = "AUIT";
        }
    }

public:
    int getGroup() {
        return this->group;
    }

private:
    void setGroup(int group) {
        this->group = group;
    }

public:
    double getAverageGrade() {
        return this->averageGrade;
    }

private:
    void setAverageGrade(double averageGrade) {
        this->averageGrade = averageGrade;
    }
};

//Algorithm of the object-adding function
void addStudent() {
    //Checking if the matrix is already full
    if (students[students.size() - 1].size() == 5) {
        std::cout << "\tMatrix is full! Cannot add more students.\n";
        return;
    }

    //Accepting faculty number from the console
    int facultyNumber;
    std::cout << "\tEnter faculty number:";
    std::cin >> facultyNumber;
    bool alreadyExists = false;
    for (auto &studentRow : students) {
        for (auto &student : studentRow) {
            if (student.getFacultyNumber() == facultyNumber) {
                alreadyExists = true;
            }
        }
    }

    //Checking if there's already an entry with the same faculty number in the matrix
    if (alreadyExists) {
        std::cout << "\tStudent already exists.\n";
        return;
    }

    //Accepting the speciality code from the console and checking if it is valid
    int specialityCode;
    std::cout << "\tEnter speciality (52 for E or 61 for AUIT):";
    std::cin >> specialityCode;
    while (specialityCode != 52 && specialityCode != 61) {
        std::cout << "\tSpeciality is invalid. Please enter speciality (52 for E or 61 for AUIT):";
        std::cin >> specialityCode;
    }

    //Accepting the student's group from the console and checking if it is valid
    int group;
    std::cout << "\tEnter faculty group from 1 to 4: ";
    std::cin >> group;
    while (group < 1 || group > 4) {
        std::cout << "\tGroup is invalid. Please enter a group between 1 and 4:";
        std::cin >> group;
    }

    //Accepting the average grade the student has and chekcing if it is between 2 and 6
    double averageGrade;
    std::cout << "\tEnter average grade from 2 to 6:";
    std::cin >> averageGrade;
    while (averageGrade < 2 || averageGrade > 6) {
        std::cout << "\tAverage grade is invalid. Please enter a grade from 2 to 6:";
        std::cin >> averageGrade;
    }

    //Instancing the student as an object
    Student student(facultyNumber, specialityCode, group, averageGrade);

    //Storing the student in the matrix (whilst checking of the current row is full)
    for (int i = 0; i < 5; ++i) {
        if (students[i].size() != 5) {
            students[i].push_back(student);
            break;
        }
    }

    std::cout << "\tData entered successfully.\n";
}

//Algorithm of the function used to split the matrix in two vectors based on the specialities of the students and displaying the two on the console
void splitMatrix() {
    std::vector<Student> studentsFromE;
    std::vector<Student> studentsFromAUIT;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    //Filling the two vectors by iterating through the matrix. Using the new "foreach" cycle introduced with C++ v11
    for (auto &studentRow : students) {
        for (auto &student : studentRow) {
            if (student.getSpeciality() == "E") {
                studentsFromE.push_back(student);
            } else {
                studentsFromAUIT.push_back(student);
            }
        }
    }

    //Forming the console output so that the two vectors are displayed vertically next to each other and appear as a table (tried to maintain proper styling)
    std::cout << "\tStudents from speciality E:" << std::string(16, ' ') << "Students from speciality AUIT:\n\n";
    std::cout << "\t F. Number    Group     Grade               F. Number    Group     Grade\n";
    for (int i = 0; i <= __max(studentsFromE.size(), studentsFromAUIT.size()); ++i) {
        if (i < studentsFromE.size()) {
            std::cout << "\t| "
                      << studentsFromE[i].getFacultyNumber()
                      << " |    "
                      << studentsFromE[i].getGroup()
                      << "    |   "
                      << studentsFromE[i].getAverageGrade()
                      << "   |";
        } else {
            //if the first vector is empty, blank spaces are put instead of it, using the string repeating function
            std::cout << std::string(41, ' ');
        }

        if (i < studentsFromAUIT.size()) {
            std::cout << "          | "
                      << studentsFromAUIT[i].getFacultyNumber()
                      << " |    "
                      << studentsFromAUIT[i].getGroup()
                      << "    |   "
                      << studentsFromAUIT[i].getAverageGrade()
                      << "   |";
        }

        std::cout << "\n";
    }
}

//Searching a student by faculty number in the matrix and displaying the information about him
void searchStudent() {
    int facultyNumber;

    std::cout << "\tPlease enter the student's faculty number:";
    std::cin >> facultyNumber;

    //Iterating the matrix to find the student with the faculty number entered in the console with foreach loops again
    for (auto &studentRow : students) {
        for (auto &student : studentRow) {
            if (student.getFacultyNumber() == facultyNumber) {
                std::cout << std::fixed;
                std::cout << std::setprecision(2);

                std::cout << "\tFound student:\n"
                          << "\t\tFaculty number: " << student.getFacultyNumber() << "\n"
                          << "\t\tSpeciality: " << student.getSpeciality() << "\n"
                          << "\t\tGroup: " << student.getGroup() << "\n"
                          << "\t\tAverage grade: " << student.getAverageGrade() << "\n";
                return;
            }
        }
    }

    //In case the student wasn't found, an error message displays
    std::cout << "Error, student not found.\n";
}

//In order to not repeat code, a fifth function is used that checks the current group for excellent grades and displays all of them on the console
void checkGroup(int groupNumber,
                std::vector<Student> group1Students,
                std::vector<Student> group2Students,
                std::vector<Student> group3Students,
                std::vector<Student> group4Students) {
    //The temporary group is created so that code does not have to be repeated
    std::vector<Student> temporaryGroup;

    //Determining which vector is the function going to display
    switch (groupNumber) {
        case 1:
            temporaryGroup = group1Students;
            break;
        case 2:
            temporaryGroup = group2Students;
            break;
        case 3:
            temporaryGroup = group3Students;
            break;
        case 4:
            temporaryGroup = group4Students;
            break;
    }

    if (temporaryGroup.empty()) {
        std::cout << "\t\tNo data for students in group 1\n";
    } else {
        bool hasExcellents = false;
        for (auto &student : temporaryGroup) {
            if (student.getAverageGrade() > 5.5) {
                std::cout << "\t\t| Faculty number: "
                          << student.getFacultyNumber()
                          << " | Speciality: "
                          << student.getSpeciality()
                          << " | Average Grade: "
                          << student.getAverageGrade()
                          << " |\n";

                hasExcellents = true;
            }
        }

        if (!hasExcellents) {
            std::cout << "\t\tNo excelled in group. \n";
        }
    }
}

//Algorithm that checks if there are any excellent average grades in the matrix by splitting it into four vectors for each group and displaying all the excellent students in each of them
void searchStudentByGrade() {
    std::vector<Student> group1Students;
    std::vector<Student> group2Students;
    std::vector<Student> group3Students;
    std::vector<Student> group4Students;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    //Filling the four vectors with students by splitting the matrix in four
    for (auto &studentRow : students) {
        for (auto &student : studentRow) {
            switch (student.getGroup()) {
                case 1:
                    group1Students.push_back(student);
                    break;
                case 2:
                    group2Students.push_back(student);
                    break;
                case 3:
                    group3Students.push_back(student);
                    break;
                case 4:
                    group4Students.push_back(student);
                    break;
            }
        }
    }

    //Calling the upper function checkGroup() for each of the vectors
    std::cout << "\tGroup 1 students: \n";
    checkGroup(1, group1Students, group2Students, group3Students, group4Students);
    std::cout << "\tGroup 2 students: \n";
    checkGroup(2, group1Students, group2Students, group3Students, group4Students);
    std::cout << "\tGroup 3 students: \n";
    checkGroup(3, group1Students, group2Students, group3Students, group4Students);
    std::cout << "\tGroup 4 students: \n";
    checkGroup(4, group1Students, group2Students, group3Students, group4Students);
}