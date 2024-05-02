#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


void escribir_archivo_comprimido(vector<int> texto_comprimido, string nombre_archivo) {
    ofstream archivo(nombre_archivo + ".bin", ios::binary);
    if (archivo.is_open()) {
        for (int valor : texto_comprimido) {
            unsigned short binario = static_cast<unsigned short>(valor);
            archivo.write(reinterpret_cast<const char*>(&binario), sizeof(binario));
        }
        archivo.close();
    }
    else {
        cout << "Error al abrir el archivo binario";
    }
}


vector<int> leer_archivo_comprimido(string nombre_archivo) {
    ifstream archivo(nombre_archivo + ".bin", ios::binary);
    vector<int> contenido;

    if (archivo.is_open()) {
        unsigned short valor_binario;

        while (archivo.read(reinterpret_cast<char*>(&valor_binario), sizeof(valor_binario))) {
            int valor = static_cast<int>(valor_binario);
            contenido.push_back(valor);
        }

        archivo.close();
    }
    else {
        cout << "Error abriendo el archivo binario";
    }

    return contenido;
}



void escribir_archivo_plano(string texto_completo, string nombre_archivo) {
	ofstream archivo(nombre_archivo + ".txt");
	if (archivo.is_open()) {
		archivo << texto_completo;
		archivo.close();
	}
	else {
		cout << "Error al escribir el archivo plano";
	}

	return;
}


