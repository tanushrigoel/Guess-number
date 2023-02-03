#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int st,end,guess;
    srand(time(0));
    
    int number=rand()%100+1;
    printf("%d",number);
    do{
        printf("\nGuess the number between 1 and 100: ");
        scanf("%d",&guess);
        
        if(guess>number){
            printf("Your number is greater than the generated number");
        }
        else if(guess<number){
            printf("Your number is lesser than generated number");
        }
        else{
            printf("Wohhoo !! you guessed it correct");
        }

    }while(guess!=number);

}