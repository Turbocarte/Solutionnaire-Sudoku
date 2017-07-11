// SolutionneurSudoku.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>

using namespace std;


int RetrouvePremiereCelluleVide(vector<int> grille)
{

	if (grille.data() == nullptr)
		throw new exception("RetrouvePremiereCelluleVide: pointeur nul");

	//on parcours la sous-grille à partir de sa première cellule
	for (vector<int>::iterator it_cellules = grille.begin(); it_cellules != grille.end(); ++it_cellules)
	{
		int i = 0;

	}


	return 0;
}



int main()
{

	vector<int> grilleMaitresse = { 0, 0, 0, 0, 0, 0, 0, 3, 6,
									5, 9, 0, 0, 6, 0, 8, 0, 1,
									3, 8, 0, 1, 0, 0, 7, 0, 2,
									4, 0, 0, 0, 0, 9, 6, 0, 7,
									0, 6, 5, 0, 0, 0, 4, 9, 0,
									1, 0, 9, 7, 0, 0, 0, 0, 5,
									6, 0, 3, 0, 0, 8, 0, 7, 4,
									9, 0, 2, 0, 5, 0, 0, 6, 8,
									8, 7, 0, 0, 0, 0, 0, 0, 0 };

	vector<int> EnumSousGrille = { 0, 3, 6, 27, 30, 33, 54, 57, 60 };

	vector<int> EnumCellulesSousGrille = { 0, 1, 2, 9, 10, 11, 18, 19, 20 };

	int* p_sousGrille = nullptr;

	int* p_celluleSousGrille = nullptr;

	//debut de recherche de solution

	//itération à travers les sous-grilles
	for (vector<int>::iterator it_sg = EnumSousGrille.begin(); it_sg != EnumSousGrille.end(); ++it_sg)
	{
		p_sousGrille = grilleMaitresse.data() + *it_sg;

		//on créer la liste des valeurs possibles pour la sous-grille
		vector<int> valeursPossiblesSousGrille = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

		for (vector<int>::iterator it_cellules = EnumCellulesSousGrille.begin(); it_cellules != EnumCellulesSousGrille.end(); ++it_cellules)
		{
			p_celluleSousGrille = p_sousGrille + *it_cellules;

			if (*p_celluleSousGrille != 0)
			{
				//valeursPossiblesSousGrille.at(*p_celluleSousGrille - 1) = 0;
				valeursPossiblesSousGrille.erase(it_cellules);
			}

		}

	/*	for (vector<int>::iterator it_possibles = valeursPossiblesSousGrille.begin(); it_possibles != valeursPossiblesSousGrille.end(); ++it_possibles)
		{
			if (*it_possibles == 0)
			{
				valeursPossiblesSousGrille.erase(valeursPossiblesSousGrille.begin());
			}

		}*/

		//fin - valeurs possibles


		RetrouvePremiereCelluleVide(grilleMaitresse);
	}



	return 0;
}


