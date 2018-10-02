/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   td5_thread_q2.c
 * Author: klehoux
 *
 * Created on 28 septembre 2018, 10:18
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>
#include <sys/syscall.h>

/*
 * 
 */

typedef struct {
	int v1;
	int v2;
	int v3;
}laStruct;

laStruct zonecommune;

void *threadChange(void *arg)
{
    laStruct *structure;
    structure=(laStruct *)arg;
    
    zonecommune.v1=structure->v1;
    sleep(1);
    zonecommune.v2=structure->v2;
    zonecommune.v3=structure->v3;
    printf("TID Thread : %d | Nouvelle valeur de v1 %d  |  v2 %d  |   v3  %d\n",syscall(SYS_gettid),structure->v1,structure->v2,structure->v3);
    printf("Zone commune : v1 = %d | v2 = %d | v3 = %d \n",zonecommune.v1,zonecommune.v2,zonecommune.v3);
    pthread_exit((void *) "merci pour le temps CPU\n");
}


int main(int argc, char** argv) {

    laStruct structure1,structure2,structure3;
    pthread_t thread1,thread2,thread3;
    void *thread_result;
    int res;
    
    structure1.v1=-1;
    structure1.v2=-2;
    structure1.v3=-3;
    
    structure2.v1=50;
    structure2.v2=100;
    structure2.v3=150;
    
    structure3.v1=10;
    structure3.v2=20;
    structure3.v3=30;
    
    res = pthread_create(&thread1, NULL, threadChange, (void *) &structure1);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }
   
    res = pthread_create(&thread2, NULL, threadChange, (void *) &structure2);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }
    
    res = pthread_create(&thread3, NULL, threadChange, (void *) &structure3);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }
    
    
    
        //// Attente de fin des threads
    
    
    printf("Attente de la fin du thread 1\n");
    
    res= pthread_join(thread1,&thread_result);
    if (res != 0) {
        perror("Thread join a echoué");
        exit(EXIT_FAILURE);
    }
    printf("Valeur de retour du thread join : %s\n", (char *)thread_result);
    

   
    printf("Attente de la fin du thread 2\n");
    
    res= pthread_join(thread2,&thread_result);
    if (res != 0) {
        perror("Thread join a echoué");
        exit(EXIT_FAILURE);
    }
    printf("Valeur de retour du thread join : %s\n", (char *)thread_result);
    

    
   
    printf("Attente de la fin du thread 3\n");
    
    res= pthread_join(thread3,&thread_result);
    if (res != 0) {
        perror("Thread join a echoué");
        exit(EXIT_FAILURE);
    }
    printf("Valeur de retour du thread join : %s\n", (char *)thread_result);
    
    
    
    printf("v1 = %d | v2 = %d | v3 = %d\n", zonecommune.v1, zonecommune.v2, zonecommune.v3);
    return (EXIT_SUCCESS);
}

