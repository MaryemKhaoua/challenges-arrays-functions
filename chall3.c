#include <stdio.h>
int main()
{
    int i, j, temp;
    int arr[10];

     printf("Entrez 10 nombres entier : \n");
    for (i = 0; i < 10; i++) 
    {
        printf("arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] < arr[j])
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
        }
    }
    printf("tableau trier de plus grand au plus petit est : \n");
    for (i = 0; i < 10; i++)
    printf("arr[%d]\n", arr[i]);
    return (0);
}