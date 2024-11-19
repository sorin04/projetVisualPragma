#include "Compte.h"

namespace hierarchisationvraiclasse {

    // Constructeur qui initialise le num�ro de compte et le solde
    Compte::Compte(int numero, float solde_initial)
        : _numero(numero), _solde(solde_initial) {}

    void Compte::deposer(float montant) {
        _solde += montant;
        std::cout << "Montant d�pos� : " << montant << " | Nouveau solde : " << _solde << std::endl;
    }

    void Compte::retirer(float montant) {
        if (_solde >= montant) {
            _solde -= montant;
            std::cout << "Montant retir� : " << montant << " | Nouveau solde : " << _solde << std::endl;
        }
        else {
            std::cout << "Solde insuffisant pour effectuer le retrait." << std::endl;
        }
    }
    float Compte::obtenirSolde() const {
        return _solde;
    }

}
