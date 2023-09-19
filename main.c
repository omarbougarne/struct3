#include <stdio.h>
#include <stdlib.h>
struct employe {
    char nom[20];
    float salaire;
    float horaire;
};
int main()
{
    struct employe employe1;

    printf("Entrer vous info:");

    printf("Le nom:\n");
    scanf("%s", employe1.nom);
    printf("L salaire: \n");
    scanf("%f", &employe1.salaire);
    printf("L'horaire:\n");
    scanf("%f", &employe1.horaire);

    float total = employe1.salaire * employe1.horaire;

    printf("Le salaire total est: %.2f", total);

    return 0;
}
