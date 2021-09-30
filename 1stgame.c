#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,nguess=1,guess;
    srand(time(0));
    number=rand()%100+1;
    do{
        printf("Guess a number between 1 to 100 \n");
        scanf("%d", &guess);
        if(guess<number){
            printf("Higher number please \n");
        }
        else if(guess>number){
            printf("Lower number please \n");
        }
        else{
            printf("You guessed the current number in %d guesses", nguess);
        }
        nguess++;
    }while(guess!=number);
    return 0;
}