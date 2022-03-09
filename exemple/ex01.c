//
// Created by raykuzu on 01/04/2020.
//

#include <stdio.h>
#include <time.h>

void func1() {
    printf("hello\n");
}

__always_inline void func2() {
    printf("hello\n");
}

// Write your own func2. It must do the same work as func1 -> print hello\n
// but must be executed 10000 times (cf main) in 2 times less time (CPU time) than func1 (you must use printf too).
// !Warn : CPU time is not an exact science when you test, do it several times in a row.
// If it works in at least 50% of the cases it's good

// You can't touch func1 or main

int main()
{
    clock_t begin1 = clock();

    for (size_t i = 0; i < 10000; i++) {
        func1();
    }
    clock_t end1 = clock();
    clock_t begin2 = clock();

    for (size_t i = 0; i < 10000; i++) {
        func2();
    }
    clock_t end2 = clock();

    long elapsed1 = end1 - begin1;
    long elapsed2 = end2 - begin2;
    printf("%ld %ld\n", elapsed1, elapsed2);
    return (0);
}