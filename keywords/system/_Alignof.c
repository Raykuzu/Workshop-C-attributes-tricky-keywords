//
// Created by raykuzu on 20/03/2020.
// Targets: variables
// Effects: utility
// _Alignof keyword (or alignof if you include stdalign.h) lets you know
// the alignment of a variable
// Since C11
//

#include <stddef.h>
#include <stdalign.h>

int main() {

    int a = 0;
    int b = 0;

    size_t a_alignment = _Alignof(a);
    size_t b_alignment = alignof(b);

    (void)a;
    (void)b;
    (void)a_alignment;
    (void)b_alignment;
    return (0);
}