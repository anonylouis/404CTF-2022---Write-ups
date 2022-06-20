#!/bin/bash

txt=`cat codebar.txt | grep iVB | tail -1`

./64ToBinary $txt > img_bin
./binToExe img_bin > img.png
width=`file img.png | cut -d 'x' -f 1 | cut -d ',' -f 2 | tr -d ' '`
height=`file img.png | cut -d 'x' -f 2 | cut -d ',' -f 1 | tr -d ' '`
arg2=$width"x"$height
./convert_to_xpm/convert_to_xpm img.png $arg2 'FILE' >err
rep=`./codebar img.xpm 2>err`
echo $rep