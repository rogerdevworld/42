#!/bin/bash

# Verificar si se proporcionó un nombre
if [ -z "$1" ]; then
  echo "Uso: $0 <nombre>"
  exit 1
fi

FILE_NAME="$1.c"

# Crear el archivo .c
touch "$FILE_NAME"

# Agregar contenido al archivo
echo "//libft $1" > "$FILE_NAME"
echo '#include "libft.h"' >> "$FILE_NAME"
echo "" >> "$FILE_NAME"
echo "int $1(void)" >> "$FILE_NAME"
echo "{" >> "$FILE_NAME"
echo "    // Tu código aquí" >> "$FILE_NAME"
echo "    return 0;" >> "$FILE_NAME"
echo "}" >> "$FILE_NAME"

echo "Archivo '$FILE_NAME' creado con contenido inicial."
