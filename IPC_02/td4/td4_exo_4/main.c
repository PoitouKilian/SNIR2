/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: kpoitou
 *
 * Created on 26 septembre 2018, 08:56
 */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <curses.h>

/*
 * 
 */

void traitement(int lesignal) {
    printf("Interception du signal ");
    printf("pid : %d\n",getpid());
    (void)signal(SIGUSR1,traitement);       //Permet de réarmer la fonction signal
}
int main(int argc, char** argv) {
    int pid;
    int pidP3;
    int pidP3Reception;
    int tube[2];
    int retour;

    (void)signal(SIGUSR1,traitement);
    //P1
    //Creation tube
    if(pipe(tube)==0)
    {
        
    
    pid=fork();
    if(pid==0)  //P2
    {
        pid=fork();
        if(pid==0)  //P3
        {
            printf("Pid3 p3 :%d\n",getpid());
            //ecriture pidp3 dans tube
            pidP3=getpid();
            write(tube[1],&pidP3,sizeof(pidP3));
            pause();
        }
        else   //P2
        {
            printf("Pid p2 : %d\n",getpid());
            pause();
        }
    }
    else    //P1
    {
        printf("Pid p1 : %d\n",getpid());
        kill(pid,SIGUSR1);
        //lecture pid3 dans le tube
        read(tube[0],&pidP3Reception,sizeof(pidP3Reception));
        kill(pidP3Reception,SIGUSR1);
    }
    }

    return (EXIT_SUCCESS);
}

