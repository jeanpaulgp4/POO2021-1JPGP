#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CONTACTOS 40

typedef struct contacto contacto;

struct contacto{
   char Nombre[ 30 ];
   char Apellido[ 30 ];
   int numero;
};

void menu(){
   printf( "Bienvenido a la agenda de contactos elija una opcion:\n"
           "1. Crear agenda de contactos\n"
           "2. Añadir contacto\n"
           "3. Visualizar contactos\n"
           "0. Salir\n"
           "opcion: " );
   return;
}

int main( int argc, char * argv[] ){
   FILE *f;
   contacto agenda[ MAX_CONTACTOS ], temp;
   int opcion, n = 0, i,  j;
   int numero;
   char Nombre[ 10 ];
   do{
      menu();
      scanf( "%d", &opcion );
      switch( opcion ){
         case 1:
            for( i = 0; i < n; i++ )
               for( j = 0; j < n - 1; j++ )
                  if( agenda[ j ].numero > agenda[ j + 1 ].numero ){
                     temp = agenda[ j ];
                     agenda[ j ] = agenda[ j + 1 ];
                     agenda[ j + 1 ] = temp;
                  }
            f = fopen( "Agenda.txt", "w" );
            fprintf( f, "DIRECTORIO\n" );
            for( i = 0; i < n; i++ ){
               fprintf( f, "%s - ", agenda[ i ].Nombre);
               fprintf( f, "%s - ", agenda[ i ].Apellido);
               fprintf( f, "%i", agenda[ i ].numero );
               fprintf( f, "\n");
            }
            fprintf( f, "\n" );
            fclose( f );
            system( "notepad Agenda.txt" );
            break;
         case 2:
            printf( "Digite el nombre del contacto: " ); scanf( "%s", agenda[ n ].Nombre );
            printf( "Digite el apellido del contacto: " ); scanf( "%s", agenda[ n ].Apellido );
            printf( "Digite el celular del contacto: " ); scanf( "%d", &agenda[ n ].numero );
            n++;
            break;
         case 3:
            for( i = 0; i < n; i++ )
            printf( "(%s, %s, %i) ", agenda[ i ].Nombre,agenda[ i ].Apellido, agenda[ i ].numero );
            printf( "\n" );
            break;
      }
   }while( opcion != 0 );
   return 0;
}

