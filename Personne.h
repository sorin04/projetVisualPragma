#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __Personne_h__
#define __Personne_h__

#include "Compte.h"

namespace hierarchisationvraiclasse
{
	class Compte;
	class Personne;
}

namespace hierarchisationvraiclasse
{
	class Personne
	{
		private: string _nom;
		private: string _prénom;
		private: Date _naissance;
		public: hierarchisationvraiclasse::Personne* _unnamed_Personne_;
		public: std::vector<hierarchisationvraiclasse::Compte*> _sesComptes;

		public: void ouvrirCompte(float aInit);
	};
}

#endif
