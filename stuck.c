#include <stdio.h>

//double penge (double *euro, double *kroner, double *rubler, double *yen, double dollar);



int main(void) {

   double dollar , euro=0.89,kroner= 6.66, rubler= 66.43, yen=119.9;
    /*printf("indtast dollars:\n");
    scanf("%lf", &dollar);

    penge (&euro, &kroner, &rubler, &yen,dollar);

    printf("euro = %.2lf\nkroner = %.2lf\nrubler = %.3lf\nyen = %.3lf\n",euro, kroner, rubler ,yen);

*/
    char valuta;
    printf("hvilke valuta e ,k, r, y?:\n");
    scanf("%c",&valuta);
if (valuta=='e'){

for(int i = 1; i<=100; i++){
    i *= 1;
    printf("%d\n",i);
}


}




    return 0;

}
/*double penge (double *euro, double *kroner, double *rubler, double *yen, double dollar){

    *euro = 0.89* dollar;
    *kroner = 6.66 * dollar;
    *rubler= 66.43 *dollar;
    *yen = 119.9 *dollar;

}*/





/* Printer valuta fra 1 til 100 ud, mangler dog endnu funktioner, problemer med i. :) */

/* Skriv et C program som konverterer valuta i dollars til euro, kroner, rubler og yen. I kan antage en én dollar er
 * 0.89 euros, 6.66 kroner, 66.43 rubler og 119.9 yen.
I denne opgave skal der indgå en funktion med én input parameter (dollar-beløbet), og fire output parametre
 (svarende til de fire andre valutaer).
Brug funktionen til at udskrive en omregningstabel til omregning af 1, 2, 3, ... 100 dollars til de fire andre valutaer.*/


/*
#include <stdio.h>

void dollar_i_valuta(double *dollarUserInput, double *dollarIEuro, char *valuta, int *sum);
void get_input(double *dollarUserInput, char *valuta);

int main(void) {
    double dollarUserInput;
    char valuta;
    int sum = 0;
    double dollarIEuro = 0;
    get_input(&dollarUserInput, &valuta);
    // dollar_i_valuta(&dollarUserInput, &dollarIEuro, &valuta, &sum);

    if(valuta == 'e'){
        for (int i = 1; i <= 100; ++i) {
            sum = i;
            dollarIEuro = i * 0.89;
            printf("%d = %lf \n", sum, dollarIEuro);
        }
    }else if(valuta == 'k'){
        for (int i = 1; i <= 100; ++i) {
            sum = i;
            dollarIEuro = i * 6.66;
            printf("%d = %lf \n", sum, dollarIEuro);
        }
    }else if(valuta == 'r'){
        for (int i = 1; i <= 100; ++i) {
            sum = i;
            dollarIEuro = i * 66.43;
            printf("%d = %lf \n", sum, dollarIEuro);
        }
    }else if(valuta == 'y'){
        for (int i = 1; i <= 100; ++i) {
            sum = i;
            dollarIEuro = i * 119.9;
            printf("%d = %lf \n", sum, dollarIEuro);
        }
    }else {
        printf("Wrong input");
    }

    return 0;
}

void get_input(double *dollarUserInput, char *valuta){
    // printf("Skriv et antal af doller: ");
    // scanf(" %lf", dollarUserInput);
    printf("Vaelg Euro, Kroner, Rubler eller Yen (e,k,r,y): ");
    scanf(" %c", valuta);
}



void dollar_i_valuta(double *dollarUserInput, double *dollarIEuro, char *valuta, int *sum){

}
*/

