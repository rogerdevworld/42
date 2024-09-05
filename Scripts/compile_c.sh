#!/bin/bash

# Verificar si se proporcionó un archivo C
if [ -z "$1" ]; then
  echo "Uso: $0 <archivo.c>"
  exit 1
fi

FILE="$1"
OUTPUT="${FILE%.c}"

# Compilar el archivo C con los flags -Wall, -Werror y -Wextra
cc -Wall -Werror -Wextra "$FILE" -o "$OUTPUT"

if [ $? -eq 0 ]; then
  echo "Compilación exitosa: $OUTPUT"
else
  echo "Error de compilación."
fi

