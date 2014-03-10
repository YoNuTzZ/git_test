#include <stdio.h>

void f(void) {
}

int main() {
    void (******dd)(void) = f;
   // printf("git");
    dd();

    return 0;
}


