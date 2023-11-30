#include<stdio.h>
#include<stdlib.h>

void main (){
	int lista[7];
	int n;
	int i;
	int c;

printf("Digite 7 números \n");

for(n=1;n<=7;n++){
       scanf ("%d", &lista[n]);
}

for(n=1;n<=7;n++){
       for(i=n;i<=7;i++){

if(lista[n]>lista[i]){
c=lista[n];
lista[n]=lista[i];
lista[i]=c;
}}}

printf("Números em ordem crescente:\n");
for (n=1;n<=7;n++){
	printf("%d \n", lista[n]);
}
}



