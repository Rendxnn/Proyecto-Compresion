#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include "LZW.cpp"
#include "archivos.cpp"


string leer_entrada() {
    string entrada; 
    string texto_completo; 

    cout << "Ingresa texto. Presiona Enter después de cada línea." << std::endl;
    
    while (std::getline(std::cin, entrada)) {
        if (entrada == "exit") { 
            break;
        }
        texto_completo += entrada + "\n"; 
    }
    
    return texto_completo;
}


int main(int argc, char *argv[]) {

    if (argc != 3) {
        cerr << "Uso: " << argv[0] << " <nombre de archivo sin extension> " << "<opcion>";
    }

    string nombre_archivo = argv[1];
    string opcion = argv[2];


	if (opcion == "crear") {
        string entrada = leer_entrada();

        escribir_archivo_plano(entrada, nombre_archivo);

        vector<int> comprimido = comprimir_lzw(entrada); 

        for (int num: comprimido) {
            cout << num << " ";

        }
        
        cout << endl;

        escribir_archivo_comprimido(comprimido, nombre_archivo);

    }

    if (opcion == "editar") {
        vector<int> contenido = leer_archivo_comprimido(nombre_archivo);
        string descomprimido = descomprimir_lzw(contenido);
        cout << descomprimido;
    }


    




    return 0;
}


