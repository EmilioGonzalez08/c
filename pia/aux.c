#include <stdio.h>

int opc2, alt;
char nombre[50];

void outfit_verano() {  // declarating the functions per season
    
    printf("\n\n1. Formal woman \n\n2. Informal Woman \n\n3. Formal Man \n\n4. Casual Man\n\n");
            scanf("%d", &opc2);
            fflush(stdin);
            switch (opc2)
            {
            case 1:
                printf("\n\nHello %s. You could wear: \nBlue shirt with white stripes with white pants accompanied by a belt, handbag, and brown Mary-Janes heels.\n\n", nombre);
                printf("\nDid you liked our selection? 0 if you want other option, and any other number if you are okay with the selection\n");
                scanf("%d", &alt);
                fflush(stdin);
                if(alt==0){
                    printf("\nThen you might like a Cream-colored pinafore dress accompanied by a black bag with black heels. You can complement with sunglasses and a black necklace\n\n");
                } else{
                    alt != 0;
                    printf("\n\nCool! we're sure you are going to look great ;)\n\n");
                }
                break;
            case 2:
                printf("\n\nHello %s. You could use: \nWine-colored short-sleeved blouse with handbag and denim mid-length skirt of the same color, accompanied by black loafers with a preferred design\n\n", nombre);
                 printf("\nDid you liked our selection? 0 if you want other option, and any other number if you are okay with the selection\n");
                scanf("%d", &alt);
                fflush(stdin);
                if(alt==0){
                    printf("\nThen maybe you'd like: \n\nWhite blouse with gold minimalist design, rosewood pink pants with matching colored fabric belt, white sneakers with cream designs and brown velvet clutch bag with cream designs.\n\n");
                } else{
                    alt != 0;
                    printf("\n\nCool! we're sure you are going to look great ;)\n\n");
                }
                break;
            case 3:
                printf("\n\nHello %s. You could use: \nWhite semi-open shirt, beige pants, with brown shoes, and a belt of the same color.\n\n", nombre);
                 printf("\nDid you liked our selection? 0 if you want other option, and any other number if you are okay with the selection\n");
                scanf("%d", &alt);
                fflush(stdin);
                if(alt==0){
                    printf("\nThen maybe you would like: \nDark striped shirt under an open black jacket, white pants and black belt with black shoes\n\n");
                } else{
                    alt != 0;
                    printf("\n\nCool! we're sure you are going to look great ;)\n\n");
                }
                break;
            case 4:
                printf("\n\nHello %s. You could wear: \nBlack shirt with skinny jeans and white sneakers. You can complement with a silver watch.\n\n", nombre);
                 printf("\nDid you liked our selection? 0 if you want other option, and any other number if you are okay with the selection\n");
                scanf("%d", &alt);
                fflush(stdin);
                if(alt==0){
                    printf("\nThen maybe you'd like: \nWhite shirt with black stripes, tight denim shorts and dark blue loafers\n\n");
                } else{
                    alt != 0;
                    printf("\n\nCool! we're sure you are going to look great ;)\n\n");
                }
                break;
            }
}

