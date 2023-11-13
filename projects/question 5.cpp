#include <iostream>
#include <string> // Include the <string> header for using std::string.

class registration {
public:
    std::string name, f_name, mobile_no, address; // Use std::string for string data.
    void getreg();
    void showreg();
};

class exam {
public:
    std::string rollno;
    std::string branch, sem; // Use std::string for string data.
    double cgpa;
    void getresult();
    void showresult();
};

class placement : public exam, public registration {
public:
    void check();
};

void registration::getreg() {
    std::cout << "\n enter name of student: ";
    std::cin >> name;
    std::cout << "\n enter father's name: ";
    std::cin >> f_name;
    std::cout << "\n enter mobile no.: ";
    std::cin >> mobile_no;
    std::cout << "\n enter address: ";
    std::cin >> address;
}

void registration::showreg() {
    std::cout << "\n student name: " << name;
    std::cout << "\n father's name: " << f_name;
    std::cout << "\n mobile no.: " << mobile_no;
    std::cout << "\n address: " << address;
}

void exam::getresult() {
    std::cout << "\n enter roll_no of student: ";
    std::cin >> rollno;
    std::cout << "\n enter branch: ";
    std::cin >> branch;
    std::cout << "\n enter semester: ";
    std::cin >> sem;
    std::cout << "\n enter CGPA: ";
    std::cin >> cgpa;
}

void exam::showresult() {
    std::cout << "\n roll no: " << rollno;
    std::cout << "\n branch: " << branch;
    std::cout << "\n semester: " << sem;
    std::cout << "\n CGPA: " << cgpa;
}

void placement::check() {
    if (cgpa >= 6.0) {
        std::cout << "\nStudent is eligible for placement";
    } else {
        std::cout << "\nStudent is not eligible for placement";
    }
}

int main() {
    placement p1;
    p1.getreg();
    p1.getresult();
    p1.showreg();
    p1.showresult();
    p1.check();
    return 0; // Return 0 to indicate successful program execution.
}

