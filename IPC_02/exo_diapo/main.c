/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: kpoitou
 *
 * Created on 19 septembre 2018, 08:50
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //par la suite ecrire uname -rom dans le terminal pour afficher le meme resultat
    int retour;
    retour=system("uname -rom");
    if(retour==1)
    {
        printf("pb avec l'appel de la fct system");
        exit(0);
    }
    return (EXIT_SUCCESS);
}

