#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    const int MIN=1;
    const int MAX=100;
    int guess;
    int guessess;
    int answer;

    ///uses the current time as a seed
    srand(time(0));

    //generate a random number between MIN & MAX
    answer=(rand()%MAX) + MIN;

    do
    {
        printf("Enter a guess: ");
        scanf("%d",&guess);
        if (guess > answer)
        {
            printf("Too high !\n");
        }
        else if (guess < answer)
        {
            printf("Too low !\n");
        }
        else
        {
            printf("CORRECT !\n");
        }

        guessess++;
    } while (guess != answer);

    printf("************************\n");
    printf("\tanswer: %d\n",answer);
    printf("\tguessess: %d\n",guessess);
    printf("************************");

    return 0;
}
