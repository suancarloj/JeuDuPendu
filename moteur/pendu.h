#ifndef PENDU_H_INCLUDED
#define PENDU_H_INCLUDED

#include <string>
#include <set>
#include "../O_SDO/sujetDObservation.h"

/*!
 * \mainpage Jeu du %Pendu
 *
 * Documentation d'un ensemble de classes
 * métier pour jouer au jeu du pendu. Le modèle de
 * conception <i>%Observateur / Sujet d'Observation</i>
 * est utilisé.
 *
 * Pour commencer, la description de la classe Pendu
 * est un bon point d'entrée.
 */

/*!
 * 	\brief Classe pour jouer au pendu
 *
 * Cette classe permet de jouer au pendu.
 *
 * \author 	SMB & NVS.
 * \date 	Février 2009, février 2011.
 */
class Pendu: public SujetDObservation
{
public:
	/*!
	 * Constructeur du jeu.
	 *
	 * \param fichier le nom complet du fichier où puiser le mot,
	 * 			à savoir qu'une ligne du fichier est considérée comme un mot
	 * 			et que le fichier doit se terminer par une ligne vide.
	 * \param nbrVie le nombre de propositions de lettres non présentes
	 * 					dans le mot autorisées. Valeur par défaut : 6.
	 *
	 * \exception std::string si le fichier est introuvable ou si on tente
	 * 							de créer une partie avec zéro (0)
	 * 							point de vie.
	 */
	Pendu(const char * fichier, unsigned nbrVie = 6) throw (std::string);

	/*!
	 * Permet de savoir si la partie est finie ou non, indépendamment
	 * de la victoire ou de la défaite du joueur.
	 *
	 * \return true si la partie est finie.
	 */
	bool fini() const;

	/*!
	 * Gère entièrement une proposition de lettre faite par le joueur.
	 *
	 * \param lettre la lettre proposée, en minuscule ou majuscule
	 * 					<i>sans</i> accent.
	 *
	 * \exception std::string si la partie est finie ou que le paramètre
	 * 							n'est pas une lettre, indépendamment de la
	 * 							casse.
	 */
	void proposition(char lettre) throw (std::string);

	/*!
	 * Permet de connaître le mot à trouver, une fois la partie finie.
	 *
	 * \exception std::string si on appelle cette méthode alors que
	 * 							la partie est toujours en cours.
	 */
	std::string solution() const throw (std::string);

	/*!
	 * Permet de connaître l'état d'avancement de la recherche.
	 *
	 * \return le mot trouvé par le joueur où les lettres non trouvées
	 * 			sont remplacées par un point d'interrogation ('?').
	 */
	std::string motEnCours() const;

	/*!
	 * Permet de savoir combien de propositions erronées sont
	 * encore autorisées.
	 *
	 * \return l'espérance de vie sachant que zéro (0) indique la fin
	 * 			de la partie en cas de défaite.
	 */
	unsigned vie() const;

	/*!
	 * Permet de savoir si le joueur a gagné la partie.
	 *
	 * \return true si le joueur a gagné.
	 */
	bool gagne() const;

	/*!
	 * Permet de connaître la taille (le nombre de lettres) du mot
	 * à trouver.
	 *
	 * \return le nombre de lettres du mot à trouver.
	 */
	unsigned taille() const;

	/*!
	 * Permet de connaître les lettres déjà proposées.
	 *
	 * \return l'ensemble des lettres proposées.
	 */
	std::set<char> lettreProposee() const;

	/*!
	 * Permet de connaître les lettres qui n'ont
	 * pas encore été proposées.
	 *
	 * \return l'ensemble des lettres restantes.
	 */
	std::set<char> lettreRestante() const;

private:
	std::string motATrouver;
	std::string leMotEnCours;
	unsigned nbrVie;
	unsigned nbrLettre;
	bool enCours;
	bool aGagne;

	std::set<char> _lettreProposee;
	std::set<char> _lettreRestante;
};

#endif // PENDU_H_INCLUDED
