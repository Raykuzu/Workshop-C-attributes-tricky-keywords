//
// Created by raykuzu on 01/04/2020.
//

#include <stdio.h>
#include <time.h>

const int loop_number = 10000000;

void func1() {}

/* func2 here */

// Write your own func2. It must do nothing like the first function.
// !Warn : CPU time is not an exact science when you test, do it several times in a row.
// If the time elapsed is lower in at least 80% of the cases it's good

// You can't touch func1 or main

int main()
{
    for (size_t j = 0; j < 10; j++) {
        clock_t begin1 = clock();

        for (size_t i = 0; i < loop_number; i++) {
            func1();
        }
        clock_t end1 = clock();

        clock_t begin2 = clock();
        for (size_t i = 0; i < loop_number; i++) {
            //func2();
        }
        clock_t end2 = clock();

        unsigned long elapsed1 = (end1 - begin1) * 1000 / CLOCKS_PER_SEC;
        unsigned long elapsed2 = (end2 - begin2) * 1000 / CLOCKS_PER_SEC;

        printf("Function1: %ld ms function2: %ld ms\n", elapsed1, elapsed2);
    }
    return (0);
}