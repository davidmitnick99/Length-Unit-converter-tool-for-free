#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
    Here we have declared the values such as in first kmm we have declared
    that 1km = 0.621371 miles. All the variables are declared in such algorithm.
    */
    float kmm = 0.621371;
    float inf = 0.0833;
    float pkg = 0.453592;
    float cmin = 0.393701;
    float inm = 0.0254;
\
/*
Here we have defined the datatypes of all the inputs in program.
*/
    char input;
    int inp2, inp3, inp4, inp5, inp6;

    // We are using while loop so the program will remain continue until user block it.
while(1){
 /*
 Here we are giving user a choice to choose any option.
 */
    printf("Please select one option given below:\n");
    printf("1: Kilometers to miles\n");
    printf("2: Inches to feets\n");
    printf("3: Centemeters to inches\n");
    printf("4: Inches to meters\n");
    printf("5: Pounds to kgs\n");
    printf("'q' to quite\n");
    scanf("%c", &input);

/*
    We are using switch-case statement but you can also try if-else statement.
*/
    switch (input)
    {
        // In case q the program is quitted.
        case 'q':
    printf("Quitting the tool...\n A uconverter by Muhammad Hassaan\n");
    goto end;

        break;
        // In case 1 the value is converted from kilometers to miles.
    case '1':
    printf("Enter the value of km:\n");
    scanf("%d", &inp2);
        printf("%dkm are equals to %.2fmiles\n", inp2, kmm * inp2);
        break;

        // In case 1 the value is converted from inches to feets.
    case '2':
    printf("Enter the value of inches:\n");
    scanf("%d", &inp3);
        printf("%dinches are equals to %.2ffeets\n", inp3, inf * inp3);
    
    break;
        // In case 1 the value is converted from centemeters to inches.
    case '3':
    printf("Enter the value of centemeters:\n");
    scanf("%d", &inp4);
        printf("%dcentemeters are equals to %.2finches\n", inp4, cmin * inp3);

    break;
        // In case 1 the value is converted from inches to meters.
    case '4':
    printf("Enter the value of inches:\n");
    scanf("%d", &inp5);
        printf("%dinches are equals to %.2fmeters\n", inp5, inm * inp5);
    break;

        // In case 5 the value is converted from pounds to kilometers.
    case '5':
    printf("Enter the value of Pounds:\n");
    scanf("%d", &inp6);
        printf("%dpounds are equals to %.2fkgs\n", inp6, pkg * inp6);
    break;

    // Default is to declare that when user enter some wrong value so what to show him.
    default:
    printf("Sorry! You have entered a wrong value!\n");
        break;
    }
}
    end:
    return 0;
}
