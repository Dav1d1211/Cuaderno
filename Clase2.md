# GitHub, Git, vs code, markdown, compilador de c y c++ IDE de desarrollo con C y C++

## Shortcuts VS code

1. Comand pallete: **Windows**: CTRL + SHIFT + P
2. Quick open: **Windows:** CTRL + P
3. Toggle sidebar: **Windows**: CTRL + B
4. Multi select cursor: **windows**: CTRL + D
5. Copy line: **Windows**: SHIFT + ALT + UP or SHIFT + ALT + DOWN
6. Comment code block **windows**: SHIFT + ALT + A (multy-line comment), CTRL + C + K (Single-line comment)
7. Go back/ move forward: **Windows**: ALT + --> OR + ->
8. Show all symbols: **windows**: CTRL + T
9. Trigger suggestion and trigger parameter hints: **Windows**: CTRL + SPACE, CTRL + SHIFT + SPACE

## GIT
Git fue creadoen 2005 por el mismo Linus Torvalds (el creador de Linux)como herramienta para facilitar el desarrollo colaborativode software. Desde entonces han surgido incluso populares plataformas,como GitHub o GitLab, que permiten su uso online.

$ git–versión

### Tu Identidad 
* $gitconfig--global user.name "Emma Paris“
* $ gitconfig--global user.emailjohndoe@example.com

### Verificando
* $ gitconfiguser.name$ gitconfiguser.email 

### inicio del control de versiones
* $ gitinit
* $ gitstatus
* $ gitadd.
* $ gitadd NombreCarpeta/NombreArchivo
* $ gitcommit-m 'mensaje :initialprojectversion'

### inicio del control de versiones -clonando
* $ gitclone https://github.com/xxyyy/abc 
* $ gitclone https://github.com/xxyyy/abc miPropioNombre

### Quitar archivos del control
* $echonombreArchivo.ext>>.gitignore
* $echo*.txt>>.gitignore

### Ver archivos ignorados
* $ cat.gitignore

### Forzar agregar archivo excluido
* $gitadd-fNombreArchivo.log.