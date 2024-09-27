// Version v0.2.0

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int currentHealth;

void new()
{
    int damage, weapon, life = 100;
    printf("\nOpponents life : %d", currentHealth);
    printf("\n\nChoose your weapon:\n(1) Sword, 30-40 damage\n(2) Knife, 10-20 damage\nINPUT HERE: ");
    scanf("%d", &weapon);

    switch (weapon)
    {
    case 1:
        printf("\nYou chose the sword");
        srand(time(NULL));
        damage = rand() % 11 + 30;
        printf("\nYou inflicted %d damage to your oppenent", damage);
        currentHealth = currentHealth - damage;
        printf("\nCurrent opponent life is %d", currentHealth);
        break;
    case 2:
        printf("\n\nYou chose the knife");
        srand(time(NULL));
        damage = rand() % 11 + 10;
        printf("\nYou inflicted %d damage to your opponent", damage);
        currentHealth = currentHealth - damage;
        printf("\nCurrent opponent life is %d", currentHealth);
        break;
    default:
        printf("Invalid input");
        break;
    }
}

void initial()
{
    int life = 100, damage, weapon;
    printf("\nOpponents life : %d", life);
    printf("\n\nChoose your weapon:\n(1) Sword, 30-40 damage\n(2) Knife, 10-20 damage\nINPUT HERE: ");
    scanf("%d", &weapon);

    switch (weapon)
    {
    case 1:
        printf("\nYou chose the sword");
        srand(time(NULL));
        damage = rand() % 11 + 30;
        printf("\nYou inflicted %d damage to your oppenent", damage);
        currentHealth = life - damage;
        printf("\nCurrent opponent life is %d", currentHealth);
        break;
    case 2:
        printf("\n\nYou chose the knife");
        srand(time(NULL));
        damage = rand() % 11 + 10;
        printf("\nYou inflicted %d damage to your opponent", damage);
        currentHealth = life - damage;
        printf("\nCurrent opponent life is %d", currentHealth);
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
        break;
    case 1:
        initial();
        break;
    default:
        printf("Invalid input");
    }
    while (currentHealth != 0)
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
            new ();
            break;
        }
    }
}