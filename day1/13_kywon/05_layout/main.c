#include <stdio.h>

void mem_inspection(unsigned char* p, int N) {
    for(int i=0; i<N; i++)  
        printf("mem[%d] is 0x%02X at 0x%p\n", i, *(p+i), p+i);
}

#define ALINGED 1
#ifdef ALINGED
struct foo {
    int   a;
    short b;
    char  c;
    int   d;
    char  e;
    char  f;
    char  g;
    short h;
};
#else

#endif

int main() {
    printf("Running...\n");
#ifdef ALINGED
    struct foo f1 = {
        0x12345678,
        0xFBCD,
        0xEE,
        0x12345678,
        0xAB,
        0xCC,
        0xEE,
        0xDDFF
    };
#else

#endif

    printf("struct foo's size is %ld\n", sizeof(f1));
}
