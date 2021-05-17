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
