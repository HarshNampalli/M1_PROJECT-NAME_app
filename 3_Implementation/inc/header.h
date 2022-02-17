#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int comparison(char s1, char s2)
{
    if (s1 == s2)
    {
        return -1;
    }
    else if (s1 == 'r' && s2 == 's')
    {
        return 1;
    }
    else if (s2 == 'r' && s1 == 's')
    {
        return 0;
    }
    else if (s1 == 'p' && s2 == 'r')
    {
        return 1;
    }
    else if (s2 == 'p' && s1 == 'r')
    {
        return 0;
    }

    else if (s1 == 's' && s2 == 'p')
    {
        return 1;
    }
    else if (s2 == 's' && s1 == 'p')
    {
        return 0;
    }
}
int main()
{
    int pscore = 0, cscore = 0, temp;
    char player, comp;
    char dict[] = {'r', 'p', 's'};
  for (int i = 0; i < 3; i++)
    {
    
      {
        // Take player input
        scanf("%d", &temp);
        getchar();
        player = dict[temp - 1];

        //computer generate
        temp = generateRandomNumber(3) + 1;
        comp = dict[temp - 1];

        // compater character and increment the score
        if (comparison(comp, player) == 1)
        {
            cscore++;
        }
        else if (comparison(comp, player) == -1)
        {
            cscore++;
            pscore++;
        }
        else
        {
            pscore++;
        }

    }

     assert(comparison(pscore,cscore)== 1);
      printf("computer got it");
     assert(comparison(playerScore,compScore)== -1);
      printf("draw");
     assert(comparison(playerScore,compScore)== 0);
      printf("player got it");
}
