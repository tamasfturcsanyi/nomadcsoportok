#include <iostream>
#include <fstream>
#include <vector>
#include <string>


using namespace std;

class Gyerek{
public:
    string nev;
    bool fiu;
    bool extro;
    bool sport;
    int kor;
};


class Csapat{
    string nev;
    vector<Gyerek> tagok;
    string vezeto1;
    string vezeto2;
    ifstream file;
    int kor;

public:
    void read(string csapatnev){
        nev = csapatnev;
        file.open(csapatnev);
        if(!file){
            throw "Nem lehet megnyitni";
        }
        file >> kor;
        file >> vezeto1;
        file >> vezeto2;
        int meret;
        char betu;
        file >> meret;
        
        for(int i = 0; i < meret; i++){
            Gyerek gy;
            gy.kor = kor;
            file >> gy.nev;
            file >> betu;
            gy.fiu = (betu == 'f' || betu == 'F');
            file >> betu;
            gy.extro = (betu == 'e' || betu == 'E');
            file >> betu;
            gy.sport = (betu == 's' || betu == 'S');
            tagok.push_back(gy);
        }
    }

    void write()const {
        cout << "Csapatnev:"<< nev << endl;
        cout << "vezeto1:"<<vezeto1 << endl;
        cout << "vezeto2:"<<vezeto2 << endl;
        cout << "eletkor:"<<kor << endl;
        cout << "Gyerek:" <<endl;

        for(const Gyerek& gy : tagok){
            cout << gy.nev;
            if(gy.fiu){
                cout << " fiu ";
            }
            else{
                cout << " lany ";
            }
            if(gy.extro){
                cout << " extrovertalt ";
            }
            else{
                cout << " introvertalt ";
            }
            if(gy.sport){
                cout << " sportos ";
            }
            else{
                cout << " nem sportos ";
            }
            cout << endl;
        }

        
    }
};

int main()
{
    Csapat almos; //sdfasdf
    almos.read("almosmadarak.txt");
    almos.write();
}
