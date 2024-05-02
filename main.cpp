#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include "LZW.cpp"


int main() {

	string entrada; 
    string textoCompleto; 
    
    cout << "Ingresa texto. Presiona Enter después de cada línea." << std::endl;
    
    while (std::getline(std::cin, entrada)) {
        if (entrada == "exit") { 
            break;
        }
        textoCompleto += entrada + "\n"; 
    }
    
    cout << "Texto completo ingresado:" << endl;
    cout << textoCompleto << endl;    

    vector<int> comprimido = comprimir_lzw(textoCompleto);
    string descomprimido = descomprimir_lzw(comprimido);
    
    cout << "Original: " << textoCompleto << " " << textoCompleto.length() << endl;
    cout << "Compressed: ";
    for (int code : comprimido) {
        cout << code << " ";
    }
    cout << " " << comprimido.size() << endl;
    cout << "Decompressed: " << descomprimido << " " << descomprimido.length() << endl;

    return 0;
}
