#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *fp;
    char para[10000];
    fp=fopen("paragraph.txt","w+");
    int line=1, charac=0, word=1; // Initialize word count to 0
    char ch;
    printf("Enter paragraph:\n");
    gets(para);
    fprintf(fp,"%s",para);
    rewind(fp);
    // Remove fscanf(fp,"%s",para); as it's not needed
    while((ch=fgetc(fp))!=EOF) { // Add parentheses to correct the condition
        if(ch==' ' || ch=='\t' || ch=='\n') { // Consider other whitespace characters like '\t'
            word++;
        }
        else if(ch=='\n') {
            line++;
        }
        else {
            charac++;
        }
    }
    printf("Words: %d\n", word);
    printf("Lines: %d\n", line);
    printf("Characters: %d\n", charac);
    fclose(fp); // Close the file
    return 0;
}

