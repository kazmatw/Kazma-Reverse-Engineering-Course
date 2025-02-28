#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

void printEmployee(struct Employee emp) {
    printf("員工姓名: %s\n", emp.name);
    printf("員工編號: %d\n", emp.id);
    printf("薪資: %.2f\n", emp.salary);
}

int main() {
    struct Employee emp1 = {"Alice", 1001, 55000.5};
    printEmployee(emp1);
    return 0;
}

