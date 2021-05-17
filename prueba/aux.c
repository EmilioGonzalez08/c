#include <stdio.h>

int opc2;
char nombre[50];

int outfit_verano() {
    
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
}

int outfit_invierno(){
    
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
}

int outfit_otonio(){
    
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
}

int outfit_primavera(){
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
}
