#include <iostream>
#include <string>
using namespace std;
bool win (string a, string b)
{
    if (a.compare("pedra") == 0){
        if (b.compare("tesoura") == 0 || b.compare("lagarto") == 0){
            return true;
        }
    }
    else if (a.compare("papel") == 0){
        if (b.compare("pedra") == 0 || b.compare("Spock") == 0){
            return true;
        }
    }
    else if (a.compare("tesoura") == 0){
        if (b.compare("papel") == 0 || b.compare("lagarto") == 0){
            return true;
        }
    }
    else if (a.compare("lagarto")==0){
        if (b.compare("Spock") == 0 || b.compare("papel") == 0){
            return true;
        }
    }
    else if (a.compare("Spock") == 0){
        if (b.compare("tesoura") == 0 || b.compare("pedra") == 0){
            return true;
        }
    }
    return false;
}
int main ()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++){
        string sheldon, raj;
        cin >> sheldon >> raj;
        if (sheldon.compare(raj) == 0)
            cout << "Caso #" << k << ": De novo!" << endl;
        else if (win(sheldon, raj))
            cout << "Caso #" << k << ": Bazinga!" << endl;
        else
            cout << "Caso #" << k << ": Raj trapaceou!" << endl;
    }
    return 0;
}
