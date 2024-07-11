# README

[![CI](https://github.com/estebarb/2024-1-progra2-p3-EduardoMelanyYosery/actions/workflows/ci.yml/badge.svg)](https://github.com/estebarb/2024-1-progra2-p3-EduardoMelanyYosery/actions/workflows/ci.yml)

Esta plantilla sirve para crear proyectos en C++ que utilicen CMake como sistema de construcción.
Incluye las siguientes características:

- Compilación de código C++ usando CMake
- Pruebas unitarias con Google Test
- Análisis estático de código con Clang Analyzer, Infer y Cppcheck
- Reporte de cobertura de pruebas con gcovr
- Formateo de código con clang-format
- Integración continua con GitHub Actions

## Estructura del proyecto
El proyecto está estructurado de la siguiente manera:

- `src`: Código fuente de la aplicación
- `include`: Archivos de cabecera de la aplicación
- `tests`: Código fuente de las pruebas unitarias
- `.github/workflows`: Configuración de GitHub Actions, que es usado para la integración continua. En este archivo se definen los pasos que se ejecutan cada vez que se hace un push a una rama.

## Metodología de trabajo
Esta plantilla está pensada para trabajar con una metodología de desarrollo basada en ramas. La idea es que cada vez que se quiera agregar una nueva funcionalidad, se cree una rama a partir de la rama `main`, y una vez que la funcionalidad esté terminada, se haga un pull request a la rama `main`. De esta manera, se pueden hacer revisiones de código antes de mergear los cambios a la rama principal. Los pasos a seguir son los siguientes:

1. Crear una rama a partir de la rama `main`:

```bash
# Cambiarse a la rama main
git checkout main

# Actualizar la rama main con los cambios más recientes
git fetch
git pull

# Crear una rama nueva a partir de la rama main
# Se recomienda que usen un formato autor/funcionalidad
git switch -c nombre-de-la-rama
```

2. Hacer los cambios necesarios en la rama creada. Procuren que sean cambios PEQUEÑOS y que tengan sus respectivas pruebas unitarias.

3. Una vez que hayan terminado de hacer los cambios, hacer un commit y subir los cambios a GitHub:

```bash
# Agregar los archivos que se cambiaron
git add archivos-cambiados

# Hacer el commit: procuren usar un título y mensaje descriptivo. Por ejemplo, eviten mensajes como "Cambios" o "arreglos".
# Un buen título de un commit describe de manera corta y concisa los cambios que se hicieron.
# Un buen mensaje de commit describe de manera detallada los cambios que se hicieron y por qué se hicieron.
git commit

# Subir los cambios a GitHub
git push --set-upstream origin nombre-de-la-rama
```

4. Una vez que hayan subido los cambios a GitHub, ir a la página del repositorio y hacer un pull request a la rama `main`. En el pull request, se pueden hacer comentarios sobre los cambios que se hicieron, y se pueden pedir revisiones a otros miembros del equipo. También podrán ver los resultados de las verificaciones automáticas que se hacen con GitHub Actions.

5. En caso de que deba hacer cambios adicionales, háganlos en la misma rama y suban los cambios a GitHub. Los cambios se van a reflejar automáticamente en el pull request. Para esto no es necesario cerrar el pull request y abrir uno nuevo. Simplemente vaya a su rama (`git checkout nombre-de-la-rama`), haga los cambios necesarios, haga un commit (use `git add` y `git commit` según corresponda) y suba los cambios a GitHub (con `git push`).

6. Una vez que el pull request haya sido aprobado por los miembros del equipo y haya pasado todas las verificaciones, se puede hacer el merge a la rama `main`. Para esto, simplemente haga clic en el botón "Merge pull request" en la página del pull request.

## Cómo compilar

Para compilar el proyecto, ejecuta los siguientes comandos:

```bash
cmake -S . -B build
cmake --build build
```

Para compilar en modo debug, ejecuta los siguientes comandos:

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build
```

La ventaja de compilar en modo debug es que su ejecutable va a incluir los símbolos de depuración, por lo que
al usar herramientas como gdb o valgrind, se van a poder ver los nombres de las funciones y las líneas de código
que generaron el error.

## Cómo ejecutar las pruebas

Para ejecutar las pruebas, ejecuta el siguiente comando:

```bash
./build/unit_tests
```

## Instrucciones para correr coverage

En el directorio raiz del proyecto, ejecutar los siguientes comandos:

```bash
cmake -S . -B build  -DCMAKE_BUILD_TYPE=Debug -DCOVERAGE=ON
cmake --build build
cd build
make
make coverage_html
```

Luego pueden abrir el archivo index.html que se encuentra en la carpeta coverage (build/coverage_html/index.html), para
ver el reporte de coverage.

## Dependencias

Esta plantilla tiene las siguientes dependencias:

- cmake
- gcovr
- clang-format
- clang-tools
- cppcheck
- google-test

Para instalarlas en Ubuntu, ejecuta el siguiente comando:

```bash
sudo apt install cmake gcovr
```

Para instalarlas en MacOS, ejecuta el siguiente comando:

```bash
brew install cmake gcovr
```

## clang-format
Esta plantilla incluye un estilo predefinido de clang-format, basado en el estilo de Google. Este se encuentra en el archivo .clang-format. Para formatear el código, ejecutar el siguiente comando:

```bash
./run-clang-format.sh
```

Es importante destacar que dicho comando solamente va a funcionar en sistemas Unix, como Linux o MacOS.

## Clang Analyzer
Clang Analyzer es una herramienta de análisis estático de código que permite encontrar errores en el código fuente. Para instalarlo, ejecuta los siguientes comandos:

```bash
sudo apt-get install clang-tools
```

Y para ejecutar Clang Analyzer, ejecuta el siguiente comando:

```bash
cmake -B build -S . -DCMAKE_BUILD_TYPE=DEBUG
cmake --build build
cd build
scan-build make -o clang_analyzer_report
```

El reporte de Clang Analyzer se va a encontrar en la carpeta build/clang_analyzer_report.

## Infer
Infer es una herramienta de análisis estático de código que permite encontrar errores en el código fuente. Para instalarlo, ejecuta los siguientes comandos:

```bash
VERSION=1.1.0; curl -sSL "https://github.com/facebook/infer/releases/download/v$VERSION/infer-linux64-v$VERSION.tar.xz" | sudo tar -C /opt -xJ && sudo ln -s "/opt/infer-linux64-v$VERSION/bin/infer" /usr/local/bin/infer
```

Para ejecutar Infer, ejecuta el siguiente comando:

```bash
cmake -B build -S . -DCMAKE_BUILD_TYPE=DEBUG
cmake --build build
cd build
infer run -- make
```

## cppcheck
Cppcheck es una herramienta de análisis estático de código que permite encontrar errores en el código fuente. Para instalarlo, ejecuta los siguientes comandos:

```bash
sudo apt install cppcheck
```

Para ejecutar Cppcheck, ejecuta el siguiente comando:

```bash
ppcheck --enable=all --suppress=missingIncludeSystem --suppress=syntaxError --error-exitcode=1 --includes-file=./include/ --language=c++ --std=c++11 -i src/CMakeLists.txt -i tests/CMakeLists.txt src/* test/*
```
