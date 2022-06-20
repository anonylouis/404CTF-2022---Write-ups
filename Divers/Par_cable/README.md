# Par cable

Le fichier _cable.txt_ contient une longue suite de tension alternant entre 1 et -1.

La première chose à faire est de transformer les -1 en 0 et de supprimer les espaces afin d'obtenir un fichier facilement analysable (chaque tension est représentée par un unique caractère.).
> fichier Cable2.txt

Considérer les 1 comme des 1 et les 0 comme des 0, ou les 1 comme des 0 et les 0 comme des 1 ne donne aucun résultat pertinent.

Ce n'est donc ni un code NRZ ni NRZI

Tentons le codage de Miller (_miller.cpp_) :

- les 1 sont codés pas des fronts (montants ou descendants) (passage de 1 à 0 ou de 0 à 1)
- les 0 par l'absence de fronts

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Divers/Par_cable/binary.png)

Et transformons le résultat en ascii :

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Divers/Par_cable/ascii.png)

Le flag etait :

> 404CTF{N0n3_R3tUrn_Z3r0_InV3rtEd_f0r3v3r}