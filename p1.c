#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int randomnumber = rand() % 100 + 1;
    int guessed;
    int no_guess = 0;


    
   do{
    printf("GUESS NUMBER:");
    scanf("%d",&guessed);
    no_guess ++;
    if(guessed < randomnumber){
        printf("UPPER NUMBER PLEASE\n");
    }else if(guessed > randomnumber){
        printf("LOWER NUMBER PLEASE\n");
    }
}while(guessed != randomnumber);
   printf("NUMBER OF GUESSES:%d\n",no_guess);
   printf("NUMBER:%d",randomnumber);

}