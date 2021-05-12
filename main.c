#include <stdio.h>
#include <stdlib.h>

/**< pointers til filerne */
FILE *fp;
FILE *fp_kryp;
FILE *fp_dekryp;

/**< char til at læse og skrive i filerne */
char c;

/**< Deklaretioner af alle funktionerne */
void Kryptering(FILE *fromFp, FILE *toFp);
void DeKryptering(FILE *fromFp, FILE *toFp);

int main()
{
    fp = fopen("opgave.txt","r+");
    fp_kryp = fopen("krypteret.txt", "w+");
    fp_dekryp = fopen("dekrypteret.txt", "w+");

    if (fp == NULL)
        printf("Kunne ikke finde filen");
    if (fp_kryp == NULL)
        printf("Kunne ikke finde filen");
    if (fp_dekryp == NULL)
        printf("Kunne ikke finde filen");


    Kryptering(fp, fp_kryp);
    DeKryptering(fp_kryp, fp_dekryp);

    fclose(fp);
    fclose(fp_kryp);
    fclose(fp_dekryp);
    return 0;
}

/************************************************
 *  Beskrivelse: Kryptere en fil                *
 ************************************************
 *  Input: to pointers hvilken fil der skal     *
 *  krypteres og hvor den krypterede fil skal   *
 *  skrives                                     *
 ************************************************/
void Kryptering(FILE *fromFp, FILE *toFp)
{
    while (fscanf(fromFp, "%c", &c) != EOF){
        fputc(c+1, toFp);
    }
}

/************************************************
 *  Beskrivelse: Dekryptere en fil              *
 ************************************************
 *  Input: to pointers hvilken fil der skal     *
 *  dekrypteres og hvor den dekrypterede fil    *
 *  skal skrives                                *
 ************************************************/
void DeKryptering(FILE *fromFp, FILE *toFp)
{
    rewind(fromFp);
    while (fscanf(fromFp, "%c", &c) != EOF){
        fputc(c-1, toFp);
    }
}
