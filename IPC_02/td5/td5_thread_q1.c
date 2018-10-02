/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   td5_thread_q1.c
 * Author: klehoux
 *
 * Created on 28 septembre 2018, 08:03
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

void *threadChange1(void *arg)
{
    int v;
    int *ptrV;
    ptrV=(int *) arg;
    v=*ptrV;
    zonecommune.v1=v;
    printf("TID Thread : %d | Nouvelle valeur de v1 %d\n",syscall(SYS_gettid),v);
    printf("Zone commune : v1 = %d | v2 = %d | v3 = %d \n",zonecommune.v1,zonecommune.v2,zonecommune.v3);
    pthread_exit((void *) "merci pour le temps CPU\n");
}

void *threadChange2(void *arg)
{
    int v;
    int *ptrV;
    ptrV=(int *) arg;
    v=*ptrV;
    zonecommune.v2=v;
    printf("TID Thread : %d | Nouvelle valeur de v2 %d\n",syscall(SYS_gettid),v);
    printf("Zone commune : v1 = %d | v2 = %d | v3 = %d \n",zonecommune.v1,zonecommune.v2,zonecommune.v3);
    pthread_exit((void *) "merci pour le temps CPU\n");
}

void *threadChange3(void *arg)
{
    int v;
    int *ptrV;
    ptrV=(int *) arg;
    v=*ptrV;
    zonecommune.v3=v;
    printf("TID Thread : %d | Nouvelle valeur de v3 %d\n",syscall(SYS_gettid),v);
    printf("Zone commune : v1 = %d | v2 = %d | v3 = %d \n",zonecommune.v1,zonecommune.v2,zonecommune.v3);
    pthread_exit((void *) "merci pour le temps CPU\n");
}


//int cpt=0;
/*
void *ma_fonction_thread(void *arg)
{
    struct laStruct *structure = (struct laStruct*)arg;
 
    //structure = (struct laStruct*)arg;
    
    cpt++;
    if(cpt==1)
    {
        structure->v1=3;
        //structure.v1=3;    
        //((struct structure*)arg).v1=3;
    }
    if(cpt==2)
    {
        structure->v2=2;
    }
    if(cpt==3)
    {
        structure->v3=1;    
    }
    pthread_exit(NULL);
}*/

int main(int argc, char** argv) {

    int v1Main=5,v2Main=10,v3Main=15;
    pthread_t thread1,thread2,thread3;
    void *thread_result;
    int res;
    zonecommune.v1=-1;
    zonecommune.v2=-2;
    zonecommune.v3=-3;
    
    //structure = (struct laStruct*)malloc(sizeof *structure);
    
    res = pthread_create(&thread1, NULL, threadChange1, (void *) &v1Main);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }
   
    res = pthread_create(&thread2, NULL, threadChange2, (void *) &v2Main);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }
    
    res = pthread_create(&thread3, NULL, threadChange3, (void *) &v3Main);
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

