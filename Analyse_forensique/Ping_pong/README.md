# Ping Pong 

Ici, il faut analyser les paquets réseaux fournis dans le fichier _ping.pcapng_.

Pour cela, j'ai utilisé le logiciel **Wireshark** !

Si les données transmises ne semblent pas vouloir dire grand-chose, leurs longueurs semblent trop spécifiques pour être anodines !

Essayons de se baser là-dessus !
Après avoir ajouté la colonne data.length sur wireshark, on peut extraire les données pour finir l'analyse :

Sur _Excel_, on obtient :

![alt text](https://github.com/anonylouis/404ctf/blob/master/Analyse_forensique/Ping_pong/analyse.png)

> 404CTF{Un_p1ng_p0ng_p4s_si_1nn0c3nt}