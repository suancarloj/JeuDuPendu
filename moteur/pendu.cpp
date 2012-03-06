#include "pendu.h"

#include <ctime>
#include <cstdlib>
#include <cstddef>
#include <fstream>
#include <cctype>
#include <algorithm>

using namespace std;

Pendu::Pendu(const char * nFichier, unsigned nVie) throw (std::string) :
	nbrVie(nVie), nbrLettre(0), enCours(true), aGagne(false)
{
	if (nbrVie == 0) throw string(
			"Impossible de créer une partie avec 0 point de vie.");

	ifstream fichier(nFichier);
	if (!fichier)
	{
		string msg("Fichier : \"");
		msg += nFichier;
		msg += "\" introuvable.";
		throw msg;
	}

	// ici tout va bien...

	static bool premiereFois = true;
	if (premiereFois)
	{
		srand( time(NULL));
		premiereFois = false;
	}

	// ici on s'occupe du fichier
	unsigned nbrLigne = 0;
	string str;
	while (getline(fichier, str))
		++nbrLigne;

	fichier.clear();// remettre les bits d'erreur à 0

	fichier.seekg(0, ios::beg);

	unsigned d = 1 + rand() % nbrLigne; // d \in [1,nbrLigne]

	while (d--)
	{
		getline(fichier, motATrouver);
	}

	fichier.close();

	// ic mot à trouver est ok

	d = motATrouver.size();

	for (unsigned u = 0; u < d; ++u)
	{
		if (isalpha(motATrouver[u]))
		{
			motATrouver.at(u) = toupper(motATrouver.at(u));
			leMotEnCours.append(1, '?');
			++nbrLettre;
		}
		else
		{
			leMotEnCours.append(1, motATrouver.at(u));
		}
	}

	// lettreProposee est initialement vide
	for (char c = 'A'; c <= 'Z'; ++c)
	{
		_lettreRestante.insert(c);
	}
}

unsigned Pendu::taille() const
{
	return nbrLettre;
}

string Pendu::motEnCours() const
{
	return leMotEnCours;
}

bool Pendu::gagne() const
{
	return aGagne;
}

void Pendu::proposition(char lettre) throw (string)
{
	if (!enCours) throw string("Impossible de jouer : le jeu est fini.");

	if (!isalpha(lettre)) throw string("La proposition n'est pas une lettre.");

	if (_lettreProposee.find(lettre) != _lettreProposee.end())
	{
		string msg("La lettre '");
		msg += lettre;
		msg += "' a déjà été proposée.";
		throw msg;
	}
	else
	{
		_lettreProposee.insert(lettre);
		_lettreRestante.erase(lettre);
	}

	char up = toupper(lettre);
	bool ok = false;
	for (unsigned i = 0; i < motATrouver.size(); ++i)
	{
		if (motATrouver[i] == up)
		{
			leMotEnCours[i] = up;
			ok = true;
		}
	}

	if (!ok)
	{
		--nbrVie;
		if (nbrVie == 0)
		{
			enCours = false;
			//aGagne = false;
		}
	}
	else
	{
		if (motATrouver == leMotEnCours)
		{
			aGagne = true;
			enCours = false;
		}
	}

	notifierChangement();
}

bool Pendu::fini() const
{
	return !enCours;
}

unsigned Pendu::vie() const
{
	return nbrVie;
}

string Pendu::solution() const throw (string)
{
	if (enCours) throw string("Action non autorisée : le jeu est en cours.");

	return motATrouver;
}

set<char> Pendu::lettreProposee() const
{
	return _lettreProposee;
}

set<char> Pendu::lettreRestante() const
{
	return _lettreRestante;
}
