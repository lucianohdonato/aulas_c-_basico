#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
char palavra[40];
int i, tamanho;

printf("Digite uma palavra: ");
fflush(stdin);
gets(palavra);

tamanho=strlen(palavra);

for(i=tamanho-1; i>=0; i--)
printf("%c",palavra[i]);
}
