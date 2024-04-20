#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<time.h>

#define LIN 3
#define COL 3

	int main(){
		setlocale(LC_ALL,"");
		
		char materia[3][200];
		float notas[LIN][COL];
		float mediaP[3],soma=0,peso[3];
		int c,l;
		
		
		
			for(l=0;l<LIN;l++){
				fflush(stdin);
				printf("%dº Matéria: ", l+1);
				scanf("%s", &materia[l]);
			
				for(c=0;c<COL;c++){
					
					
					do{
						printf("Nota %dª Unidade: ", c+1);
						scanf("%f", &notas[l][c]);
						printf("\tPESO: ");
						scanf("%f",&peso[c]);
						if(notas[l][c]<0 || notas[l][c]>10){
						printf("\nNOTA INVALIDA!!!!!\n");
						}if(notas[l][c]>=0 || notas[l][c]<=10){
							soma+=peso[c];
						}
						
						
					}while(notas[l][c]<0 || notas[l][c]>10);
					
			 }
				   	printf("%f", soma);
				   	for(c=0;c<COL;c++){
					   
					mediaP[c]=(notas[c][0]*peso[0]+notas[c][1]*peso[1]+notas[c][2]*peso[2])/soma;
					}	
				soma=0;
			 system("cls");
			}
			printf("==== RESULTADOS ====\n\n");
			for(l=0;l<LIN;l++){
				printf("\nDisciplina: %s\n", materia[l]);
			
				for(c=0;c<COL;c++){
					printf("\n%dª Nota: %.2f\tPESO: %.0f", c+1, notas[l][c],peso[c]);
					
					
				}	
				printf("\n\nMédia Ponderada: %.2f", mediaP[l]);		
			}
		
	
		return 0;
	

	}
