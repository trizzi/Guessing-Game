#include <stdio.h>

int main() {
    int secretNumber =5;
int guess = 0;
int guessLimit = 3;
int numOfGuess = 0;
int outOfGuesses = 0;

while(guess != secretNumber && outOfGuesses == 0){
    if(numOfGuess < guessLimit){
        printf("Enter a number: ");
        scanf("%d", &guess);
        numOfGuess++;
    }else {
        outOfGuesses = 1;
    }
}
if(outOfGuesses == 1){
    printf("Out of guesses!");
}else{
    printf("You win!");
}
    return 0;
}
