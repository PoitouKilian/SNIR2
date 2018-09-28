/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: kpoitou
 *
 * Created on 25 septembre 2018, 11:28
 */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    int pid;
    int tube[2];
    char *message="coucou";
    char buffer[255];
    if(pipe(tube)==0)
    {                   //P1
        pid=fork();
        if (pid==0) {       //P2
            memset(buffer,'\0',255);
            read(tube[0],buffer,255);
            printf("message de P1 : %s\n",buffer);          
            
        }
        else{    //P1
            sleep(2);
            write(tube[1],message,strlen(message));
            printf("message : %s \n", message);
        }
    }
    exit(EXIT_SUCCESS);
}

