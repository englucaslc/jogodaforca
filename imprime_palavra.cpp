#include <iostream>
#include <string>
#include <map>
#include "imprime_erros.cpp"

std::string palavra_secreta = "MELANCIA";
std::map<char, bool> chutou;

void imprime_palavra(){
        imprime_erros();
        for(char letra : palavra_secreta){
            if(chutou[letra]){
                std::cout << letra << " ";
            }
            else{
                std::cout << "_";
            }
        }
}