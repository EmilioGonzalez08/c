#include <stdio.h>

void outfit_verano();
void outfit_invierno();
void outfit_otonio();
void outfit_primavera();

int main()
{
    int opc, opc2, flag = 0;
    char nombre[50];
    
    printf("\nIntroduce tu primer nombre\n");
    scanf("%s", nombre);
    do
    {
        printf("------ Bienvenido %s ------", nombre);
        printf("\nElige estacion: \n\n");
        printf("1. Verano\n");
        printf("2. Invierno\n");
        printf("3. Otonio\n");
        printf("4. Primavera\n");
        printf("5. Salir\n");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            outfit_verano();
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
            printf("\n\nLa opcion que coloco, es incorrecta\n\n ");
            break;
        }
        printf("¿Estas de acuerdo con la seleccion? presiona 0 si lo estas, u otro numero si quieres otra recomendacion\n");
        fflush(stdin);
        scanf("%d", &flag);

        if (flag != 0){
            
            switch (opc)
            {
            case 1: //Verano
                switch (opc2)
                {
                case 1: //Mujer formal segunda opcion
                    printf("\nEntonces, tal vez te agradaria:\nVestido estilo pichi color crema acompaniado de bolso negro con tacones negros. Puedes complementar con lentes de sol y un collar negro \n\n");
                    break;
                case 2: //Mujer informal segunda opcion

                    printf("\nEntonces, tal vez te agradaria:\n\nBlusa blanca con disenio minimalista dorado , pantalones rosa palisandro con cinturon de tela del mismo color, tenis blancos con disenios crema y bolso de mano de terciopelo cafe con disenios crema.\n");
                    break;
                case 3: // Hombre formal segunda opcion
                    printf("\nEntonces, tal vez te agradaria:\nCamisa de rayas oscura debajo de un saco negro abierto, pantalon blanco y cinturon negro con zapatos negros\n\n");

                    break;
                case 4: //Hombre Informal segunda opcion
                    printf("\nEntonces, tal vez te agradaria:\nPlayera blanca con rayas negras, short ajustado de mezclilla y mocasines azul oscuro\n\n");

                    break;
                }
            case 2: // Invierno
                switch (opc2)
                {
                case 1:
                    printf("\nEntonces, tal vez te agradaria:\n Unos pantalones azules con una camisa blanca acompañada de un blazer color cafe claro, zapatillas blancas y un bolso de mano negro.\n\n");
                    break;
                case 2:
                    printf("\nEntonces, tal vez te agradaria:\n un jersey negro con unos leggins negros que combinen con unos tennis de color negro y una chaqueta de color blanco.\n\n");
                    break;
                case 3:
                    printf("\nEntonces, tal vez te agradaria:\nUn sueter cafe con una chamarra negra que combine con unos pantalones negros y unos zapatos color cafe\n\n");
                    break;
                case 4:
                    printf("\nEntonces, tal vez te agradaria:\nUnos jeans negros que combinen con una camiseta blanca,un abrigo color café y unos zapatos blancos\n\n");
                    break;
                }
            case 3: //otonio
                switch (opc2)
                {
                case 1:
                    printf("\nEntonces, tal vez te agradaria:\nUna falda de lapiz color negro y una blusa blanca, acompáñalo con un blaiser color rojo de tu preferencia.\n\n");
                    break;
                case 2:
                    printf("\nEntonces, tal vez te agradaria:\nBotas de cuero, los jeans ligeramente desgastados, un suéter liso color rosa y un gorro gris puenden ayudarte\n\n");
                    break;
                case 3:
                    printf("\nEntonces, tal vez te agradaria:\nel hombre en otoño también puede vestir unos pantalones chinos color café claro , una camisa azul ligeramente oscuro y unos zapatos negros de vestir.\n\n");
                    break;
                case 4:
                    printf("\nEntonces, tal vez te agradaria:\nPuedes usar unos jeans desgastados, una playera blanca con una chaqueta de cuero, junto con unos zapatos negros, sin duda una opción a tomar en cuenta\n\n");
                    break;
                }
                break;              
            case 4: //primavera
                switch (opc2)
                {
                case 1:
                    printf("\nEntonces, tal vez te agradaria:\nBlusa blanca de manga media, pantalones cafés oscuros con bolso de mano negro y tacones.\n\n");
                    break;
                case 2:
                    printf("\nEntonces, tal vez te agradaria:\nBlusa blaca sin mangas holgada, jeans de mezclilla semirotos y loafers cafés\n\n");
                    break;
                case 3:
                    printf("\nEntonces, tal vez te agradaria:\nCamisa azul de manga larga, pantalon negro ajustado con zapatos negros y reloj.\n\n");
                    break;
                case 4:
                    printf("\nEntonces, tal vez te agradaria:\nCamisa blanca de manga corta con shorts de mezclilla largos, doblados y tenis blancos\n\n");
                    break;
                }
            }
            printf("\n\n");
        }else {
            printf("\nQue bien: te aseguramos que te verás genial\n");
        }
    } while (opc != 5);
    return 0;
}
