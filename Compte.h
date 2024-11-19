#ifndef COMPTE_H
#define COMPTE_H

#include <iostream>

namespace hierarchisationvraiclasse {

    class Personne;

    class Compte {
    protected:
        int _numero;               
        float _solde;             

    public:
        Personne* _sonPropriétaire; 
        Compte(int numero, float solde_initial);
        virtual ~Compte();
        virtual void déposer(float aMontant);
        virtual void retirer(float aMontant);
        float solde() const;
    };

}

#endif  
