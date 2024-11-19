#include "CompteCourant.h"
#include <iostream>

namespace hierarchisationvraiclasse {

    
    CompteCourant::CompteCourant(int numero, float solde_initial, float decouvertAutorise)
        : Compte(numero, solde_initial), _decouvertAutorise(decouvertAutorise) {}

    
    void CompteCourant::retirer(float montant) {
        
        if (_solde + _decouvertAutorise >= montant) {
            _solde -= montant;
            std::cout << "Montant retiré : " << montant << " | Nouveau solde : " << _solde << std::endl;
        }
        else {
            std::cout << "Retrait refusé : montant dépasse le découvert autorisé." << std::endl;
        }
    }

   
    float CompteCourant::obtenirDecouvertAutorise() const {
        return _decouvertAutorise;
    }

} 
