#include <string>
#include <map>

std::string palavra_secreta = "MELANCIA";
std::map<char, bool> chutou;

bool letra_existe(char chute){
    for(char letra : palavra_secreta){
        if(chute == letra){
            return true;
        }
    }
    return false;
}