void outfit_invierno(){
    
    printf("\n\n1. Formal woman \n\n2. Informal Woman \n\n3. Formal Man \n\n4. Casual Man\n\n");
            scanf("%d", &opc2);
            fflush(stdin);
            switch (opc2)
            {
            case 1:
                printf("\n\nHello %s. You could use: \nWhite top accompanied by a white vest with a black blazer that matches with brown pants, white sneakers and a black hand pocket.\n\n", nombre);
                 printf("\nDid you liked our selection? 0 if you want other option, and any other number if you are okay with the selection\n");
                scanf("%d", &alt);
                fflush(stdin);
                if(alt==0){
                    printf("\nSo maybe you would like: \nBlue pants with a white shirt accompanied by a light brown blazer, white sneakers and a black handbag.\n\n");
                } else{
                    alt != 0;
                    printf("\n\nCool! we're sure you are going to look great ;)\n\n");
                }
                break;
            case 2:
                printf("\n\nHello %s. You could wear: \nA denim slouchy with a black top and a white coat to match white sneakers.\n\n", nombre);
                 printf("\nDid you liked our selection? 0 if you want other option, and any other number if you are okay with the selection\n");
                scanf("%d", &alt);
                fflush(stdin);
                if(alt==0){
                    printf("\nSo maybe you would like: \n a black sweater with black leggings to match black tennis shoes and a white jacket.\n\n");
                } else{
                    alt != 0;
                    printf("\n\nCool! we're sure you are going to look great ;)\n\n");
                }
                break;
            case 3:
                printf("\n\nHello %s. You could wear: \nA black shirt with black chinos, matching a gray coat and black shoes with a wrist watch.\n\n", nombre);
                 printf("\nDid you liked our selection? 0 if you want other option, and any other number if you are okay with the selection\n");
                scanf("%d", &alt);
                fflush(stdin);
                if(alt==0){
                    printf("\nThen maybe you would like: \nA brown sweater with a black jacket that matches with black pants and brown shoes\n\n");
                } else{
                    alt != 0;
                    printf("\n\nCool! we're sure you are going to look great ;)\n\n");
                }
                break;
            case 4:
                printf("\n\nHello %s. You could wear: \n Denim jeans with white shoes to match a black jacket and shirt.\n\n", nombre);
                 printf("\nDid you liked our selection? 0 if you want other option, and any other number if you are okay with the selection\n");
                scanf("%d", &alt);
                fflush(stdin);
                if(alt==0){
                    printf("\nThen maybe you would like: \nBlack jeans to match a white t-shirt, a brown coat and white shoes\n\n");
                } else{
                    alt != 0;
                    printf("\n\nCool! we're sure you are going to look great ;)\n\n");
                }
                break;
            }
}

void outfit_otonio(){
    
    printf("\n\n1. Formal woman \n\n2. Informal Woman \n\n3. Formal Man \n\n4. Casual Man\n\n");
            scanf("%d", &opc2);
            fflush(stdin);
            switch (opc2)
            {
            case 1:
                printf("\n\nHello %s. You could use: \nYou may be interested in a plain black dress and a white handbag, your silver earrings.\n\n", nombre);
                 printf("\nDid you liked our selection? 0 if you want other option, and any other number if you are okay with the selection\n");
                scanf("%d", &alt);
                fflush(stdin);
                if(alt==0){
                    printf("\nThen, maybe you would like: \nA black pencil skirt and a white blouse, accompany it with a red blaiser of your choice.\n\n");
                } else{
                    alt != 0;
                    printf("\n\nCool! we're sure you are going to look great ;)\n\n");
                }
                break;
            case 2:
                printf("\n\nHello %s. You could use: \nThigh boots are part of Autumn Fashion, so high black boots, a beige scarf, jeans and a black cardigan may be your option.\n\n", nombre);
                 printf("\nDid you liked our selection? 0 if you want other option, and any other number if you are okay with the selection\n");
                scanf("%d", &alt);
                fflush(stdin);
                if(alt==0){
                    printf("\nThen maybe you would like: \nLeather boots, slightly worn jeans, a plain pink sweater and a gray beanie can help you\n\n");
                } else{
                    alt != 0;
                    printf("\n\nCool! we're sure you are going to look great ;)\n\n");
                }
                break;
            case 3:
                printf("\n\nHello %s. You could use: \nthe man in autumn can wear dark brown chinos, a white shirt and black dress shoes, without a doubt the best option\n\n", nombre);
                 printf("\nDid you liked our selection? 0 if you want other option, and any other number if you are okay with the selection\n");
                scanf("%d", &alt);
                fflush(stdin);
                if(alt==0){
                    printf("\nThen you could wear a black shirt, and on top a checkered shirt of preferred color with jeans and white tennis shoes\n\n");
                } else{
                    alt != 0;
                    printf("\n\nCool! we're sure you are going to look great ;)\n\n");
                }
                break;
            case 4:
                printf("\n\nHello %s. You could use: \nA wine-colored pants, plain white converse tennis shoes and a white shirt without a print, a dark-colored sweater of your choice to accompany\n\n", nombre);
               printf("\nDid you liked our selection? 0 if you want other option, and any other number if you are okay with the selection\n");
                scanf("%d", &alt);
                fflush(stdin);
                if(alt==0){
                    printf("\nThen maybe you would like: \nyou can wear some distressed jeans, a white shirt with a leather jacket, along with some black shoes, definitely an option to consider\n\n");
                } else{
                    alt != 0;
                    printf("\n\nCool! we're sure you are going to look great ;)\n\n");
                }
                break;
            }
}

