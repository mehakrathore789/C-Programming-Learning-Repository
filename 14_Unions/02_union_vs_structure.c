/*
 * Program: Union vs Structure - Memory Comparison
 * Description: A struct allocates SEPARATE memory for every member.
 *              A union allocates memory only for its LARGEST member,
 *              and all members share that same space.
 */

#include <stdio.h>

struct StructExample {
    int i;      // 4 bytes
    float f;    // 4 bytes
    char c;     // 1 byte
};

union UnionExample {
    int i;      // 4 bytes
    float f;    // 4 bytes
    char c;     // 1 byte
};

int main(void) {
    printf("Size of struct (sum of members, plus possible padding): %zu bytes\n",
           sizeof(struct StructExample));
    printf("Size of union (size of the largest member only):        %zu bytes\n",
           sizeof(union UnionExample));

    // In a struct, every member can be used independently and simultaneously.
    struct StructExample s = {10, 5.5f, 'A'};
    printf("\nStruct holds all values at once -> i=%d, f=%.1f, c=%c\n", s.i, s.f, s.c);

    // In a union, setting one member affects the others (shared memory).
    union UnionExample u;
    u.i = 10;
    printf("Union holds only ONE value at a time -> i=%d (f and c would be garbage)\n", u.i);

    return 0;
}
