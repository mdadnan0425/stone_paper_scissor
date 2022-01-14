/*Project 2: Snake, Water, Gun
Snake, Water, Gun or Rock, Paper, Scissors is a game most of us have played during school time. (I sometimes play it even now :) )
Write a C program capable of playing this game with you.
Your program should be able to print the result after you choose Snake/Water or Gun.
*/




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
stonePaperSeisor (char you, char comp)
{
  if (you == comp)
    {
      return 0;
    }

  if (you == 's' && comp == 'p')
    {
      return -1;
    }
  else if (you == 'p' && comp == 's')
    {
      return 1;
    }
  if (you == 's' && comp == 'c')
    {
      return 1;
    }
  else if (you == 'c' && comp == 's')
    {
      return -1;
    }
  if (you == 'p' && comp == 'c')
    {
      return -1;
    }
  else if (you == 'c' && comp == 'p')
    {
      return 1;
    }

}


int
main ()
{
  char you, comp;
  srand (time (0));
  int number = rand () % 100 + 1;
  if (number < 33)
    {
      comp = 's';
    }
  else if (number > 33 && number < 66)
    {
      comp = 'p';
    }
  else
    {
      comp = 'c';
    }
  printf ("Enter S for stone P for paper C for scissor : ");
  scanf ("%c", &you);
  int result = stonePaperSeisor (you, comp);
  if (result == 0)
    {
      printf ("**********************GAME DRAW********************** \n");
    }
  else if (result == 1)
    {
      printf
	("**********************CONGRATULATIONS YOU WIN********************** \n");
    }
  else
    {
      printf
	("**********************SORRY YOU LOSE THE GAME********************** \n");
    }
  printf ("You chose %c and comp chose %c \n", you, comp);
  return 0;
}

