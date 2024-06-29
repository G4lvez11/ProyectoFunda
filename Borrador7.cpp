#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

const int max_usuarios = 5;

struct Usuario 
{
    string nombre;
    int puntos;
};

void usuario_guardado(Usuario usuarios[], int num_usuarios) 
{
    for (int i = 0; i < num_usuarios; ++i) 
    {
        cout << "Ingrese su nombre de usuario " << i + 1 << ": ";
        cin >> usuarios[i].nombre;
        usuarios[i].puntos = 0;
    }
}

void mostrar_usuarios(const Usuario usuarios[], int num_usuarios) 
{
    cout << "Nombres de los usuarios registrados:\n";
    for (int i = 0; i < num_usuarios; ++i) 
    {
        cout << i + 1 << ". " << usuarios[i].nombre << " - Puntos: " << usuarios[i].puntos << "\n";
    }
}

void mostrar_ganador(const Usuario usuarios[], int num_usuarios) 
{
    if (num_usuarios == 0) 
    {
        cout << "No hay usuarios registrados.\n";
        return;
    }

    int mayor = usuarios[0].puntos;
    string ganador = usuarios[0].nombre;

    for (int i = 1; i < num_usuarios; i++) 
    {
        if (usuarios[i].puntos > mayor) 
        {
            mayor = usuarios[i].puntos;
            ganador = usuarios[i].nombre;
        }
    }

    cout << "El ganador de esta ronda es: " << ganador << " con " << mayor << " puntos";
}

int buscar_palabra(const string palabras[], int num_palabras, const string& palabra) 
{
    for (int i = 0; i < num_palabras; ++i) 
    {
        if (palabras[i] == palabra) 
        {
            return 1; 
        }
    }
    return 0; 
}

void sopadeletras(int dificultad, int& puntos) 
{
    string palabras_facil[] = {"SUPERMAN", "BATMAN", "WONDERWOMAN", "FLASH", "SPIDERMAN", "HULK", "THOR", "CAPTAINAMERICA"};
    string palabras_medio[] = {"PROCESADOR", "PLACABASE", "MEMORIARAM", "DISCODURO", "TARJETAGRAFICA", "TECLADO", "RANURAGRAFICA", "MONITOR", "CONEXIONES", "FUENTEDEPOWER"};
    string palabras_dificil[] = {"GAMEOFTHRONES", "DRAGON", "KNIGHT", "CASTLE", "BATTLE"};

    const string* palabras;
    int num_palabras;
    
    if (dificultad == 1) 
    {
        palabras = palabras_facil;
        num_palabras = 8;
        char sopafacil[8][8] = 
        {
            {'S', 'U', 'P', 'E', 'R', 'M', 'A', 'N'},
            {'B', 'A', 'T', 'M', 'A', 'N', 'G', 'R'},
            {'E', 'W', 'O', 'N', 'D', 'E', 'R', 'W'},
            {'O', 'M', 'F', 'L', 'A', 'S', 'H', 'I'},
            {'R', 'O', 'N', 'S', 'P', 'I', 'D', 'E'},
            {'R', 'M', 'A', 'N', 'H', 'U', 'L', 'K'},
            {'T', 'H', 'O', 'R', 'C', 'A', 'P', 'T'},
            {'A', 'I', 'N', 'A', 'M', 'G', 'R', 'E'}
        };

        for (int i = 0; i < 8; ++i) 
        {
            for (int j = 0; j < 8; ++j) 
            {
                cout << sopafacil[i][j] << ' ';
            }
            cout << endl;
        }
    } 
    else if (dificultad == 2) 
    {
        palabras = palabras_medio;
        num_palabras = 10;
        char sopamedio[10][10] = 
        {
            {'P','R','O','C','E','S','A','D','O','R'},
            {'P','L','A','C','A','B','A','S','E','E'},
            {'M','E','M','O','R','I','A','R','A','M'},
            {'D','I','S','C','O','D','U','R','O','N'},
            {'T','A','R','J','E','T','A','G','R','A'},
            {'T','E','C','L','A','D','O','R','R','A'},
            {'R','A','N','U','R','A','G','R','A','F'},
            {'M','O','N','I','T','O','R','S','S','D'},
            {'C','O','N','E','X','I','O','N','E','S'},
            {'F','U','E','N','T','E','D','E','P','O'}
        };

        for (int i = 0; i < 10; ++i) 
        {
            for (int j = 0; j < 10; ++j) 
            {
                cout << sopamedio[i][j] << ' ';
            }
            cout << endl;
        }
    }
    else if (dificultad == 3) 
    {
        palabras = palabras_dificil;
        num_palabras = 5;
        char sopadificil[12][12] =
        {
            {'R', 'B', 'T', 'Q', 'S', 'P', 'J', 'Z', 'W', 'R', 'W', 'G'},
            {'R', 'N', 'G', 'A', 'M', 'E', 'O', 'F', 'T', 'H', 'R', 'O'},
            {'S', 'R', 'L', 'A', 'T', 'T', 'U', 'Q', 'K', 'J', 'A', 'P'},
            {'S', 'N', 'O', 'C', 'R', 'A', 'S', 'P', 'H', 'A', 'Q', 'L'},
            {'A', 'G', 'O', 'O', 'R', 'K', 'S', 'R', 'N', 'H', 'N', 'E'},
            {'L', 'D', 'R', 'A', 'K', 'M', 'R', 'T', 'G', 'K', 'E', 'R'},
            {'E', 'N', 'O', 'S', 'H', 'I', 'E', 'E', 'B', 'O', 'C', 'I'},
            {'A', 'K', 'G', 'G', 'K', 'L', 'B', 'L', 'I', 'E', 'M', 'N'},
            {'B', 'L', 'I', 'K', 'E', 'A', 'A', 'H', 'T', 'R', 'F', 'G'},
            {'M', 'E', 'I', 'N', 'A', 'L', 'F', 'E', 'C', 'A', 'S', 'S'},
            {'O', 'S', 'N', 'E', 'R', 'F', 'S', 'D', 'H', 'T', 'A', 'O'},
            {'T', 'N', 'I', 'R', 'L', 'S', 'S', 'K', 'S', 'I', 'T', 'O'}
        };

        for (int i = 0; i < 12; ++i) 
        {
            for (int j = 0; j < 12; ++j) 
            {
                cout << sopadificil[i][j] << ' ';
            }
            cout << endl;
        }
    }
    else 
    {
        cout << "Dificultad no válida." << endl;
        return;
    }

    string palabra;
    cout << "Ingrese la palabra encontrada (o 'salir' para terminar): ";
    while (true) 
    {
        cin >> palabra;
        if (palabra == "salir") 
        {
            break;
        }

        if (buscar_palabra(palabras, num_palabras, palabra)) 
        {
            if (dificultad == 1)
                puntos += 2;
            else if (dificultad == 2)
                puntos += 4;
            else if (dificultad == 3)
                puntos += 8;
            cout << "Palabra correcta. Usted tiene " << puntos << " puntos.\n";
        } 
        else 
        {
            cout << "Palabra incorrecta." << endl;
        }

        cout << "Puntos actuales: " << puntos << endl;
        cout << "Ingrese otra palabra encontrada (o 'salir' para terminar): ";
    }
}

