#include <stdio.h>

int main() {
    const char * planets[] = { "Mercury", "Venus", "Earth", NULL };

    for (int i = 0; i < 4; i++) {
        printf("%s\n", planets[i]);
    }

    return 0;
}
