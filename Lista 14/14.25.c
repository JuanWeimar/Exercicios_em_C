#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char nome[8][30], aux[30];
int i = 0;


for(i = 0; i < 8; i++){
	printf("Entre com a %d. palavra: ", i + 1);
	fgets(nome[i], 30, stdin);
}


	int j;

	for(j=0; j<8; j++)
	{
	strcpy(aux,nome[j]);
	i = j-1;
	while(i >= 0 && strcmp(nome[i], aux) > 0)
	{
	strcpy(nome[i+1],nome[i]);
	i--;
	}
	strcpy(nome[i+1],aux);
	}


printf("\n\nNomes em ordem alfabetica: \n");
for(i = 0; i < 8; i++){
	if(i==0)
	{
	printf("\n%s",nome[i]);
	}
	if(i==7)
	printf("\n%s",nome[i]);
}
}

