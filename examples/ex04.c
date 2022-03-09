//
// Created by raykuzu on 01/04/2020.
//

#include <stdio.h>
#include <time.h>

// Another optimization exercise

const int loop_number = 10000000;

int y = 5;

int func1(int x) {
    return (x * x);
}

/* Func2 here */

/* Func3 here */

// Write your own func2. It must do the same work as func1 -> take int x return int x * x (lib math forbidden).
// You can write a func3 that return x * y. It must be in the same time range than your func2 (better than func1).
// The gained ratios must be >= 1.10
// !Warn : CPU time is not an exact science when you test, do it several times in a row.
// If it works in at least 80% of the cases it's good

// You can't touch func1 or main

int main()
{
    clock_t begin1 = clock();

    for (size_t i = 0; i < loop_number; i++) {
        func1(5);
    }
    clock_t end1 = clock();
    clock_t begin2 = clock();

    for (size_t i = 0; i < loop_number; i++) {
        //func2(5);
    }
    clock_t end2 = clock();
    clock_t begin3 = clock();

    for (size_t i = 0; i < loop_number; i++) {
        //func3(5);
    }
    clock_t end3 = clock();

    long elapsed1 = end1 - begin1;
    long elapsed2 = end2 - begin2;
    long elapsed3 = end3 - begin3;
    printf("Function1: %ld Function2: %ld Function3: %ld\n", elapsed1, elapsed2, elapsed3);
    double gain1 = (double) elapsed1 / (double) elapsed2;
    double gain2 = (double) elapsed1 / (double) elapsed3;
    printf("Gained ratio func2: %f Gained ratio func3: %f\n", gain1, gain2);
    return (0);
}