#include <stdio.h>

void modify(int *x, int y) {
    *x = *x + y;
    y = y * 2;
    printf("Inside modify: x = %d, y = %d\n", *x, y);
}

int main() {
    int a = 5, b = 3;
    int *ptr = &a;

    printf("Before modify: a = %d, b = %d\n", a, b);
    modify(ptr, b);
    printf("After modify: a = %d, b = %d\n", a, b);

    return 0;
}
