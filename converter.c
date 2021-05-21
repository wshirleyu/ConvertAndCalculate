// CS2211a 2020
// Assignment 2
// Shirley Wu
// 251082034
// SWU546
// OCT 6 2020

#include <stdio.h>
#define KMS_PER_MILE 1.609
#define LITRES_PER_GALLON 3.785
#define CMS_PER_INCH 2.540
#define FAHRENHEIT_VS_CELSIUS C*(9/4) + 32

char conversion; // choice of conversion
char direction;  // choice of conversion direction
float converted; // conversion result

float miles, kms;// distance in miles & kilometers
float litres, gallons; // measurement in litres & gallons
float cm, inches; // measurement in centimetres and in inches
float celsius, fahrenheit; // degrees in celsius and fahrenheit

/* declare conversion functions*/
float convertDistance();
float convertLiquids();
float convertLength();
float convertTemp();

int main (){
    /* use printf() to prompt user for input--choose one of the conversion choices */
    printf("Enter your conversion choice (1-5): ");
    scanf ("%c", &conversion);

    /* use while loop to loop functions in case user input is invalid */
    while(conversion!=' 1'||conversion!=' 2'||conversion!=' 3'||conversion!=' 4'||conversion!=' 5') {
        /* call corresponding conversion function based on user input, check with if statement */
        if (conversion == '1') {
            converted = convertDistance();
            break;
        } else if (conversion == '2') {
            convertLiquids();
            break;
        } else if (conversion == '3') {
            convertLength();
            break;
        } else if (conversion == '4') {
            convertTemp();
            break;
        } else if (conversion == '5') {
            printf("Program terminated.");
            return 0;
        }
        printf("Enter your conversion choice (1-5): ");
        scanf(" %c", &conversion);
    }
}

float convertDistance () {
    printf("Which way would you like to convert? Enter a direction (K/M): ");
    scanf(" %c", &direction);

    /* use while loop to loop functions in case user input is invalid */
    while (direction != 'K' || direction != 'k' || direction != 'M' || direction != 'm') {

    if (direction == 'K' || direction == 'k') {     //use if statement to check for valid user input//
        printf("Enter kilometers: ");   //prompt user to enter float value to convert
        scanf("%f", &kms);
        converted = kms / 1.609;
        printf("The conversion result is ");
        printf(" %f", converted);
        printf(" miles.");
        break;

    } else if (direction == 'M' || direction == 'm') {
        printf("Enter miles: ");
        scanf("%f", &miles);
        converted = miles * 1.609;
        printf("The conversion result is ");
        printf(" %f", converted);
        printf(" kilometers.");
        break;
    }
        printf("Which way would you like to convert? Enter a direction (K/M): ");
        scanf(" %c", &direction);
    }
}

float convertLiquids (){
    printf("Which way would you like to convert? Enter a direction (L/G): ");
    scanf(" %c", &direction);

    /* use while loop to loop functions in case user input is invalid */
    while (direction != ' L'||direction!=' l'||direction!='G'||direction!='g') {

        if (direction == 'L' || direction == 'l') {
            printf("Enter litres: ");
            scanf("%f", &litres);
            converted = litres / 3.785;
            printf("The conversion result is ");
            printf(" %f", converted);
            printf(" gallons.");
            break;
        } else if (direction == 'G' || direction == 'g') {
            printf("Enter gallons: ");
            scanf("%f", &gallons);
            converted = gallons * 3.785;
            printf("The conversion result is ");
            printf(" %f", converted);
            printf(" litres.");
            break;
        }
        printf("Which way would you like to convert? Enter a direction (L/G): ");
        scanf(" %c", &direction);
    }
}

float convertLength (){
    printf("Which way would you like to convert? Enter a direction (C/I): ");
    scanf(" %c", &direction);

    /* use while loop to loop functions in case user input is invalid */
    while (direction != 'C'||direction!='i'||direction!='I'||direction!='i') {

        if (direction == 'C' || direction == 'c') {
            printf("Enter centimetres: ");
            scanf("%f", &cm);
            converted = cm / 2.540;
            printf("The conversion result is ");
            printf(" %f", converted);
            printf(" inches.");
            break;
        } else if (direction == 'I' || direction == 'i') {
            printf("Enter inches: ");
            scanf("%f", &inches);
            converted = inches * 2.540;
            printf("The conversion result is ");
            printf(" %f", converted);
            printf(" centimetres.");
            break;
        }
        printf("Which way would you like to convert? Enter a direction (C/I): ");
        scanf(" %c", &direction);
    }
}

float convertTemp () {

    printf("Which way would you like to convert? Enter a direction (C/F): ");
    scanf(" %c", &direction);

    /* use while loop to loop functions in case user input is invalid */
    while (direction != 'c'||direction!='f'||direction!='C'||direction!='F') {

        if (direction == 'C' || direction == 'c') {
            printf("Enter degrees in celsius:");
            scanf("%f", &celsius);
            converted = (celsius * 1.8) + 32;
            printf("The conversion result is ");
            printf(" %f", converted);
            printf(" degrees fahrenheit.");
            break;
        } else if (direction == 'F' || direction == 'f') {
            printf("Enter degrees in fahrenheit: ");
            scanf("%f", &fahrenheit);
            converted = (fahrenheit - 32) / 1.8;
            printf("The conversion result is ");
            printf(" %f", converted);
            printf(" degrees celsius.");
            break;
        }
        printf("Which way would you like to convert? Enter a direction (C/F): ");
        scanf(" %c", &direction);
    }
}