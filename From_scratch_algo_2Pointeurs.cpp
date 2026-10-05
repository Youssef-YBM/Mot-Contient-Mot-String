#include <iostream>
#include <cstring>

bool estSousSequence(const char* sousMot, const char* mot) {
    int i = 0;  // index dans sousMot
    int j = 0;  // index dans mot
    
    while (sousMot[i] != '\0' && mot[j] != '\0') {
        if (sousMot[i] == mot[j]) {
            i++;  // caractère trouvé -> on avance dans sousMot
        }
        j++;      // on avance toujours dans mot
    }
    
    // Si on a parcouru tout sousMot -> c'est une sous-séquence
    return sousMot[i] == '\0';
}

int main() {
    const char* mot     = "compteur";
    const char* sousMot = "cote";
    
    if (estSousSequence(sousMot, mot)) {
        std::cout << "\"" << sousMot << "\" est une sous-sequence de \"" 
                  << mot << "\"\n";
    } else {
        std::cout << "Non\n";
    }
    
    std::cout << std::boolalpha;
    std::cout << estSousSequence("abc", "aXbYcZ") << "\n";  // true
    std::cout << estSousSequence("acb", "abc")     << "\n";  // false
    std::cout << estSousSequence("", "abc")        << "\n";  // true
    
    return 0;
}