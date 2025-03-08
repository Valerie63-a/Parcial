# Parcial

# Instalación y Ejecución del Código

## 1. Instalar Python en Windows
1. Descarga e instala Python desde [python.org](https://www.python.org/) y marca la opción **"Add Python to PATH"**.
2. Descarga e instala Visual Studio Code desde [code.visualstudio.com](https://code.visualstudio.com/).
3. Abre VS Code y ve a la pestaña **Extensiones**, busca **"Python"** e instálalo.
4. Crea un archivo en VS Code con extensión **.py**.
5. Abre la terminal en **Terminal > Nueva Terminal**.
6. Ejecuta el código escribiendo python conductividad.py y presiona **Enter**.
7. Ingresa un número cuando lo pida el programa y obtendrás el resultado.

---

## 2. Instalar Python en Mac/Linux
1. Verifica si Python está instalado escribiendo en la terminal:
2. 2. Si no está instalado:
- En **macOS**, instala con:
  ```
  brew install python
  ```
- En **Linux**, instala con:
  ```
  sudo apt install python3
  ```
  o  
  ```
  sudo dnf install python3
  ```
3. Descarga e instala Visual Studio Code desde [code.visualstudio.com](https://code.visualstudio.com/).
4. Sigue los mismos pasos que en **Windows** después de instalar VS Code.


# Compilar y Ejecutar Código C++

## 1. Compilar y Ejecutar en Windows

### Requisitos:
- **Compilador:** Instala MinGW (Minimalist GNU for Windows) y Microsoft Visual Studio.
- **Editor de texto:** Puedes usar Notepad, Notepad++, o cualquier otro editor de tu preferencia.

### Pasos:

#### Instalar MinGW:
1. Descarga e instala MinGW desde su sitio oficial.
2. Corre el instalador y sigue los pasos del asistente de instalación.
3. Elige la carpeta de instalación y guárdala para más tarde.
4. Al finalizar la instalación, marca la opción **"Ejecutar MSYS2"** y haz clic en **"Terminar"**. Se abrirá automáticamente una ventana de terminal de MSYS2.
5. En la terminal de MSYS2, instala la cadena de herramientas de **MinGW-w64** con el siguiente comando:
6. Se mostrará una lista de paquetes disponibles. Acepta la cantidad de paquetes por defecto presionando **Enter**.
7. Escribe **"Y"** cuando te lo pidan para continuar con la instalación.
8. Agrega la carpeta `bin` de **MinGW-w64** a las variables de entorno de Windows:
- Abre **Configuración** en Windows.
- Busca **"Editar variables de entorno"**.
- En las variables de usuario, selecciona **"Editar"**.
- Haz clic en **"Nuevo"** y añade la ruta de **MinGW-w64** que guardaste previamente.
- Acepta los cambios y cierra la ventana.

#### Escribir el código:
1. Escribe tu código en **Visual Studio**.
2. Guarda el archivo con extensión **.cpp**.

#### Compilar y ejecutar en Visual Studio:
1. En la parte superior derecha, busca el botón de **"Play"** con una flecha hacia abajo.
2. Haz clic en la flecha y selecciona **"Ejecutar un archivo C++"**.

---

## 2. Compilar y Ejecutar en Linux

### Requisitos:
- **Compilador:** Instala **g++ (GNU C++ Compiler)**.
- **Editor de texto:** Puedes usar **nano, vim, gedit**, o cualquier otro editor.

### Pasos:

#### Instalar g++:
1. Abre una terminal y ejecuta:

#### Escribir el código:
1. Guarda tu código en un archivo con extensión **.cpp** (e.g., `main.cpp`).

#### Compilar:
1. Navega al directorio donde está tu archivo `.cpp` usando:
