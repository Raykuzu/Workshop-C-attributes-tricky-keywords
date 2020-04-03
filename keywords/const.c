//
// Created by raykuzu on 19/03/2020.
// Targets: variables, parameters, pointers, returns
// Effects: clean code/optimization
// Const keyword is a classic but unknown -> different usages and different effects
//

#include <stdio.h>

const char *func() { // Const return value (pointer) -> use if returned pointer have to be never modified
    return ("lol");
}

const int func2() { // Useless for primitives generate warning
    return (0);
}

void logg(const char *msg) { // Const parameter
    printf("%s\n", msg);
}

int main() {
    const char *res = func();
    (void)res;
    char *res2 = func(); //Discard const -> warning
    (void)res2;

    const int n = 1; // Const primitive can never be modified
    (void)n;

    char *msg = "lolmdr";
    logg(msg);
    // I can modify msg here but not in log func -> no discard problem because a non-const can become const but not the reverse

    // Here is the tricky point(er)//

    const char *var = "hello"; // The value can't be modified but we can modify pointer
    // You can write char const *var too
    //*var = 0; -> Forbidden
    //var = NULL; -> OK
    (void)var;

    char * const var2 = "world"; // The pointer can't be modified but we can modify value
    //*var2 = 0; -> OK
    //var = NULL; -> Forbidden
    (void)var2;

    char const * const var3 = "Hello world"; // Const pointer of const value
    // Same as: const char * const var3
    (void)var3;

    return (0);
}
