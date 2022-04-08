
# Práctica 2: Uso de bibliotecas de programación de interfaces de usuario en modo texto
## Pre-Requisitos 📋
- Linux OS
- Ncurses library (sudo apt-get install libncurses5-dev libncursesw5-dev for Ubuntu)
## Objetivos
- Instalar la librería ncurses en Linux.
- Crear programas sencillos basados en ncurses.
# Instalación
> Resultado tras la instalación:

![enter image description here](https://github.com/Phyrov/PDIH/blob/main/P2/img/Setup-ncurses.png?raw=true)
![enter image description here](https://github.com/Phyrov/PDIH/blob/main/P2/img/Setup-ncurses-finish.png?raw=true)
# Programas de ejemplo
## Mostrar una ventana en el terminal

> Compilar con 
> gcc ventana.c -o ventana -lncurses
```c
#include <stdlib.h>
#include <ncurses.h>
int main(void) {
	int rows, cols;
	
	initscr();
	
	if (has_colors() == FALSE) {
		endwin();
		printf("Your terminal does not support color\n");
		exit(1);
	}
	start_color();
	init_pair(1, COLOR_YELLOW, COLOR_GREEN);
	init_pair(2, COLOR_BLACK, COLOR_WHITE);
	init_pair(3,COLOR_WHITE,COLOR_BLUE);
	clear();
	
	refresh();
	getmaxyx(stdscr, rows, cols);
	
	WINDOW *window = newwin(rows,cols,0,0);
	wbkgd(window, COLOR_PAIR(3));
	box(window, '|', '-');
	
	mvwprintw(window, 10, 10, "una cadena");
	wrefresh(window);  
	
	getch();
	endwin();
	return  0;
}
```
### Ejemplo de ejecución
>Compilación

![enter image description here](https://github.com/Phyrov/PDIH/blob/main/P2/img/compile-ventana.png?raw=true)
> Ejecución

![enter image description here](https://github.com/Phyrov/PDIH/blob/main/P2/img/execute-ventana.png?raw=true)
## Mover una "pelotita" en pantalla 
```c
#include <ncurses.h>
#include <unistd.h>

#define DELAY 30000

int main(int argc, char *argv[]) {
	int x = 0, y = 0;
	int max_y = 20, max_x = 20;
	int next_x = 0;
	int direction = 1;
	
	initscr();
	noecho();
	curs_set(FALSE);
	
	while(1) {
		clear();
		mvprintw(y, x, "o");
		refresh();
		usleep(DELAY);
		next_x = x + direction;  
		if (next_x >= max_x || next_x < 0) {
			direction*= -1;
		} else {
			x+= direction;
		}
	}
	endwin();
}
```
> Compilación

![enter image description here](https://github.com/Phyrov/PDIH/blob/main/P2/img/compile-pelotita.png?raw=true)
> Ejecución

![enter image description here](https://github.com/Phyrov/PDIH/blob/main/P2/img/execute-pelotita.png?raw=true)

## Juego Ping Pong terminal  🔧

Se trata de un pequeño juego en terminal basado en el clásico Ping-Pong. Primero mostramos una pantalla de carga.
![enter image description here](https://github.com/Phyrov/PDIH/blob/main/P2/img/Instruction-pingpong.png?raw=true)

Seleccionamos el nivel de dificultad.
![enter image description here](https://github.com/Phyrov/PDIH/blob/main/P2/img/Level-selection.png?raw=true)

Tras acabar la partida se muestra la pantalla final y el ganador.
![enter image description here](https://github.com/Phyrov/PDIH/blob/main/P2/img/Playing-game.png?raw=true)
# Autores ✒️

* **Francisco Lara Marín**
* **Álvaro Marín Pérez**
