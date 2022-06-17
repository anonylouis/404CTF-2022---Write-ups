# A l'aube d'un échange

D'une photo (_Lieu.jpg_) il faut trouver une adresse !

Ici, il faut être méthodique et se servir des éléments qu'on nous donne :

Sur la photo, on peut distinguer plusieurs tours en zoomant sur la plus pointue d'entre elles et en effectuant une recherche d'image sur _Google_ on peut savoir que l'on regarde la tour Part-Dieu situe à Lyon !

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/OSINT/A_l_aube_d_un_echange/Part-Dieu.png)

Pour savoir de quel côté l'on se situe de la tour, on peut se servir de plusieurs éléments :
- Là où soleil se lève !
- La position de la deuxième tour par rapport à la première !

Pour approximer la distance aux tours, on peut repérer en bas à gauche sur un plan bien plus proche le toit d'une église :

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/OSINT/A_l_aube_d_un_echange/Eglise.png)

En se positionnant sur _Google Map_ on peut s'apercevoir que c'est l'église Saint-Nizier.

Pour trouver l'adresse, il faudra passer quelque temps sur _Google Street View_ afin de trouver :
_montee-saint-barthelemy_

En md5 :
> 404CTF{eb66c65861da9fe667f26667b3427d2c}