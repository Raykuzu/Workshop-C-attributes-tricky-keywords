//
// Created by raykuzu on 19/03/2020.
// Targets: variables, types
// Effects: optimization/special needs
// Attribute aligned specifies the minimum alignment for a variable or a type (in bytes) if you specifies first arg,
// or force compiler to use the maximum alignment if you don't.
// __attribute__((aligned)) (without arg) is the opposite of __attribute__((packed))
//

__attribute__((aligned (16))) int x = 0;
__attribute__((aligned)) int x2 = 0; //Maximum alignment

struct data_bag {
    int a;
} __attribute__((aligned(8)));

int main() {
    return (0);
}

