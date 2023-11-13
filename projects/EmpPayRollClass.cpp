#include <iostream>
#include <vector>
#include <string>

class Employee {
public:
    Employee(const std::string& name, float hourlyWage, int hoursWorked)
        : name(name), hourlyWage(hourlyWage), hoursWorked(hoursWorked) {}

    // Accessors (getters)
    std::string getName() const {
        return name;
    }

    float getHourlyWage() const {
        return hourlyWage;
    }

    int getHoursWorked() const {
        return hoursWorked;
    }

    float calculateSalary() const {
        return hourlyWage * hoursWorked;
    }

private:
    std::string name;
    float hourlyWage;
    int hoursWorked;
};

int main() {
    std::vector<Employee> employees;

    while (true) {
        std::cout << "\nEmployee Payroll System Menu:\n";
        std::cout << "1. Add Employee\n";
        std::cout << "2. View Employee Details\n";
        std::cout << "3. Calculate Salary\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::cin.ignore(); // Clear newline character
                std::string name;
                float hourlyWage;
                int hoursWorked;

                std::cout << "Enter employee name: ";
                std::getline(std::cin, name);
                std::cout << "Enter hourly wage: ";
                std::cin >> hourlyWage;
                std::cout << "Enter hours worked: ";
                std::cin >> hoursWorked;

                Employee newEmployee(name, hourlyWage, hoursWorked);
                employees.push_back(newEmployee);
                std::cout << "Employee added successfully.\n";
                break;
            }
            case 2: {
                std::cout << "Employee Details:\n";
                for (size_t i = 0; i < employees.size(); ++i) {
                    std::cout << "Employee " << i + 1 << ":\n";
                    std::cout << "Name: " << employees[i].getName() << "\n";
                    std::cout << "Hourly Wage: $" << employees[i].getHourlyWage() << "\n";
                    std::cout << "Hours Worked: " << employees[i].getHoursWorked() << "\n";
                }
                break;
            }
            case 3: {
                std::cout << "Enter employee index to calculate salary: ";
                size_t index;
                std::cin >> index;

                if (index >= 1 && index <= employees.size()) {
                    float salary = employees[index - 1].calculateSalary();
                    std::cout << "Salary for " << employees[index - 1].getName() << ": $" << salary << "\n";
                } else {
                    std::cout << "Invalid employee index.\n";
                }
                break;
            }
            case 4: {
                return 0; // Exit the program
            }
            default: {
                std::cout << "Invalid choice. Try again.\n";
            }
        }
    }

    return 0;
}

