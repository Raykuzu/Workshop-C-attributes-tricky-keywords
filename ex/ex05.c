//
// Created by raykuzu on 01/04/2020.
//

#include <stdio.h>
#include <time.h>

// Another optimization exercise

int y = 5;

int func1(int x) {
    return (x * x);
}

__attribute_const__ int func2(int x) {
    return (x * x);
}

__attribute_pure__ int func3(int x) {
    return (x * y);
}


// Write your own func2. It must do the same work as func1 -> take int x return int x * x (lib math forbidden).
// The gained ratios must be >= 1.10
// !Warn : CPU time is not an exact science when you test, do it several times in a row.
// If it works in at least 50% of the cases it's good

// You can't touch func1 or main

int main()
{
    clock_t begin1 = clock();

    for (size_t i = 0; i < 1000000; i++) {
        func1(5);
    }
    clock_t end1 = clock();
    clock_t begin2 = clock();

    for (size_t i = 0; i < 1000000; i++) {
        func2(5);
    }
    clock_t end2 = clock();
    clock_t begin3 = clock();

    for (size_t i = 0; i < 1000000; i++) {
        func3(5);
    }
    clock_t end3 = clock();

    long elapsed1 = end1 - begin1;
    long elapsed2 = end2 - begin2;
    long elapsed3 = end3 - begin3;
    printf("%ld %ld %ld\n", elapsed1, elapsed2, elapsed3);
    double gain1 = (double) elapsed1 / (double) elapsed2;
    double gain2 = (double) elapsed1 / (double) elapsed3;
    printf("%f %f\n", gain1, gain2);
    return (0);
}