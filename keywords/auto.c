//
// Created by raykuzu on 19/03/2020.
// Targets: variables
// Effects: nothing
// Fun fact, auto keyword exist in C and it's not C++ auto keyword it define a local
// variable with local lifetime, a classic variable so
// -> NEVER USE THIS BULLSHIT ITS FUNFACT <-
//


int main() {

    auto int a = 0;

    (void)a;
    return (0);
}