/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: kpoitou
 *
 * Created on 28 septembre 2018, 10:39
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>
#include <sys/syscall.h>

typedef struct {
	int v1;
	int v2;
	int v3;
}laStruct;

laStruct message; //Zone commune (variable globale)

void *ma_fonction_thread1(void *arg) {
    long tid;
    tid = syscall(SYS_gettid);
    printf("dans le thread l'argument etait :%d\n", *(int *)arg);
    sleep(3);
    message.v1=*(int *)arg;
    pthread_exit((void *)"merci pour le temps CPU");
    
}
void *ma_fonction_thread2(void *arg) {
    printf("dans le thread l'argument etait :%d\n", *(int *)arg);
    sleep(3);
    message.v2=*(int *)arg;
    pthread_exit((void *)"merci pour le temps CPU");
}
void *ma_fonction_thread3(void *arg) {
    printf("dans le thread l'argument etait :%d\n", *(int *)arg);
    sleep(3);
    message.v3=*(int *)arg;
    pthread_exit((void *)"merci pour le temps CPU");
}

/*
 * 
 */
int main(int argc, char** argv) {
    
    int res;  
    pthread_t thread_t1;
    pthread_t thread_t2;
    pthread_t thread_t3;
    int a=10;
    int b=15;
    int c=20;
    void *thread_result;
    
    //thread_t1
    
    res = pthread_create(&thread_t1, NULL, ma_fonction_thread1, (void *)&a);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }
    printf("attente de la fin du thread...\n");

    res = pthread_join(thread_t1, &thread_result);
    if (res != 0) {
        perror("Thread join a foir... echoué");
        exit(EXIT_FAILURE);
    }
    printf("OK, valeur de retour du Thread join :%s\n", (char *) thread_result);
    
    //thread_t2
    
    res = pthread_create(&thread_t2, NULL, ma_fonction_thread2, (void *)&b);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }
    printf("attente de la fin du thread...\n");

    res = pthread_join(thread_t2, &thread_result);
    if (res != 0) {
        perror("Thread join a foir... echoué");
        exit(EXIT_FAILURE);
    }
    printf("OK, valeur de retour du Thread join :%s\n", (char *) thread_result);
    
    //thread_t3
    
    res = pthread_create(&thread_t3, NULL, ma_fonction_thread3, (void *)&c);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }
    printf("attente de la fin du thread...\n");

    res = pthread_join(thread_t3, &thread_result);
    if (res != 0) {
        perror("Thread join a foir... echoué");
        exit(EXIT_FAILURE);
    }
    printf("OK, valeur de retour du Thread join :%s\n", (char *) thread_result);
    
    //Affichage
    printf("Le message est maintenant v1:%d\n", message.v1);
    printf("Le message est maintenant v2:%d\n", message.v2);
    printf("Le message est maintenant v3:%d\n", message.v3);
    
    return (EXIT_SUCCESS);
}
