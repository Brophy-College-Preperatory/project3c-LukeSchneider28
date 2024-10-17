#include <stdio.h>
// Partners: Michael Hamra, Ezra Benjamin
//Build project 3 here:

int main(void){
    printf("How much change is owed?\n");
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    int number;
        char answer = 'y';
    //
    while (answer == 'y'){
        printf("Enter as a whole number. For example, enter $0.41 as 41. ");
    scanf("%i", &number);
    while (number > 24){
        number = number - 25;
        quarters = quarters + 1;
        }
    printf("Quarters:%i\n", quarters);
    while (number > 9){
        number = number - 10;
        dimes = dimes + 1;
        }
    printf("Dimes:%i\n", dimes);
    while (number > 4){
        number = number - 5;
        nickels = nickels + 1;
        }
    printf("Nickels:%i\n", nickels);
    while (number > 0){
        number = number - 1;
        pennies = pennies + 1;
        }
    printf("Pennies:%i\n", pennies);

    printf("Would you like to go again? (type y/n)");
    scanf(" %s", &answer);

}
return 0;
}
// How to upload: On the terminal, type: git add * (return). git commit -m"done" (return). git push (return)| if doesn't work, copy code and email it to Mr. Robles