#include <stdio.h>
#include <stdbool.h>


void pRecords() {
    printf("\n\nYou have entered the Print all records function\n\n");
}

void aRecord() {
    // Declare required vars
    int numPart;
    char namePart[40];
    float sizePart;
    char metricPart[10];
    float costPart;

    // User inputs 
    printf("\nEnter part number: \n");
    scanf("%d", &numPart);
    printf("\nEnter part name: \n");
    scanf("%s", namePart);
    printf("\nEnter part size: \n");
    scanf("%f", &sizePart);
    printf("\nEnter part metric: \n");
    scanf("%s", metricPart);
    printf("\nEnter part cost: \n");
    scanf("%f", &costPart);

    // Print user inputs
    printf("\nYou entered\n");
    printf("Part number = %d\n", numPart);
    printf("Part name = %s\n", namePart);
    printf("Part size = %f\n", sizePart);
    printf("Part size metric = %s\n", metricPart);
    printf("Part cost = %f\n", costPart);
}

void dRecord() {
    printf("\nYou have entered the delete last record function\n");
}

void numRecords() {
    printf("\nYou have entered the Print number of records function\n");
}

void sizeDB() {
    printf("\nYou have entered the Print database size function\n");
}

void numChange(bool print) {
    static int change = 0;

    if(print){
        printf("\nYou have modified the database %d times\n", change);
    }
    else{
        change++;
        printf("\n%d modifications so far\n");
    }
}

int main() {
    int loop = 6;
    int select;

    while(loop <= 6){
        printf("\nParts Menu\n\n");
        printf("\n1) Print all records\n");
        printf("\n2) Add record\n");
        printf("\n3) Delete the last record\n");
        printf("\n4) Print number of records\n");
        printf("\n5) Print database size\n");
        printf("\n6) Print number of changes\n");
        printf("\n7) Exit\n");

        printf("\nPlease enter your selection >\n");
        scanf("%d", &select);

        switch(select) {
            case 1:
                pRecords();
                break;
            
            case 2:
                aRecord();
                break;

            case 3:
                dRecord();
                break;

            case 4:
                numRecords();
                break;

            case 5:
                sizeDB();
                break;

            case 6:
                char input;
                printf("\nTo print out the number of changes to database, type'a'\n");
                printf("\nTo increment the number of changes to database by 1, type'b'\n");
                scanf(" %c", &input);

                if(input == 'a'){
                    numChange(true);
                }
                else if(input == 'b'){
                    numChange(false);
                }
                else{
                    printf("Invalid input, Try again.");
                }
                break;

            case 7:
                printf("\nEXITING...\n");
                loop = 7;
                break;

            default:
                printf("\nInvalid selection. Enter a value 1-6\n");
                break;
        }

    }
    return 0;
}