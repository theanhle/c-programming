#include <stdio.h>
#include <stdlib.h>

void print_menu()
{
    system("clear"); // for macos, linux
    // system("cls"); // for windows
    printf(" ================================== \n");
    printf("|             QUIZ GAME            |\n");
    printf("|             ---------            |\n");
    printf("| 1. Play game                     |\n");
    printf("| 2. Show the player lists         |\n");
    printf("| 3. Create / update question bank |\n");
    printf("| 0. Exit                          |\n");
    printf(" ================================== \n\n");
}

void play()
{
    printf("Write your code here to implement the play() function.\n");
}

void show_player_list()
{
    printf("Write your code here to implement the show_player_list() function.\n");
}

void update_question_bank()
{
    printf("Write your code here to implement the udpate_question_bank() function.\n");
}

int main(void)
{
    int choice;
    
    do
    {
        print_menu();
        printf("Enter your choice: ");
        scanf("%d%*c", &choice);

        switch(choice)
        {
            case 1:
                play();
                break;
            case 2:
                show_player_list();
                break;
            case 3:
                update_question_bank();
                break;
            default:
                printf("Your choice is not available. Please choose 0, 1, 2, or 3.\n");
        }

        printf("\nPress any key to return to the menu.");
        scanf("%*c");
    }
    while(choice);

    return 0;
}
