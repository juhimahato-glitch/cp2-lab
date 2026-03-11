#include <stdio.h>

enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main() {
    enum week day;

    day = Wednesday;

    printf("Day value: %d", day);

    return 0;
}
