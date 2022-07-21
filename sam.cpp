#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

struct employee
{
    int id;
   string name;
    int salary;
};

int main()
{
    const int EMPLOYEES_COUNT = 5;
    const string FILE_NAME = "employee.txt";

    employee employees[EMPLOYEES_COUNT] =
        {
            {1, "Robert Baratheon", 10000},
            {2, "Jaime Lannister", 3000},
            {3, "Cersei Lannister", 5000},
            {4, "Daenerys Targaryen", 15000},
            {5, "Jorah Mormont", 1000}};

    ofstream file1(FILE_NAME, std::ios::app);

    if (!file1)
    {
        cerr << "Error: open file 'employee.txt' for appending\n";
        return 1;
    }

    for (int i = 0; i < EMPLOYEES_COUNT; ++i)
    {
        file1 << employees[i].id << " "
              << employees[i].salary << " "
              << employees[i].name << "\n";
    }

    file1.close();

    ifstream file2(FILE_NAME);

    if (!file2)
    {
        cerr << "Error: open file 'employee.txt' for reading\n";
        return 1;
    }

    employee highestSalaryEmployee = {-1, "", -1};

    string line;
    while (getline(file2, line))
    {
        istringstream ist(line);
        employee tmp;
        ist >> tmp.id >> tmp.salary;
        getline(ist, tmp.name);

        tmp.name = tmp.name.substr(1);

        if (tmp.salary > highestSalaryEmployee.salary)
        {
            highestSalaryEmployee = tmp;
        }
    }

    cout << "Name of employee having highest salary: "
              << highestSalaryEmployee.name
              << " (" << highestSalaryEmployee.salary << ")\n";

    return 0;
}