void outfit_primavera(){
    printf("\n\n1. Formal woman \n\n2. Informal Woman \n\n3. Formal Man \n\n4. Casual Man\n\n");
            scanf("%d", &opc2);
            fflush(stdin);
            switch (opc2)
            {
            case 1:
                printf("\n\nHello %s. You could use: \nOpt for solid colors, a set of skirt and blazer would be perfect for this important occasion, accompanied by your platforms of a contrasting color, always safely when walking\n\n", nombre);
                printf("\nDid you liked our selection? 0 if you want other option, and any other number if you are okay with the selection\n");
                scanf("%d", &alt);
                fflush(stdin);
                if(alt==0){
                    printf("\nSo maybe you'd like: \nWhite half-sleeved blouse, dark brown pants with black clutch bag, and heels.\n\n");
                } else{
                    alt != 0;
                    printf("\n\nCool! we're sure you are going to look great ;)\n\n");
                }
                break;
            case 2:
                printf("\n\nHello %s. You could use: \nThe floral blouses will be your best ally, combine it with a jean close to the body and flats of the same color as your blouse\n\n", nombre);
                printf("\nDid you liked our selection? 0 if you want other option, and any other number if you are okay with the selection\n");
                scanf("%d", &alt);
                fflush(stdin);
                if(alt==0){
                    printf("\nSo maybe you'd like: \nSleeveless sleeveless white blouse, semi-ripped denim jeans and brown loafers\n\n");
                } else{
                    alt != 0;
                    printf("\n\nCool! we're sure you are going to look great ;)\n\n");
                }
                break;
            case 3:
                printf("\n\nHello %s. You could use: \n A jacket will be your most striking garment, opt for a conservative color but different, it can be a wine color. You can wear dress pants or black jeans, the jacket always makes you look elegant! \n\n", nombre);
                printf("\nDid you liked our selection? 0 if you want other option, and any other number if you are okay with the selection\n");
                scanf("%d", &alt);
                fflush(stdin);
                if(alt==0){
                    printf("\nEntonces, tal vez te agradaria:\nCamisa azul de manga larga, pantalon negro ajustado con zapatos negros y reloj.\n\n");
                } else{
                    alt != 0;
                    printf("\n\nCool! we're sure you are going to look great ;)\n\n");
                }
                break;
            case 4:
                printf("\n\nHello %s. You could use: \nGo for something simple like a plain or patterned button down shirt, pair it with your black jeans and your favorite tennis shoes, simple but fabulous! \n\n", nombre);
                printf("\nDid you liked our selection? 0 if you want other option, and any other number if you are okay with the selection\n");
                scanf("%d", &alt);
                fflush(stdin);
                if(alt==0){
                    printf("\nThen maybe you'd like: \nWhite short-sleeved shirt with long, folded denim shorts and white tennis shoes\n\n");
                } else{
                    alt != 0;
                    printf("\n\nCool! we're sure you are going to look great ;)\n\n");
                }
                break;
            }

}

