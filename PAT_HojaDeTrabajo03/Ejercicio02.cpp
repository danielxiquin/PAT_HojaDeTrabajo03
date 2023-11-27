#include "Ejercicio02.h"


vector<vector<string>>* Ejercicio02::groupAnagrams(vector<string>& strings)
{
    
    unordered_map<string, vector<string>> anagrama;

    for (const auto& dato : strings) {
        string clave = dato;
        sort(clave.begin(), clave.end());
        anagrama[clave].push_back(dato);
    }

    auto resultado = new vector<vector<string>>;

    for (auto& result : anagrama) {
        resultado->push_back(result.second);
    }

    

    return resultado;
}


