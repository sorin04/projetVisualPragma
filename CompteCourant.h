#ifndef COMPTECOURANT_H
#define COMPTECOURANT_H

#include "Compte.h"

namespace hierarchisationvraiclasse {

    class CompteCourant : public Compte {
    private:
        float _decouvertAutorise;  
        float _fraisDecouvert;     

    public:
        
        CompteCourant(int numero, float solde_initial, float decouvertAutorise, float fraisDecouvert);

       
        void retirer(float montant) override;

        
        float obtenirDecouvertAutorise() const;

       
        float obtenirFraisDecouvert() const;

       
        void appliquerFrais();
    };

} 

#endif 
