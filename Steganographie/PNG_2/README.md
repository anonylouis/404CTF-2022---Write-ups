# PNG : Droles de chimeres 2/4

Si cette fois-ci binwalk n'annonce rien d'étrange, en lançant pngcheck on s'aperçoit rapidement du problème :

![alt text](https://github.com/anonylouis/404CTF-2022---Write-ups/blob/main/Steganographie/PNG_2/pngcheck.png)

le chunk **sTeG** semble poser problème... Enlevons-le !

Il reste alors deux chunk IHDR dans l'image, en supprimant l'un des deux, on arrive à _stage3.png_ et le nouveau flag :

> 404CTF{7h47_v1c10us_m1zzing_z19natur3}