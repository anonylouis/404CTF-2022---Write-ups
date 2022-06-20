# Un utilisateur suspicieux 1/2

Le challenge nous met directement en contact avec un bot Discord nommé _Je suis un gentil humain_.

Celui-ci nous fait rapidement comprendre (avec !aide ) qu'on ne peut communiquer avec lui par le biais de 3 commandes :

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Divers/Un_utilisateur_suspicieux_1/aide.png)

> _!drapeau_ nous demande de nous authentifier.

> _!authentification_ nous demande un mot de passe.

On est est donc inévitablement renvoyé vers la seule commande intéressante _!chercher_

_!chercher_ permet d'afficher une liste de mots contenant les lettres qu'on recherche :

_!chercher e_ affiche par exemple un tas de mots contenant la lettre e.

On peut rapidement se rendre compte qu'il se cache derrière cette commande une requête SQL, avec l'operator LIKE "%" on peut par ailleurs afficher l'ensemble des mots de la base de données (all.png)

Cependant, rien d'intéressant ! Il faudra réaliser des injections SQL un peu plus pousser pour voir apparaître de nouvelles choses.

Quelques recherches montrent que :
- " permet de fermer la requête
- \# permet de commenter le résultat de la requête
- L'interface Discord ne considère que les requêtes affichant des résultats sous la forme d'une unique colonne (group concat peut s'avérer utile !)

`!chercher w" union select  group_concat(table_name) from information_schema.tables #`

permet d'afficher toutes les tables de la base de données :

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Divers/Un_utilisateur_suspicieux_1/bases.png)

On peut voir l'existence d'une table password, essayons de l'afficher :

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Divers/Un_utilisateur_suspicieux_1/password.png)

Nous tenons notre flag :
> 404CTF{D1sc0rd_&_injection_SQL}