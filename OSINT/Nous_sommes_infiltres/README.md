# Nous sommes infiltres !

Le départ de ce challenge se fait au biais d'une photo contenant plusieurs pseudos _RootMe_.

Si plusieurs d'entre eux nous sont familiers (ce sont les createurs des challenges de l'evenement 404CTF), l'un semble inconnu : _Xx\_Noel_Janvier\_xX_ 

Allons voir sa page RootMe :

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/OSINT/Nous_sommes_infiltres/RootMe.png)

... Allons chercher d'autres informations sur son site web !

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/OSINT/Nous_sommes_infiltres/SiteWeb.png)

Pas de trace d'infiltration visiblement... Mais il nous laisse son _Twitter_ ! Allons-y !

Sur son _Twitter_ on peut voir qu'il parle beaucoup de son site et des mises à jour faites, l'adresse se terminant en _github.io_ on peut se douter que les mises à jour se trouvent sur _GitHub_!

Ça ne manque pas, on trouve un profil _GitHub_ a son pseudo Twitter **e10pthes**

Il faudra fouiller dans les commits pour trouver une page supprimée quelque peu suspecte :

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/OSINT/Nous_sommes_infiltres/PageSecrete.png)


> 404CTF{Att3nt10n_AU8_V13ux_C0mMiT5}