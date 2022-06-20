# Pierre-papier-Hallebarde

Dur de gagner avec cette version du pierre/feuille/ciseaux puisque l'ordinateur ne nous laisse littéralement aucune chance !!

```
	if decision(choix_utilisateur, choix_ordi) == 1:
		print("Vous avez gagné !!! Incroyable !")
		f = open("flag.txt", "r")
		print(f.readline())
		f.close()
```

Et pourtant gagner et donc lire ce fichier _flag.txt_ nous arrangerait bien !!

L'astuce se trouve autre part, et on peut s'en rendre compte avec la version utilise par l'auteur du programme :

`#!/usr/bin/python2.7 -u`

python2.7 possede une exploit bien connu sur la fonction input ! En effet tout ce qu'on rentre dans l'input passe par la fonction eval !!

On pourrait tenter d'envoyer **open("flag.txt", "r").readline()** mais le programme renverrait une erreur (il faut que l'input renvoit un nombre entre 0 et 2 et pas une string pour que ça marche) !

Il faut donc trouver un moyen d'afficher cette string sans pour autant faire crash le programme !
Et cette solution est toute trouvée : input prends une string en paramètre et l'affiche avant d'attente quelque chose !
envoyons **input(open("flag.txt", "r").readline())**

>404CTF{cH0iX_nUm3r0_4_v1c701r3}