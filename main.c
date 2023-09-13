#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int main() {

  const int MIN = 1;
  const int MAX = 100;
  int guess;
  int guesses = 1;
  int answer;

  // uses current time as seed
  srand(time(0));

  // generate ran number between min and max
  answer = (rand() % MAX) + MIN;

  printf("-Guessing Game-\n");
  printf("Guess the number I'm thinking of from 1 - 100: ");
  scanf("%d", &guess);
  
  bool valid = true;

  while(valid)
    
    {
      

      if(guess == answer)
        
      {
        
        printf("Correct! That's the number!");
        printf("You got it in %d tries!", guesses);
        break;
        
      }

      if(guess > answer)
        
      {
        
        printf("Too high! Guess agian: ");
        guesses += 1;
        scanf("%d", &guess);
        continue;
        
      }

      if(guess < answer)
        
      {
        
        printf("Too low! Guess again: ");
        guesses += 1;
        scanf("%d", &guess);
        continue;
        
      }

      guesses += 1;
      
    }
  
  
  return 0;
  
}
