//
// Created by raykuzu on 01/04/2020.
//

#include <stdio.h>
#include <assert.h>

// You must not abort.

// You can't touch main and you can't add or remove member in structures

struct random_data {
    int a;
    char b;
    char *str;
};

struct random_data2 {
    int a;
    char b;
    int c;
};

int main()
{
    printf("%ld\n", sizeof(struct random_data));
    printf("%ld\n", sizeof(struct random_data2));

    assert(sizeof(struct random_data) == 13);

    // Small challenge -> if you don't know bitwise look below the main
    // Find what this function does, it's a small trick that will be useful
    assert((sizeof(struct random_data2) & (sizeof(struct random_data2) - 1)) == 0);
    return (0);
}

















// the & is the bitwise [and] operator
// like other bitwise it transforms numbers in binary:
// 6 & 8 is equal to 110 & 1000
// How to evaluate this expression (put this like a subtract and apply [and]):
// 0110
// 1000
// ----
// 0000
// -> 0 & 1 == 0, 1 & 0 == 0, 1 & 0 == 0, 0 & 0 == 0
// Truth table for and logic operator is:
// 0 & 0 == 0
// 0 & 1 == 0
// 1 & 0 == 0
// 1 & 1 == 1
