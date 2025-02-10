#include<stdio.h>
int main() {
    int a;
    int sum = 0;
    do {
            printf("Enter number or 0 to stop : ");
            scanf("%d", &a);
            sum = sum + a;
    } while(a != 0);

    printf("Sum = %d", sum);
}
