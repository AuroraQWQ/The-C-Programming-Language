#include <stdio.h>
int main() {
    int in = 0;
    int flag = 0;

    while ((in = getchar()) != EOF) {
        if (in == ' ' && flag == 0) {
            flag = 1;
            printf("%c", in);
        } else if (in == ' ' && flag != 0) {
            continue;
        } else if (in != ' ') {
            flag = 0;
            printf("%c", in);
        }
    }
    return 0;
}