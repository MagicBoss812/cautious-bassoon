#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL)); // So that I don't get the same random number twice
    
    int ran = rand() % 6 + 1;
    int num;
    printf("Type in your guess for the random number between 1 and 6:");
    scanf("%d", &num);
    // I was curious to see if I could make this small "animation"
    printf("Rolling the dice.\n");
    sleep(1);
    printf("Rolling the dice..\n");
    sleep(1);
    printf("Rolling the dice...\n");
    sleep(1);

    if (num == ran) 
    {
        printf("Your guess it correct! The random number was %d\n", ran);
    }
    else {
        if (num < 6) { 
        
        printf("Your guess is wrong! The random number was %d\n", ran);
    }
    else {
        printf("Opps, number is too high, please use a number between 1 and 6\n"); // Adding this is optional but I thought "Why not?"
    }
    } 
    return 0;
}


    
    
