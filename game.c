// Version v0.2.1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int currentHealth = 100;

void initial()
{
    int damage, weapon;
    srand(time(NULL));
    printf("\n______________________________________________\n\n");
    printf("\nOpponents life : %d", currentHealth);
    printf("\n\nChoose your weapon:\n(1) Sword, 30-40 damage\n(2) Knife, 10-20 damage\nINPUT HERE: ");
    scanf("%d", &weapon);

    switch (weapon)
    {
    case 1:
        printf("\n______________________________________________\n\n");
        printf("\nYou chose the sword");
        damage = rand() % 11 + 30;
        printf("\nYou inflicted %d damage to your oppenent", damage);
        currentHealth -= damage;
        printf("\nCurrent opponent life is %d", currentHealth);
        printf("\n\n______________________________________________");
        break;
    case 2:
        printf("\n______________________________________________\n\n");
        printf("\n\nYou chose the knife");
        damage = rand() % 11 + 10;
        printf("\nYou inflicted %d damage to your opponent", damage);
        currentHealth -= damage;
        printf("\nCurrent opponent life is %d", currentHealth);
        printf("\n\n______________________________________________");
        break;
    default:
        printf("Invalid input");
    }
}

int main()
{
    int start;
    printf("Start the game? (1/0): ");
    scanf("%d", &start);
    switch (start)
    {
    case 0:
        printf("End");
        return 0;
        break;
    case 1:
        initial();
        break;
    default:
        printf("Invalid input");
    }
    while (currentHealth > 0)
    {
        int contGame;
        printf("\n\nDo you still want to continue? (1/0): ");
        scanf("%d", &contGame);
        switch (contGame)
        {
        case 0:
            printf("End");
            return 0;
            break;
        case 1:
            initial();
            break;
        default:
            printf("Invalid input");
        }
    }
    printf("\nEnd");
}