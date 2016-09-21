#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float nota1,nota2,nota3,notaF,trabajo,notaS,notaT,prom3p,promexf,promtra,continuar;
	int CalificacionFinal;
	
	system("cls");
	fflush(stdin);
	system("color F0");
	
	printf("\t\t\tCalificaciones\t\t");
	
	do{
		printf("\n\n\t\tNota primer parcial: ");
		scanf("%f",&nota1);
		printf("\n\t\tNota segundo Parcial: ");
		scanf("%f",&nota2);
		printf("\n\t\tNota tercer parcial: ");
		scanf("%f",&nota3);
		printf("\n\t\tNota Examen Final: ");
		scanf("%f",&notaF);
		printf ("\n\t\tNota trabajo final: ");
		scanf("%f",&trabajo);
		notaS=nota1+nota2+nota3;
		notaT=notaS/3;
		prom3p=55*notaT/100;
		printf("\n\t\tPorcentaje de los 3 Parciales: %f",prom3p);
		promexf=notaF*30/100;
		printf("\n\t\tPorcentaje del examen final: %f ",promexf);
		promtra=15*trabajo/100;
		printf("\n\t\tPorcentaje del trabajo final: %f ",promtra);
		CalificacionFinal=prom3p+promexf+promtra;
		printf("\n\t\tCalificacion final: %d ",CalificacionFinal);
		printf("\n\n\t\tPresiona (1) Para volver a iniciar: ");
		scanf("%f",&continuar);
		system("cls");
		printf("\t\t\tCalificaciones\t\t");
	}
	while(continuar==1);
	printf("\n\n\n\n\n\n\n\n\t\t\t");
	printf("Hasta luego");
	return 0;
}
