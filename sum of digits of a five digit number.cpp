#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;

    // Loop until all digits are processed
    while (n > 0) {
        sum += n % 10;   // get last digit
        n /= 10;         // remove last digit
    }

    printf("%d\n", sum);

    return 0;
}

