//
// Created by raykuzu on 20/03/2020.
// _Alignas keyword (or alignas if you include stdalign.h) do the same
// work as __attribute__((aligned)) but with some restrictions (do not accept
// all const variables and values greater than 128 may not work)
// For description and use cases see attributes/aligned.c
// Since C11
//

#include <stdalign.h>

int main() {

    _Alignas(8) int a = 0;
    alignas(8) int b = 0;

    (void)a;
    (void)b;
    return (0);
}