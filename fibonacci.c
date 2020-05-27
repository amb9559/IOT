#include <stdio.h>
int main() {
    int i, n, f = 0, s = 1, nt;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", f);
        nt = f + s;
        f = s;
        s = nt;
    }

    return 0;
}