#include<stdio.h>

int main(){
    FILE *DATAPointer = fopen("DATA.txt", "r");
    FILE *ODDPointer = fopen("ODD.txt", "w");
    FILE *EVENPointer = fopen("EVEN.txt", "w");
    if(DATAPointer == NULL || ODDPointer == NULL || EVENPointer == NULL){
        printf("Error Opening File");
        exit(0);
    }
    // For separating the numbers during writing
    char delimitter = ' ';
    int tmp;
    while((fscanf(DATAPointer, "%d", &tmp)) != EOF){
        if(tmp % 2 == 0){
            fprintf(EVENPointer, "%d%c", tmp, delimitter);
        }
        else
            fprintf(ODDPointer, "%d%c", tmp, delimitter);
    }
    return 0;
}
