//
// Created by raykuzu on 19/03/2020.
// Inline keyword has been created to facilitate use of inlining which
// was originally by the attribute (see attributes/always_inline.c)
// Since C99
//

#include <stdio.h>


// Care to put extern / static keyword on inline function
// or it will be undefined

extern inline void func() {
    printf("mdr\n");
}


void func2() {
    func();
}

// is equal to

void func3() {
    printf("mdr\n");
}

extern inline void func4() {
    func();
}

int main() {

    func4();
    // is equal to
    printf("mdr\n");
    return (0);
}