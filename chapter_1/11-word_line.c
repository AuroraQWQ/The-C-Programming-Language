#include <stdio.h>
#define IN 1
#define OUT 0
int main() {
    int input = 0;
    int state = -1;
    while ((input = getchar()) != EOF) {
        if (input == ' ' || input == '\n' || input == '\t') {
            state = OUT;
        } else if (state == OUT) {
            printf("\n");
            printf("%c", input);
            state = IN;
        } else
            printf("%c", input);
    }
    printf("\n");

    return 0;
}