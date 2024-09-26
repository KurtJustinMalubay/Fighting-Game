//Version v0.1.0

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void randomizedDamage()
{
    int damage, life = 100, weapon;
    printf("Opponents life : %d", life);
    printf("\n\nChoose your weapon:\n(1) Sword, 30-40 damage\n(2) Knife, 10-20 damage\nINPUT HERE: ");
    scanf("%d", &weapon);

    switch (weapon)
    {
    case 1:
        printf("\nYou chose the sword");
        srand(time(NULL));
        damage = rand() % 11 + 30;
        printf("\nYou inflicted %d damage to your oppenent", damage);
        life -= damage;
        printf("\nCurrent opponent life is %d", life);
        break;
    case 2:
        printf("\n\nYou chose the knife");
        srand(time(NULL));
        damage = rand() % 11 + 10;
        printf("\nYou inflicted %d damage to your opponent", damage);
        life -= damage;
        printf("\nCurrent opponent life is %d", life);
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
    case 1:
        randomizedDamage();
        break;
    case 0:
        printf("End");
        break;
    default:
        printf("Invalid input");
    }
}