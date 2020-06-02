#include <stdio.h>
#include <ctype.h> //include a new header file so we gain access to isalpha and isblank

// forward declarations: just tell C that you will be using some function later in the program
int can_print_it(char ch);
void print_letters(char arg[]);

//define functions
void print_arguments(int argc, char *argv[])
{
    int i = 0;

    for(i=0; i < argc; i++) {
        print_letters(argv[i]);
    }
}

void print_letters(char arg[])
{
    int i=0;

    for(i=0; arg[i] != '\0'; i++) {
        char ch = arg[i];

        if(can_print_it(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}

//this returns 0 or 1
int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}