void actualizar_puntos(Usuario usuarios[], int num_usuarios, const string& nombre, int puntos)
{
    for (int i = 0; i < num_usuarios; ++i) 
    {
        if (usuarios[i].nombre == nombre) 
        {
            usuarios[i].puntos += puntos;
            break;
        }
    }
}

void instrucciones()
{
    cout << "La sopa de letras es un juego que consta de una serie de palabras desordenadas, en la que el jugador tiene encontrar o descifrar las palabras escondidas en la sopa de letras.\n";
    sleep(4);
    cout << "Las indicaciones son las siguientes:\n";
    sleep(4);
    cout << "1- El juego es individual, cada persona tiene su perfil.\n";
    sleep(4);
    cout << "2- Deberas encontrar una serie de palabras dispersas en la sopa de letras.\n";
    sleep(4);
    cout << "3- Entre más palabras encuentre el jugador mayor sera su puntaje.\n";   
    sleep(4);
    cout << "4- En le perfil de cada jugador se irá guardando los puntos que recolecte.\n";
    sleep(4);
    cout << "5- Al final del juego se podrá ver qué jugador consiguió mayor puntaje, en el apartado de Ranking en el menú principal.\n";
    sleep(4);
    cout << "Las palabras que vayas encontrando debes escribirlas sin espacios y en mayúsculas\n";
    sleep(10);
}

int main() 
{
    Usuario usuarios[max_usuarios];
    int num_usuarios = 0;
    int menu;
    int dificultad;
    string nombre_usuario;

    while (true) 
    {
        cout << "_____ SOPA DE LETRAS _____ \n";
        cout << "1) Registro\n";
        cout << "2) Ranking\n";
        cout << "3) Jugar\n";
        cout << "4) Instrucciones\n";
        cout << "5) Nombres\n";
        cout << "6) Salir\n";
        cout << "Elige una opcion: ";
        cin >> menu;

        switch (menu) 
        {
            case 1:
            {
                cout << "Ingrese la cantidad de usuarios: ";
                cin >> num_usuarios;
                if (num_usuarios > max_usuarios) {
                    cout << "Número de usuarios excede el máximo permitido.\n";
                    num_usuarios = max_usuarios;
                }
                usuario_guardado(usuarios, num_usuarios);
                break;
            }
            case 2:
            {
                mostrar_usuarios(usuarios, num_usuarios);
                mostrar_ganador(usuarios, num_usuarios);
                break;
            }
            case 3:
            {
                cout << "Ingrese su nombre de usuario: ";
                cin >> nombre_usuario;
                cout << "Escoja dificultad: \n";
                cout << "1) Facil\n";
                cout << "2) Intermedio\n";
                cout << "3) Dificil\n";
                cout << "Elige una dificultad: ";
                cin >> dificultad;

                int puntos = 0;
                sopadeletras(dificultad, puntos);
                actualizar_puntos(usuarios, num_usuarios, nombre_usuario, puntos);
                break;
            }
            case 4:
            {
                instrucciones();
                break;
            }
            case 5:
            {
                cout << "Echo por:\n";
                cout << "Anderson Galvez\n";
                cout << "Marco\n";
                cout << "Gerardo Cornejo Orellana - 00043524\n";
                break;
            }
            case 6:
            {
                cout << "Saliendo del Juego...";
                return 0;
            }
            default:
            {
                cout << "Esa no es una opción válida.";
                break;
            }
        }
    }
    return 0;
}
