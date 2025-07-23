#!/bin/bash

#Mostrar los ùltimos 5 hashes de commits

printf "%s\n" $(git log -n 5 --pretty=format:"%H")

