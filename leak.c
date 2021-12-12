#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    const size_t size = 1024 * 1024;
    for (int i = 0; 1; i++) {
        printf("%d\n", i);
        void *p = malloc(size);
        if (p != 0) { 
            memset(p, 0xFF, size);
        } else {
            printf("Failed after %d MB allocations, press any key to exit\n", i);
            char c = getchar();
            return 1;
        }
    }
}
