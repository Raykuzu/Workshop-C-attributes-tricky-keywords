//
// Created by raykuzu on 20/03/2020.
// Targets: nothing
// Effects: special needs/optimization
// Union keyword declare a union in the same way struct define a structure.
// This allow to have a variable which can be of different types.
// You can use one member at a time, because they share the same memory
//

union databag {
    int a;
    char b;
    char str[25];
};

// Union have the size of the biggest member (here 25 for str)
// -> care to haven't a union with an huge member and the other little
// unless you are using the biggest 3/4 time because it's a waste of memory
// Ex:
// union databag {
//    int a;
//    char b;
//    char str[8500];
//}; -> garbage because when you'll use a or b, they will have a size of 8500
//      whereas they normally make respectively 4 and 1

int main() {

    union databag databag;

    databag.a = 0;

    // a == 0, b == undefined, str == undefined

    databag.b = 'c';

    // a == undefined, b == 'c', str == undefined

    return (0);
}

