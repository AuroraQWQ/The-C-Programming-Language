// 编写一个统计空格、制表符与换行符个数的程序
#include <stdio.h>
int main() {
    int space, tabs, wrap, i;
    space = tabs = wrap = 0;
    for (; (i = getchar()) != EOF;) {
        if (i == '\n') {
            wrap++;
        } else if (i == ' ') {
            space++;
        } else if (i == '\t') {
            tabs++;
        }
    }

    printf("space:%d\ntabs:%d\nwrap:%d\n", space, tabs, wrap);

    return 0;
}