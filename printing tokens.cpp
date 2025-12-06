#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];

    // Read the entire line including spaces
    fgets(sentence, sizeof(sentence), stdin);

    // Remove trailing newline if present
    sentence[strcspn(sentence, "\n")] = '\0';

    // Tokenize the string by spaces
    char *word = strtok(sentence, " ");
    while (word != NULL) {
        printf("%s\n", word);
        word = strtok(NULL, " ");
    }

    return 0;
}

