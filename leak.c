#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int i = 0; 1; i++) {
        printf("%d\n", i);
        void *p = calloc(1024 * 1024, sizeof(char));
        if (p == 0) {
            printf("Failed after %d MB allocations, press any key to exit\n", i);
            char c = getchar();
            return 1;
        }
    }
}
