#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

pthread_mutex_t mutex;

void* hilo_funcion_con_mutex(void* arg){
	pthread_mutex_lock(&mutex);
	printf("Hola desde hilos %ld\n)",(long)arg);
	pthread_mutex_unlock(&mutex);
	pthread_exit(NULL);
}

void* hilo_funcion(void* arg) {
	printf("Hola desde el hilo %ld\n", (long)arg);
	pthread_exit(NULL);
}
int main() {
	pthread_t hilo1, hilo2;
    	// Creación de los hilos
    	pthread_create(&hilo1, NULL, hilo_funcion_con_mutex, (void*)1);
	pthread_create(&hilo2, NULL, hilo_funcion_con_mutex, (void*)2);
    	// Esperar a que los hilos terminen
    	pthread_join(hilo1, NULL);
	pthread_join(hilo2, NULL);
	// Destruir el mutex
	pthread_mutex_destroy(&mutex);
	printf("Finalizó la ejecución del programa principal\n");
	return 0;
}
