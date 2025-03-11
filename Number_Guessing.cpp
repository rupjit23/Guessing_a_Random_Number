#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generate_Random_number(int &random_number)
{
    srand(time(NULL));                                 // everytime the starting random_number should be different
    int lower_limit=1,upper_limit=100;                 // seeting the limits
    random_number=rand() % upper_limit - lower_limit;  // formula for the random_number
 // printf("%d\n",random_number);                      // for seeing the random_number
    return random_number;                              //returing to the main_function
}
int main()
{
    
    int Guess_number,t=3,random_number,count=0;
    printf("Welcome To The World of Guessing !!!!!! ");
    printf("\n");
    printf("Rules : The Guesseing Number should be between 0 to 100 and there is a limit of 3 guesses");
    printf("\n");
    generate_Random_number(random_number);
    while(t--){
        printf("Please Guess the Number : ");
        scanf("%d",&Guess_number);
        if(Guess_number==random_number)
        {
            count++;
            break;
        }
        if(t!=0)
        {
            if( Guess_number > random_number)
        {
                printf("Hint -> Enter a smaller number\n");  
        }
        else{
            printf("Hint -> Enter a bigger number\n");
        }
        }
    }
    if(count==1)
    {
        printf("!-----""Congrates You Won""-------!\n");
    }
    else
    {
        printf("Sorry!! Better luck next time:::::::\n");
        printf("The guessing number was: ");
        printf("%d\n",random_number);
    }
    printf("Thanks for playing the game!!!!!!!!!!!!!!!!!!!!!!!!");
    printf("\n");
    return 0;
}
