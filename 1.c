
#include <stdio.h>

int main()
{
    FILE *FilePointer = fopen("1.txt", "r");
    int CharCount = 0;

    int WordCount = 1;
    int LineCount = 1;

    // Flags for counting words and lines
    int NextIsWord = 0;
    int NextIsLine = 0;
    char ch;
    if(FilePointer == NULL){
        printf("Error While Reading File");
        exit(0);
    }
    while(1){
        ch = fgetc(FilePointer);
        if(ch == ' '){
            CharCount++;
            NextIsWord = 1;
            NextIsLine = 0;
        }
        else if(ch == '\n'){
            NextIsLine = 1;
            NextIsWord = 1;
        }
        else if(ch == EOF)
            break;
        else{
            if(NextIsLine)
                LineCount++;
            if(NextIsWord)
                WordCount++;
            CharCount++;
            NextIsLine = 0;
            NextIsWord = 0;
        }

    }
    if(CharCount == 0){
        // If File Is Empty
        WordCount = 0;
        LineCount = 0;
    }
    printf("Characters(Including Space): %d ", CharCount);
    printf("\nWords: %d", WordCount);
    printf("\nLines: %d", LineCount);
}
