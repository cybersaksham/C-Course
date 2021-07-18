/*
kms to miles - 0.621371192
inches to foot - 0.083333333
cms to inches - 0.393700787
pound to kgs - 0.45359237
inches to metres - 0.0254
*/

// float convert(float num)
// {
// }

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char input;
    float kmstomiles = 0.621371192;
    float inchestofoot = 0.083333333;
    float cmstoinches = 0.393700787;
    float poundtokgs = 0.45359237;
    float inchestometres = 0.0254;
    float first, second;

    while (1)
    {
    start:
        printf("Enter the input character. q to quit\n1 - kms to miles\n2 - inches to foot\n3 - cms to inches\n4 - pound to kgs\n5 - inches to metres\n");
        scanf(" %c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting tha program.....");
            goto end;
            break;
        case '1':
            printf("Enter quantity in terms of first unit - ");
            scanf("%f", &first);
            second = first * kmstomiles;
            printf("%f Kms is equal to %f Miles\n", first, second);
            goto start;
            break;
        case '2':
            printf("Enter quantity in terms of first unit - ");
            scanf("%f", &first);
            second = first * inchestofoot;
            printf("%f Inches is equal to %f Foots\n", first, second);
            goto start;
            break;
        case '3':
            printf("Enter quantity in terms of first unit - ");
            scanf("%f", &first);
            second = first * cmstoinches;
            printf("%f Cms is equal to %f Inches\n", first, second);
            goto start;
            break;
        case '4':
            printf("Enter quantity in terms of first unit - ");
            scanf("%f", &first);
            second = first * poundtokgs;
            printf("%f Pounds is equal to %f Kgs\n", first, second);
            goto start;
            break;
        case '5':
            printf("Enter quantity in terms of first unit - ");
            scanf("%f", &first);
            second = first * inchestometres;
            printf("%f Inches is equal to Meters%f\n", first, second);
            goto start;
            break;

        default:
            break;
        }
    }

end:
    return 0;
}
