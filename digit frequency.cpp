#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    scanf("%s", str);  // read input string

    int freq[10] = {0};  // frequency array for digits 0-9

    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {  // check if character is a digit
            int digit = str[i] - '0';  // convert char to int
            freq[digit]++;  // increment frequency
        }
    }

    // print frequencies
    for (int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);
    }
    return 0;
}

