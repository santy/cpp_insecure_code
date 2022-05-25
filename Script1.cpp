#include <stdio.h>
#include <string.h>

int  main(int argc, char **argv){
    char secreto[10] = "secreto";
    char var[10];
    strcpy(var, argv[1]);
    printf ("Var 1: %s\n", var);
    printf ("var 2: %s\n", secreto);
   
}