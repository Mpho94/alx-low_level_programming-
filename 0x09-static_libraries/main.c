#include <stdio.h>

void _puts(const char* str) {
    printf("%s\n", str);
}

int main() {
    _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
    return 0;
}
