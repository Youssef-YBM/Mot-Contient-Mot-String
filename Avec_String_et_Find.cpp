#include <iostream>
#include <string>

bool estSousSequence(const std::string& sousMot, const std::string& mot) {
    size_t pos = 0;  // position actuelle dans `mot`
    
    for (char c : sousMot) {
        // Chercher le caractère c à partir de pos
        size_t trouve = mot.find(c, pos);
        if (trouve == std::string::npos) {
            return false;  // caractère introuvable après pos
        }
        pos = trouve + 1;  // avancer après le caractère trouvé
    }
    return true;
}

int main() {
    std::string mot = "compteur";
    std::string sousMot = "cote";
    
    if (estSousSequence(sousMot, mot)) {
        std::cout << "\"" << sousMot << "\" est une sous-sequence de \"" 
                  << mot << "\"\n";
    } else {
        std::cout << "Non, ce n'est pas une sous-sequence\n";
    }
    
    // Autres tests
    std::cout << std::boolalpha;
    std::cout << estSousSequence("abc", "aXbYcZ") << "\n";  // true
    std::cout << estSousSequence("acb", "abc")     << "\n";  // false
    std::cout << estSousSequence("", "abc")        << "\n";  // true
    
    return 0;
}