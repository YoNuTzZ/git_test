#include <stdio.h>

void f(void) {
}

int main() {
    void (******dd)(void) = f;

    dd();

    return 0;
}
