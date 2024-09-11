#include "tp1.1.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    int a = 1;
    int b = 2;
    int c = sum(a, b);

    std::cout << "Sum of " << a << " and " << b << " is " << c << std::endl;

    int d = 0;
    replace_number_with_pointer(a, b, &d);

    std::cout << "Sum of " << a << " and " << b << " is " << d << std::endl;

    int e = 0;
    replace_number_with_reference(a, b, e);

    std::cout << "Sum of " << a << " and " << b << " is " << e << std::endl;

    std::cout << "=====================================" << std::endl;
    std::cout << "Enter size of the tab : ";
    int tab_size;
    std::cin >> tab_size;

    std::cout << "Generating random positive numbers" << std::endl;

    int * tab = generate_random_positive_numbers(tab_size);

    print_tab(tab, tab_size);

    std::cout << "=====================================" << std::endl;

    std::cout << "Sorting the array" << std::endl;

    bubble_sort(tab, tab_size);

    print_tab(tab, tab_size);

    free(tab);


    return 0;
}

int sum(int a, int b) {
    return a + b;
}

void replace_number_with_pointer(int a, int b, int *c) {
    *c = a + b;
}

void replace_number_with_reference(int a, int b, int &c) {
    c = a + b;
}

int* generate_random_positive_numbers(int size) {
    int * tab = (int * ) malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        tab[i] = rand() % 100;
    }
    return tab;
}

void print_tab(int * tab, int size) {
    std::cout << "[";
    for (int i = 0; i < size; i++) {
        std::cout << tab[i];
        if (i < size - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

void inverse_two_numbers(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void bubble_sort(int * tab, int size) {
    for (int i = 0; i < size; i++) {
        // ( - i for optimization)
        for (int j = 0; j < size - 1 - i ; j++) {
            if (tab[j] > tab[j + 1]) {
                inverse_two_numbers(tab[j], tab[j + 1]);
            }
        }
    }
}