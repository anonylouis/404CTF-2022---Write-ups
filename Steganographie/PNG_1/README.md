# PNG : Un logo obèse 1/4

_steg.png_ semble cacher des choses, voyons ce que binwalk nous dit :

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Steganographie/PNG_1/binwalk.png)

L'image semble contenir une archive ZIP bien étrange !

`binwalk -e steg.png` permet d'extraire les données :

On obtient _stage2.png_, et le flag avec !

> 404CTF{0b3z3_f1l3_h4z_zup3r_spy_s3cr37}