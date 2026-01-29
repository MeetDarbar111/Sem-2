//WAP in C to Show demo of UDF for swapping 2 Numbersto show demo of Call by Value
#include <stdio.h>
void swap(int a, int b) {
    int temp = a;

    a = b;
    b = temp;
}
int main() {
    int x = 10, y = 20;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After swapping: x = %d, y = %d\n", x, y);

    printf("Press Enter to continue...");   
    getchar();
    return 0;
}