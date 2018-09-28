/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: kpoitou
 *
 * Created on 25 septembre 2018, 10:38
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

/*
 * 
 */
void affichage(int sig) {
    static int cpt = 0;

    cpt++; //le rang qui s'incrémente 
    if(cpt==2)
    {
        printf("%d : signal %d recu par le protocol %d\n", cpt, sig, getpid()); //afficge le rang le signal et le prend le pid
    } 
}

int main(int argc, char** argv) {
    int pid1;
    int pid2;                       //Pour mieux comprendre regarder le schema dans le td
    int pid3;
    int retour;

    (void) signal(SIGUSR1, affichage); // rederoutage des signaux SIGUSR1

    pid1 = getpid();                    //On prend connaissances des infos de P1
    printf("Père p1 pid = %d\n", pid1);

    pid2 = fork();
    if (pid2 == 0) //P2 Enfant de P1
    {
        pid3 = fork();
        if (pid3 == 0) //P3 Enfant de P2
        {
            printf("Enfant p3 pid = %d ppid = %d\n", getpid(), getppid()); //On prend connaissance des informations de P3

            printf("P3 envoie un signal USR1 à P1\n"); //On vas envoyer un signal a P1
            retour = kill(pid1, SIGUSR1);

            if (retour != 0) //On test si il y a une erreur
            {
                printf("Erreur avec kill");
            }

            printf("Le processus P3 attend un signal\n"); //On attend un signal de P1
            pause(); // attente du signal de P2
            printf("Fin de processus  P3\n");
            
            
        } 
        else    //P2 Enfant de P1
        {
            printf("Enfant p2 pid=%d ppid=%d",getpid(),getppid()); //On prend connaissance des informations de P2
            printf("Le processus P2 attend un signal SIGUSR1\n");
            pause();//attente du signal de P1
            
            //On vas envoyer un signal a P1
            printf("P2 envoie un signal USR1 à P1\n"); 
            retour = kill(pid1, SIGUSR1);
            if (retour != 0) 
            {
                printf("Erreur avec kill"); //On test si il y a une erreur
            }
            
            //On vas envoyer un signal a P3
            printf("P2 envoie un signal USR1 à P3\n"); 
            retour = kill(pid3, SIGUSR1);
            if (retour != 0) 
            {
                printf("Erreur avec kill"); //On test si il y a une erreur
            }
            
            printf("Fin de processus  P2\n");
            
        }
    } else //Pere P1
    {
        printf("Le processus P1 attend un premier signal SIGUSR1\n");
        pause();
        printf("P1 envoie un signal USR1 à P2\n");
        retour = kill(pid2, SIGUSR1); // envoi d'un signal USR1 a enfant 2
        printf("Le processus P1 attend un deuxième signal SIGUSR1\n");
        pause();
        printf("Fin de processus P1\n");
    }
    return (EXIT_SUCCESS);
}

