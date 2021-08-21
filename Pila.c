#include <stdio.h>
#include <stdlib.h>

//header #include <tp1_header.h>

#define CAPACIDAD 15

int elemento[CAPACIDAD];
int cima = -1;

void apila(int);
int desapila();
void vaciaPila();
int tamanio();
int esVacia();
int return_cima();

// fin header

int main() {
    int op, e;
    printf("\nPILA GABRIEL MARTIN POG.\n");
    do {
        printf("\nElija su opcion\n");
        printf("1. Agregar elemento\n");
        printf("2. Quitar ultimo elemento\n");
        printf("3. Verificar ultimo elemento ingresado\n");
        printf("4. Verificar tamaño de la pila\n");
        printf("5. Vaciar pila\n");
        printf("6. Verificar si la pila esta vacia\n");
        printf("7. Salir\n");
        printf("\n");
        //OPCIONES
        
        printf("Su eleccion:");
        scanf_s("%d", &op);
        printf("\n");
        switch (op) {
        case 1:
            printf("Ingrese un nuevo elemento:");
            scanf_s("%d", &e);
            printf("\n");
            apila(e);
            break;

        case 2:
       
            printf("Ultimo elemento eliminado\n Su elemento anterior era %d\n", desapila());
            break;

        case 3:
            if (tamanio() == 0) printf("Lista vacia\n");
            else printf("Ultimo elemento ingresado es %d\n", return_cima());
            break;

        case 4:
            printf("El tamaño de la pila es de %d elemento/s\n", tamanio());
            break;

        case 5:
            if (tamanio() == 0) {
                printf("La pila ya esta vacia\n");
            }
            else {
                vaciaPila();
                printf("La pila ha sido vaciada\n");
            }
            break;

        case 6:
            if (esVacia() == 1)
            {
                printf("La lista esta vacia\n");
            }
            else printf("La lista no esta vacia y contiene %d elemento/s\n", tamanio());
            break;

        case 7:
            printf("Usted ha elegido salir, presione cualquier tecla para continuar\n");
            break;

        }


    } while (op != 7);

    return 0;
}
    


void apila(int e){
	int tam = tamanio();
    if (tam == CAPACIDAD) {
        printf("Lista llena\n");
    }
    else {
        cima = cima + 1;
        elemento[cima] = e;
    }
}


int desapila(){
    elemento[cima] = 0;
    cima = cima - 1;
       int top = elemento[cima];
       return top;
}

int return_cima() {
    int top = elemento[cima];
    return top;

}

void vaciaPila() {
    int i;
    for (i = 0; i < CAPACIDAD; i++) {
        elemento[i] = 0;
    }
    cima = -1;

}


int tamanio(){
    int tam = cima + 1;
    return tam;
}
int esVacia() {
    if (cima == -1) return 1; //true
    else return 0;            //false
 
}



