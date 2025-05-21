#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int lower,upper,x,guess = 0,count = 0,flag = 0 ;
    int total_chances;
    //Taking inputs
    printf("Enter lower Bound:");
    scanf("%d",&lower);
    printf("Enter upper bound:");
    scanf("%d",&upper);
    //Seed the random number generator
    srand(time(0));
    //Generating random number between the lower and upper
    x = (rand() % (upper - lower + 1)) + lower;
    total_chances = (int)ceil(log(upper - lower + 1)/ log(2));
    printf("\n\tYou've only %d chances to guess the integer!\n\n",total_chances);
    //for calculation of min number of guesses depends
    //Upon range
    while(count < total_chances){
        count++;
        //Taking guessing number as input
        printf("Guess a number:");
        scanf("%d",&guess);
        //condition testing
        if(x == guess){
            printf("Congrats u did it in %d try!\n", count);
            //once guessed,loop will break
            flag = 1;
            break;
        }
        else if(x > guess){
            printf("You guessed tooooo small!\n");
        }
        else if (x < guess){
            printf("You guessed toooo high!\n");
        }
    }
    //if guessing is more than required guesses, shows this
    //output
    if (!flag){
        printf("\n The num is %d\n, x");
        printf("\t Better luck nex time! \n");
    }
    return 0;
}

