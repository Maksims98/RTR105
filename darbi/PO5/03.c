#include <stdio.h>

char x;

int fun() {
    char delta = 7;
    x = x + delta;
    return x;
}

int main() {
    x = 19+66;
    printf("Pirms, %c \n", x);
    //Sheit paraadaas burts ... jo ...

    fun();
    printf("Peec 2 reizeem, %c \n", x);
    //Peec 1. reizes paraadaas burts ... jo ...

    fun();
    printf("Peec 2 reizeem, %c \n", x);
    //Peec 2. reizes paraadaas burts ... jo ...
}
