#!/bin/bash

data=`cat donneesCorrompues.txt | grep " les donn" | tail -1 | cut -d ":" -f 2- | tr -d ' '`

p=`./64ToBinary $data`

echo -n $p >> result

echo $p