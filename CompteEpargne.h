#include <exception>
using namespace std;

#ifndef __CompteEpargne_h__
#define __CompteEpargne_h__

#include "Compte.h"

namespace hierarchisationvraiclasse
{
	// class Compte;
	class CompteEpargne;
}

namespace hierarchisationvraiclasse
{
	class CompteEpargne: public hierarchisationvraiclasse::Compte
	{
		private: float _plafond;
		private: float _taux;

		public: float calculerInterets();
	};
}

#endif
