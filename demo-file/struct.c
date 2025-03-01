#include <stdio.h>
#include <string.h>

struct Employee {
    char name[10];
    int id;
    float salary;
};

void printEmployee(struct Employee emp) {
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
}

int main() {
    struct Employee emp1 = {"Alice", 1001, 55000.5};
    printEmployee(emp1);
    return 0;
}
