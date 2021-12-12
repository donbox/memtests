#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int i = 0; 1; i++) {
        printf("%d\n", i);
        void *p = malloc(1024 * 1024);
        if (p == 0) {
            printf("malloc failed after %d MB allocations, press any key to exit\n", i);
            char c = getchar();
            return 1;
        }
    }
}
