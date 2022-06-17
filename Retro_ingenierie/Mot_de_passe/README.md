# Mot de passe ?

_Mdp.class_ contient un code java compilé ... Et bien décompilons !

Le site _http://www.javadecompilers.com/result_ nous affiche par exemple :

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Retro_ingenierie/Mot_de_passe/decompiler.png)

Il ne reste alors plus qu'a "inverser la fonction hide" :

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Retro_ingenierie/Mot_de_passe/solution.png)

> 404CTF{C3_sYst3mE_es7_5ecUrisE}