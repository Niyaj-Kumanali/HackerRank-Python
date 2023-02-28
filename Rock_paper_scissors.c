#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int rps(char c, char y)
{
    char t;
    if(c == y)
        return 0;
    if((c == 'r' && y == 's') || (c == 'p' && y == 'r') || (c == 's' && y == 'p'))
        return -1;
    if((y == 'r' && c == 's') || (y == 'p' && c == 'r') || (y == 's' && c == 'p'))
        return 1;
    else
        return (int)t;
    
}

int main()
{
    char c, y;
    int t, result;
    time(0);
    t = rand()%100 +1;

    if(t<33)
        c = 'r';
    if(t>33 && t<66)
        c = 'p';
    else
        c = 's';
    


    while (1)
    {
        printf("\n\n\nEnter 'r' for rock 'p' for paper 's' for scissors and 'e' for exit : ");
        scanf("%c", &y);

        result = rps(c, y);

        if(result == 1)
        {
            printf("\n\t\t**********You Won**********");
        }
        if(result == -1)
        {
            printf("\n\t\t**********You Lose**********");
        }
        if(result == 0)
        {
            printf("\n\t\t**********It's Draw **********");
        }
        if(result == 't')
        {
            printf("\n**********Thank you for playing**********");
            break;
        }
    }
    return 0;
}