# Floppy

Le challenge nous propose d'analyser une image disque. Pour cela, j'ai décidé d'utiliser [fatcat](https://github.com/Gregwar/fatcat) .

Listons la liste de fichiers présents sur le disque :

![alt text](https://github.com/anonylouis/404ctf/blob/master/Analyse_forensique/Floppy/files.png)

On voit qu'il manque bien l'_IMG\_0003.png_

L'option "-d"  permet d'afficher les fichiers supprimes !

![alt text](https://github.com/anonylouis/404ctf/blob/master/Analyse_forensique/Floppy/deleted_files.png)

Essayons de récupérer les données du cluster 239 :

![alt text](https://github.com/anonylouis/404ctf/blob/master/Analyse_forensique/Floppy/extract.png)

`file IMG_0003.jpg` permet de confirmer qu'on a bien récupéré notre image.

![alt text](https://github.com/anonylouis/404ctf/blob/master/Analyse_forensique/Floppy/IMG_0003.jpg)

> 404CTF{@v3z_v0vz_z0rt1_135_p0ub3ll35}