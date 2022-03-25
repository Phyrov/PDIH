
#ifndef BYTE
    #define BYTE unsigned char
#endif
void mi_pausa(void);
int get_y(void);
int get_x(void);
void gotoxy(int x, int y);
void setcursortype(int tipo_cursor);
void setvideomode(BYTE modo);
int getvideomode(void);
void textcolor_pr1(int color_texto_pass);
void textbackground_pr1(int color_fondo_pass);
void clrscr_pr1(void);
void cputchar(char caracter);
void getche(void);
 


