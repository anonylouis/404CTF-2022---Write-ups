# Un utilisateur suspicieux 2/2

Le flag précédant permet de nous authentifier et nous donne accès a une nouvelle commande :

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Divers/Un_utilisateur_suspicieux_2/aide.png)

Et si on rentre la commande _!debug_ :

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Divers/Un_utilisateur_suspicieux_2/debug.png)

Tentons de nous connecter au port 31337 avec la commande netcat bien connu des autres challenges :

`nc challenge.404ctf.fr 31337`

On se retrouve alors dans un bash dont les seules commandes disponibles sont les builtins !

Essayons de comprendre ou l'on est avec `echo *` :

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Divers/Un_utilisateur_suspicieux_2/echo.png)

Le flag se trouve donc dans un fichier ***flag.txt*** !

Comment l'afficher ??

Avec le builtin read !

`read < flag.txt ; echo $REPLY`

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Divers/Un_utilisateur_suspicieux_2/result.png)

Et le deuxieme flag :
> 404CTF{17_s_4g155417_3n_f4iT_d_1_b0t}