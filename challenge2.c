#include <stdio.h>

int main()
{
    int i, PP, PG;
    int arr[10];

    for (i = 0; i < 10; i++) 
    {
        printf("Entrez un nombre entier %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    PP = PG = arr[0];

    for (i = 1; i < 10; i++)
    {
        if (arr[i] > PG)
        {
            PG = arr[i];
        }
        if (arr[i] < PP)
        {
            PP = arr[i];
        }
    }

    printf("Tableau des nombres : ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nLe nombre le plus petit est : %d\n", PP);
    printf("Le nombre le plus grand est : %d\n", PG);

    return 0;
}