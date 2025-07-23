#!/bin/bash

# Mostrar archivos ignorados actualmente por git (definidos en .gitignore)
git ls-files --others --ignored --exclude-standard
