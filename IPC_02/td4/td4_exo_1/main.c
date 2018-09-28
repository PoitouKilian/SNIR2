/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: kpoitou
 *
 * Created on 25 septembre 2018, 10:52
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

/*
 * 
 */
int main(int argc, char** argv) {

    FILE *pp;               //popen
    char buffer[255];       //buffer de taille 255
    int nbRead;
    
    pp=popen("/bin/uname -a","r");          //On ouvre le fichier /bin/uname -a pour tout le fichier en lecture seule
    if(pp==NULL)
    {
        printf("Pb avec popen : %s",strerror(errno));
        exit(0);
    }
    nbRead=fread(buffer,sizeof(buffer),1,pp);     //on mets dans le buffer , on prend toute sa taille, de popen
    printf("%s",buffer);                        //on affiche
    
    pclose(pp);
    return (EXIT_SUCCESS);
}

