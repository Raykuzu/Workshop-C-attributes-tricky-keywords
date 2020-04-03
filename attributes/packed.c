//
// Created by raykuzu on 19/03/2020.
// Targets: variables, types
// Effects: optimization/special needs
// Attribute packed force compiler to use smallest alignment on a variable or a type
// __attribute__((packed)) is the opposite of __attribute__((aligned)) (without arg)
//

struct data_bag {
    int a;
    char c;
    char c2;
    int b;
} __attribute__((packed));

// is equal to


// I put the attributes on c and c2 for the principle but it is useless for the chars
struct data_bag2 {
    __attribute__((packed)) int a;
    /*__attribute__((packed))*/ char c;
    /*__attribute__((packed))*/ char c2;
    __attribute__((packed)) int b;
};

struct data_bag3 {
    int a;
    char c;
    char c2;
    int b;
};

// ! ADVANCED //
/*Memory representation (with int == 4 bytes && system 8 bytes aligned)
************************
databag3 (without packed):
[0-3->a, 4->c, 5->c2, 6-7->void(padding), 8-11->b] -> struct size == 12 (12 % 4 == 0 -> aligned)
databag:
[0-3->a, 4->c, 5->c2, 6-9->b] -> struct size == 9 (9 % 4 != 0 -> non aligned)

In databag3, after c2, there is 2 bytes remain unused with 8 bytes alignment
but int take 4 bytes so compiler fill with zero in the memory for 2 bytes (6-7)
and int start at structure + 9 (8)
*/



int main() {
    return (0);
}
