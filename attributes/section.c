//
// Created by raykuzu on 19/03/2020.
// Targets: functions, variables
// Effects: special needs
// Force compiler to generate code for the function or the variable in a particular section instead
// of text section (for functions) or data/bss section (for variables)
// (if you don't know what is a section -> objdump -s <bin> and man google)
// First arg is the name of the section
//

// Warning:
// We can't put different classes in the same section at compile time
// but we can do it at linkage (with the example):
//.section-exemple : {
//    *(.text-like-section-exemple)
//    *(.bss-like-section-exemple)
//} > SECTION_EXAMPLE

__attribute__((section("text-like-section-exemple"))) void func() {
}

__attribute__((section("bss-like-section-exemple"))) int x = 0;


int main() {
    func();
    return (0);
}

