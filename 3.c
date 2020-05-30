#include<stdio.h>

int main(){
    FILE *FilePointer = fopen("StudentData.txt", "a");
    int N;
    printf("Enter Number Of Students: ");
    scanf("%d", &N);
    char name[30];
    float marks;
    // For Re Usability Of Data formatting is Important
    char DataDelimitter = ';', LineDilimitter = '\n';
    for(int i=0;i<N;i++){
        getchar();
        printf("Enter Name of Student %d: ", i+1);
        gets(name);
        printf("Enter Marks of Student %d: ", i+1);
        scanf("%f", &marks);
        fprintf(FilePointer, "%s%c%f%c", name, DataDelimitter, marks, LineDilimitter);
    }
    return 0;
}
