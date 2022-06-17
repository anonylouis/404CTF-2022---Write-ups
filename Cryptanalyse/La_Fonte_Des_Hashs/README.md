# La fonte des hashs

Le fichier _hash.py_ définit d'abord 6 variables sous une forme quelque peu étrange, qu'on peut s'amuser à interpréter, mais c'est plutôt cette dernière ligne qui est intéressante :

`eval(compile(base64.b64decode(eval('\x74\x72\x75\x73\x74')),'<string>','exec'))`

Et en passant de l'hexadecimal à l'ascii :

`eval(compile(base64.b64decode(eval('trust')),'<string>','exec'))`

Difficile à comprendre, mais la clef de cette ligne se trouve dans le _base64.b64decode(eval('trust'))_ .

Affichons tout simplement ce que vaut cette partie du code :

`print(base64.b64decode(eval('trust')))`

BINGO ! Un code python s'affiche sur notre écran (file result.py)

Maintenant, qu'on a l'algorithme qui code le hash, plus qu'à créer celui qui décode le hash !!

Pour cela, il faut y aller par petits pas ! La fonction principale est :

```
def h(m):
    plain = m
    binary = string2bits(plain)
    padding(binary)
    if len(binary) > 32:
        binary = phase1(binary)
    phase2(binary)
    phase2(binary)
    phase2(binary)
    sbox_ope(binary)
    hash_str = bits2hex(binary)
    return hash_str
```

Essayons d'inverser chacune des "sous-fonctions" de celle-ci ! (file result.py)
- string2bits -> bits2strings
- padding -> depadding
- phase2 -> dephase2
- bits2hex -> hex2bits
- sbox_ope -> reverse_sbox_ope

La seule fonction qui pose problème est phase1 ! Impossible de l'inverser puisque les appels de xor ne le sont pas !

Bon et bien... Esperons que le flag ne fasse pas appel à  phase1 (len(flag <= 32) !!

On réalise notre fonction de décodage (en oubliant pas d'inverser l'ordre d'appel des sous-fonctions)

```
def dh(hash_str) :
	binary = hex2bits(hash_str)
	inverse_box(binary)
	dephase2(binary)
	dephase2(binary)
	dephase2(binary)
	depadding(binary)
	return (bits2strings(binary))
```

Et on l'exécute avec le hash_str donne par l'énoncé :

`print(dh("18f2048f7d4de5caabd2d0a3d23f4015af8033d46736a2e2d747b777a4d4d205"))`

> 404CTF{yJ7dhDm35pLoJcbQkUygIJ}
