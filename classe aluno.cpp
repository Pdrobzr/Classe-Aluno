#include <iostream>
using namespace std;


class Aluno{
    public:
    string matricula;
    int numMatricula, telefone;
    Aluno(string x, int y, int z){
        this->matricula = x;
        this->numMatricula = y;
        this->telefone = z;
    }
    Aluno(){
        this->matricula = matricula;
        this->numMatricula = numMatricula;
        this->telefone = telefone;
    }
    void exibirDadosAlunos(Aluno a1, Aluno a2){
        cout << a1.matricula << " " << a2.matricula << endl;
        cout << a1.numMatricula << " " << a2.numMatricula << endl;
        cout << a1.telefone << " " << a2.telefone << endl;
    }
   
};



int main(){
    Aluno a1("Pedro" , 123, 1399161);
    Aluno a2;
    a2.matricula = "Silva";
    a2.numMatricula = 124;
    a2.telefone = 13981;
    a1.exibirDadosAlunos(a1,a2);
}



