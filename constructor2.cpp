 #include <iostream>
 #include <string>
 class Employee {
 private:
    std::string name;
    int age;
    double salary;
 public:
    // Constructor to initialize employee data
    Employee(std::string n, int a, double s) {
        name = n;
        age = a;
        salary = s;
    }
    // Method to print employee data
    void printData() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Salary: " << salary << std::endl;
        std::cout << std::endl; // Empty line for better readability
    }
 };
 int main() {
    // Create an array of Employee objects
    const int numEmployees = 3;
    Employee employees[numEmployees] = {
        Employee("John Doe", 30, 5000.0),
        Employee("Jane Smith", 28, 6000.0),
        Employee("Bob Johnson", 40, 7000.0)
    };
    // Print the data of all employees
    for (int i = 0; i < numEmployees; ++i) {
        std::cout << "Employee " << (i + 1) << " Data:" << std::endl;
        employees[i].printData();
    }
    return 0;
 }