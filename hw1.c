#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//libraries
#include "hw1.h"
//including header file

void sides_and(){
//global function sides_and before main
}

int main() {
//main
        the_code[1] = 4;
        //in order to use the_code variable it's value must be modified here.
        printf("sbalan6");
        //prints UIC netid
        return 0;
}

static void and_which(){
//local function and_which idk why this is after main but it works so
static int has_a_bunch_of = 1;
has_a_bunch_of++;
//initialized static integer (4 bytes local) and to get rid of warning of unused static variables its value is incremented by 1, in data section
static int ridiculous = 1;
ridiculous++;
//initialized static integer (4 bytes local) and to get rid of warning of unused static variables its value is incremented by 1, in data section
static char* symbols;
symbols = symbols + 'a';
//unitialized local character pointer (8 bytes) and to get rid of warning of unused static variables value is added with 'a' char, is in bss so must be non initialized.
}

void Forgive_me() {
//global function

}
int they_are_arbitrary;
//forgot what com is for again too lazy to look at slides again 4 bytes integer globally defined not static (probably unitialized global is com)
double so_random = 1.0;
//8 bytes is a double globally defined not static in data section so must be defined to some value not 0 or unitialized

void and_so_varied(){
//globally defined function
and_which();
that_you_needed();
I_have_written();
//was getting an error of unused functions so called these 3 here.
}