/*--------------------Algoritmos--------------------
    Integrantes: Pedro Luis Espinoza Martinez.
                 Jesus Andrio Rodriguez.
                 Jair Alberto
*/
//Librerias a Utilizar.
#include <stdio.h>
#include <limits.h>
#include <windows.h>
#include <time.h>
//Prototipos de las funciones Existentes.
void dijkstra();
void  kuskra();
/*--------------------------------------Inicio-Main----------------------------------------*/
int main(){
    //Variable para ejecurar la duncion deseada.
    int n=0;
    //Impresiones para la toma de decisiones entre tareas.
    printf("Que desea ejecutar:");
    printf("\n1: Algoritmo Dijkstra.");
    printf("\n2: Algortimo Kukstra.");
    printf("\nEliga una opcion: ");
    scanf("%d",&n);
    //Switch para pedir que tarea realizara.
    switch(n){
    case 1: //Teclear el numero 1.
        dijkstra(); //Ejecucion de la fucnion del Algoritmo de Dijkstra.
    break;
    case 2: //Teclear el numero 1.
        kuskra();   //Ejecucion de la funcion del Algoritmo de Kuskra.
    break;
    //Fin Switch.
    }
}
/*--------------------------------------Fin-Main----------------------------------------*/

/*--------------------------------------Inicio-Algoritmo-Dikstra----------------------------------------*/
void dijkstra(){
    //Funciones y variables referentes a los pesos.

    //Variables para nodos, aristas, contadores, etc.
    int i=0,j=0; //Contadores Normales.
    int pesos=0;    //Vector de Pesos de las Aristas.
    int numv=0;
    int nume=0;
    //Impresiones para pedir Vertices y Aristas.
    printf("Ingrese la cantidad de Vertices a agregar: ");
    scanf("%d",&numv);
    printf("Ingrese la cantidad de Aristas a agregar: ");
    scanf("%d",&nume);
    int ady[numv][nume];
    int x=nume;
    int e[nume];    //Vector de Aristas donde se guardara el limite de aristas por el usuario.
    int v[numv];    //Vector de Nodos/Vertices donde se guardara el limite de vertices por el usuario.
    printf("===============Aristas===============");
    printf("\nAristas:\tPesos:\n\n");    //Impresion para ver mas grafico los pesos con sus Aristas.
    //for para generar numero aleatorios de los pesos a las aristas.
    for(i=0;i<=x;i++){
    //pesos[i] = limin + rand()%((limax-limin)+1);
    printf("Ingrese los pesos vertices \n");
    scanf("%d",&pesos);
	e[i]=pesos;
    printf("e%d:\t||\t%d\n",i,e[i]);
    }
    printf("\n===================================");
    printf("\n\n==============Vertices=============");
    printf("\nVertices:\tVertices:\n\n");    //Impresion para ver mas grafico las uniones entre vertices.
    //for para unir los vertices.
    for(i=0;i<=(numv-1);i++){
    printf("\nv%d:\t%d\tv",j,e[i]);
    scanf("%d",&j);
    v[i]=v[numv];
    }
    int g,h;
    for(g=0; g<nume; g++){
        for(h=0; h<nume; h++){

        }
    }
    printf("\n===================================");

}
/*--------------------------------------Fin-Algoritmo-Dikstra----------------------------------------*/

/*--------------------------------------Inicio-Algoritmo-Kuskra----------------------------------------*/
void kuskra(){
    //Variables para nodos, aristas, contadores, etc.
    int e=0;    //Aristas.
    int v=0;    //Nodos/Vertices.
    int i=0,j=0,n=0,m=0;    //Contadores Normales.
    //Impresiones para pedir datos al usuario.
    printf("Ingrese la cantidad de Vertices a agregar: ");
    scanf("%d",&n);
    printf("Ingrese la cantidad de Aristas a agregar: ");
    scanf("%d",&m);


}
