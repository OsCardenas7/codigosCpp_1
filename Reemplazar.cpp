#include <iostream>
#include <string>

using namespace std;

string reemplazarPalabra(const std::string& texto, const std::string& palabraAntigua, const std::string& palabraNueva) {
    string textoModificado = texto;

    // Buscar y reemplazar todas las ocurrencias de la palabra
    size_t pos = textoModificado.find(palabraAntigua);
    while (pos != std::string::npos) {
        textoModificado.replace(pos, palabraAntigua.length(), palabraNueva);
        pos = textoModificado.find(palabraAntigua, pos + palabraNueva.length());
    }

    return textoModificado;
}

int main() {
    string textoOriginal = "Este es un ejemplo de texto con una palabra concreta.";
    string palabraConcreta = "concreta";
    string nuevaPalabra = "reemplazada";
    string textoModificado = reemplazarPalabra(textoOriginal, palabraConcreta, nuevaPalabra);

    cout << "Texto original: " << textoOriginal << std::endl;
    cout << "Texto modificado: " << textoModificado << std::endl;

    return 0;
}
