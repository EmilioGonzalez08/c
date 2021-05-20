#include "header.h"

int main()
{
    int opc, opc2; //decalres the variables
    char nombre[50];
    
    printf("\nWrite your first name:\n");
    scanf("%s", nombre);
    fflush(stdin);
    do
    {
        printf("------ Welcome %s! ------", nombre); // starts the main menu
        printf("\nChoose a season: \n\n");
        printf("1. Summer\n");
        printf("2. Winter\n");
        printf("3. Fall\n");
        printf("4. Spring\n");
        printf("5. Exit\n");
        scanf("%d", &opc);
        fflush(stdin);
        switch (opc)
        {
        case 1:
            outfit_verano(); // calling the functions
            break;
        case 2:
            outfit_invierno();
            break;
        case 3:
            outfit_otonio();
            break;
        case 4:
            outfit_primavera();
            break;
        case 5:
            break;
        default:
            printf("\n\nThat option is not valid, please write a number from 1 to 5.\n\n ");
            break;
        }
       
    } while (opc != 5); // loops until the user choose 5
    return 0;
}
