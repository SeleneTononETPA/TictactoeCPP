#ifndef GRILLE_CPP
#define GRILLE_CPP

#include "Grille.h"
#include <iostream>

    Grille::Grille() : _nombreColonnes(3), _nombreLignes(3) { 
        _tableau = std::vector<char>(9,' ');
        resetContent(); 
    }
    
    Grille::Grille(int nbColonnes, int nbLignes) : _nombreLignes(nbLignes), _nombreColonnes(nbColonnes) {
        _tableau = std::vector<char>(nbColonnes * nbLignes,' ');
    }

    // renvoie le contenu de la case de coordonnées x,y dans [0;2]
    char Grille::getContent(int x, int y){ return _tableau[x+(y)*_nombreColonnes]; }    

        // ajoute un contenu dans une case de coordonnées x,y dans [0;2]
        // le contenu est un entier non nul
    void Grille::setContent(int x, int y, char nouveauContenu){
        _tableau[x+(y)*_nombreColonnes] = nouveauContenu;
    }
        
    void Grille::affiche(){
        // à compléter
    }

    void Grille::resetContent(){for(int i=0;i<_nombreLignes*_nombreColonnes;i++) _tableau[i] = ' ';}


#endif