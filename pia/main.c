#include <stdio.h>

int main(void)
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
            printf("\n\n1. Mujer formal\n\n2. Mujer Informal\n\n3. Hombre Formal\n\n4. Hombre Informal\n\n");
            scanf("%d", &opc2);
            switch (opc2)
            {
            case 1:
                printf("\n\nHola %s. Podrias usar:\nCamisa azul con rayas blancas con pantalones blancos acompaniada de un cinturon, bolso de mano, y tacones tipo Mary-Janes cafes.\n\n", nombre);
                break;
            case 2:
                printf("\n\nHola %s. Podrias usar:\nBlusa de manga corta color vino con bolso de mano y falda media de mezclilla del mismo color, acompaniado de loafers negros con disenio de preferencia\n\n", nombre);
                break;
            case 3:
                printf("\n\nHola %s. Podrias usar:\nCamisa blanca semi abierta, pantalon beige,  con zapatos cafes, y cinturon del mismo color.\n\n", nombre);
                break;
            case 4:
                printf("\n\nHola %s. Podrias usar:\nPlayera negra con jeans ajustados y  tenis blancos. Puedes complementar con un reloj plateado.\n\n", nombre);
                break;
            }
            break;
        case 2:
            printf("\n\n1. Mujer formal\n\n2. Mujer Informal\n\n3. Hombre Formal\n\n4. Hombre Informal\n\n");
            scanf("%d", &opc2);
            switch (opc2)
            {
            case 1:
                printf("\n\nHola %s. Podrias usar:\nTop blanco acompaniado de un chaleco blanco con un blazer negro que combine con un pantalon cafe, zapatillas blancas y un bolsillo de mano negro.\n\n", nombre);
                break;
            case 2:
                printf("\n\nHola %s. Podrias usar:\nUn slouchy de mezclilla con un top negro y un abrigo blanco que combine con unas zapatillas blancas.\n\n", nombre);
                break;
            case 3:
                printf("\n\nHola %s. Podrias usar:\nUna camisa negra con unos pantalones chinos color negro, que combinen con un abrigo gris y unos zapatos negros con un reloj en la munieca.\n\n", nombre);
                break;
            case 4:
                printf("\n\nHola %s. Podrias usar:\nUnos jeans de mezclilla con unos zapatos blancos que combinen con una camisa y chamarra negra.\n\n", nombre);
                break;
            }
            break;
        case 3:
            printf("\n\n1. Mujer formal\n\n2. Mujer Informal\n\n3. Hombre Formal\n\n4. Hombre Informal\n\n");
            scanf("%d", &opc2);
            switch (opc2)
            {
            case 1:
                printf("\n\nHola %s. Podrias usar:\nTe puede interesar un vestido color negro liso y una bolsa de mano color blanco, tus aretes color plata. \n\n", nombre);
                break;
            case 2:
                printf("\n\nHola %s. Podrias usar:\nLas botas altas forma parte de la Moda de otonio, por lo que unas botas negras altas, una bufanda color beige, unos jeans y un cardigan negro puede ser tu opcion.\n\n", nombre);
                break;
            case 3:
                printf("\n\nHola %s. Podrias usar:\nel hombre en otonio puede vestir unos pantalones chinos color cafe oscuro, una camisa blanca y unos zapatos negros de vestir, sin duda la mejor opcion \n\n", nombre);
                break;
            case 4:
                printf("\n\nHola %s. Podrias usar:\nUn pantalon color vino, unos tenis tipo converse lisos blancos y una playera color blanca sin estampado, un sueter de color oscuro de tu preferencia para acompaniar\n\n", nombre);
                break;
            }
            break;
        case 4:
            printf("\n\n1. Mujer formal\n\n2. Mujer Informal\n\n3. Hombre Formal\n\n4. Hombre Informal\n\n");
            scanf("%d", &opc2);
            switch (opc2)
            {
            case 1:
                printf("\n\nHola %s. Podrias usar:\nOpta por colores solidos, un conjunto de falda y blazer te quedarian perfectos para esta ocasion importante, acompaniados con tus plataformas de un color que contraste, siempre con seguridad al caminar\n\n", nombre);
            case 2:
                printf("\n\nHola %s. Podrias usar:\nLa blusas florales seran tu mejor aliado, combianlo con un jean pegado al cuerpo y unos flats del mismo color de tu blusa\n\n", nombre);
                break;
            case 3:
                printf("\n\nHola %s. Podrias usar:\nUn saco sera tu prenda mas llamativa, opta por un color conservador paero diferente, puede ser un volor vino. Puedes usar un pantalon de vestir o jeans negros, ¡el saco siempre te hace ver elegante! \n\n", nombre);
                break;
            case 4:
                printf("\n\nHola %s. Podrias usar:\nOpta por algo simple como una camisa de botones con estampado o lisa, combinalo con tus jeans negros y tus tennis favoritos, ¡simple pero fabuloso!\n\n", nombre);
                break;
            }
            break;
        case 5:
            break;
        default:
            printf("\n\nla opcion que coloco es incorrecta\n\n ");
            break;
        }
        printf("¿estas de acuerdo con la seleccion? presiona 0 si lo estas, u otro numero si quieres otra recomendacion\n");
        fflush(stdin);
        scanf("%d", &flag);

        if (flag != 0)
        //Empiezan las segundas opciones
        {
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
