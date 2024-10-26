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

    printf("Press any key to start typing: \n");
    getch();
    // getchar(); will not work as it waits for enter to be pressed while getch immediately returns as soon as any of the keys is pressed

    printf("\n");

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

        printf("\rTime remaining: %d ", 60 - ((time(NULL) - start_time)));
        fflush(stdout);
        // \r moves the cursor to the starting of the same line again and again which is suitable for this timer like application

        if (kbhit())
        {
            char ch = getch();
            if (ch == ' ' || ch == '\n')
            {
                count++;
            }

            printf("%c", ch);
            typed[length] = ch;
            length++;
        }
    }

    typed[length] = '\0';

    printf("\nYou typed %d characters in minute\n", length);
    printf("Your typing speed is: %d words per minute\n\n", count);
    printf("you typed\n\n%s", typed);

    return 0;
}