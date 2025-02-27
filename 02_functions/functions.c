/* 
    Introduction to functions in C

    You cannot create a function inside another function
*/

#include <stdio.h>
    // Function format
    // <return_type> <function_name> (<arguments (parameters, inputs)>)
    // {
    // }
    // The function doesn't take any arguments and doesn't return any values
    void print_course (void) {
        printf("You are in COP%d\n", 2271);
    }

    void draw_circle (void) {
    printf("   *\n");
    printf(" * *\n");
    printf (" * *\n");

    }

    //Create draw_caret function


int main () {
    // Function call
    //print_course(); 

    //Call draw_circle function


    // // Call draw_caret function
    // draw_caret();

    //draw_triangle();

    draw_stick_figure(); 
    
    return 0; 

}