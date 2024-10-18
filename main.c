#include <stdio.h>
#include <time.h>
#include <conio.h> // For kbhit() and getch()

int main()
{
    int start;
    long long int start_time;
    char typed[1000];
    int length = 0;
    int count = 0;

    printf("Hello\nWelcome to the typing speed checker!\n");

    printf("Press 1 to start typing: \n");
    scanf("%d", &start);

    getchar();

    if (start)
    {
        start_time = time(NULL);
        printf("Start typing now! You have 60 seconds:\n");

        while (difftime(time(NULL), start_time) < 60)
        {
            /*
                kbhit() :
                Returns 1(true) if a key is pressed.
                Returns 0(false) if no key is pressed.
                Non blocking: allows the program to continue executing.
            */
            
            if (kbhit())
            {
                char ch = getch();
                if (ch == ' ')
                {
                    count++;
                }

                printf("%c", ch);
                typed[length] = ch; 
                length++;           
            }
        }

        typed[length] = '\0';
    }

    printf("\nYou typed %d characters in minute\n", length);
    printf("Your typing speed is: %d words per minute\n", count);

    return 0;
}