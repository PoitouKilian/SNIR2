/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: kpoitou
 *
 * Created on 26 septembre 2018, 08:41
 */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int pid;
    int tube[2];
    int tube2[2];
    char *message = "coucou";
    char *message2 = "salut";
    char buffer[255];
    if (pipe(tube) == 0) { //P1
        if (pipe(tube2) == 0) {
            pid = fork();
            if (pid == 0) { //P2
                memset(buffer, '\0', 255);
                read(tube[0], buffer, 255);
                printf("message de P1 : %s\n", buffer);
                write(tube2[1], message2, strlen(message2));
                printf("message 2: %s \n", message2);

            } else { //P1
                sleep(2);
                write(tube[1], message, strlen(message));
                printf("message 1: %s \n", message);
                read(tube2[0], buffer, 255);
                printf("message de P2 : %s\n", message2);
            }
        }
    }


    return (EXIT_SUCCESS);
}

