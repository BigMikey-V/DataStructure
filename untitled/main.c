#include <stdio.h>

#include "bool.h"

bool judge(int x);

int main() {
    printf("Hello, World!\n");

    int x = -1;
    bool result = true;

    scanf("%d", &x);
    result = judge(x);
    printf("Result is %d\n", result);

    return 0;
}

bool judge(int x) {

    if(x == 1) return true;

    return false;
}
