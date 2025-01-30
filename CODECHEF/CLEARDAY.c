#include <stdio.h>
int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    int clear_days = 7 - X - Y;
    printf("%d\n", clear_days);
    return 0;
}