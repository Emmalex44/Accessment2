// implements a list of numbers using a linked list

#include <cs50.h>
#include <stdio.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
  // Memory for number
   node *numbers = NULL;

  // prompt for numbers (until EOF)
   while (true)
    {
      // prompt for number
      int number = get_int("number: ");

      // check for EOF
      if (number == INT_MAX)
      {
        break;
      }

      // Allocate space for number
      node *n = malloc(sizeof(node));
      if(!n)
      {
         return 1;
      }

      // Add number to list
      n->number = number;
      n->next = NULL;
      if (numbers == 0)
      {

         for (node *ptr = numbers; ptr != NULL; ptr = ptr->next)
         {
              if (!ptr->next)
              {
                   ptr->next = n;
                   break;
              }
         }
      }
      else
      {
          numbers = n;
      }
    }

    //print number
  for (int i = 0; i < numbers; i++)
  {
     printf("you inputted %i\n", numbers[i]);
  }
}



