# Données Corrompues

`nc challenge.404ctf.fr 30117` nous donne directement l'objectif du challenge :

On a des données en base64 et on doit les rendre au programme en binaire.

Un rapide programme effectuant la conversion (en ignorant les caractères ne faisant pas partie de la base 64) ne donne pas les résultats attendus, et cela, même pour l'exemple donné :
> L'entrée : Rmх%hZуА*6KQ
>
> Doit donner en sortie : 01000110011011000110000101100111001000000011101000101001

En comparant ce qu'on est censé obtenir avec ce que l'on obtient le problème saute rapidement aux yeux : certains caractères sont ignorés, ou plutôt mal interprétés.

Pourtant visuellement correct, il s'avère que certains caractères ne sont que de vilains **homoglyphes** et donc ne rentre pas dans les cases de la bien gentille table ASCII !

Pas de soucis ! On a qu'a identifier et remplacer ces caractères gênants !

Une série de if plus tard, notre `64ToBinary` marche et réalise la conversion pour nous !

1/250eme du travail de fait !!! 

Bon ... IL ne reste qu'à automatiser ça pour faire les 249 autres plus rapidement 

Un script expect et quelques lignes de bash font le travail !

`./expect > donneesCorrompues.txt`

> Wouaouh, tu as réussi ! Tu peux maintenant utiliser ces données pour obtenir le flag ! Il suffit de les assembler... ;-)

... Toujours pas fini ??

Bon bah... "assemblons" toutes ces lignes de binaire dans un fichier... Et rendons le executable tant qu'à faire !`binToExe.cpp result > result.wav`

`file result.wav`

`result.wav: Audio file with ID3 version 2.4.0, contains:MPEG ADTS, layer III, v2,  48 kbps, 24 kHz, Monaural`

BINGO ! Un fichier audio qui nous donne directement le flag !
> 404CTF{l4_b4s3_64_3ff1c4c3_m41s_c4pr1c13us3}
