#include <stdio.h> // Diretivas de proprocessamento
// Default libs
// stdio.h refers i/o functions

int main(void){ // Main is c entrypoint, need always return integer, void means no arguments, 0 refers success 1 refers error
	return 0;
}

// Compilation process
// 
// gcc -E program.c -o program.i
// Expanse #include and #define
// remove comments
// generate .i file
//
//gcc -S program.i -o program.s
// Convert c code to asm
// generate .s file
//
// gcc -c program.s -o program-o
// Convert asm to object code
// generate .o file
//
// gcc program.o -o program
// Linking object code to lib
// generate final execute file
//
// gcc program.c -o program
// All steps into one line
//
//Essential flags
//gcc -Wall
// Activate warnings
//
// gcc -Wextra 
// Adictional warning
//
// gcc -Werror
// Treats warning like errors
//
// gcc -Wpendantic 
// Strict default accordance
//
// gcc -std=c11
// Uses c11 patern
// Have anothers like c99, c17...
//
// gcc -g
// Include debbuging information
//
// gcc -g -00
// Disable otimization (Good for debug)
//
// gcc -w
// Default otimization
//
// gcc -Wall -Wextra -Werror -std=c11 -g -O0 program.c -o program
// Maximum otimization
// Uses for Development
//
// gcc -Wall -Wextra -Werror -std=c11 -O2 programa.c -o programa
// Maximum otimization
// Uses for Production

