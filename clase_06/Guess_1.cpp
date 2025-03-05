
#include <iostream>
using namespace std;
int main (){
char ch= 'K';
char answer = 'K';

std::cout<<"Estoy pensando en una letra de la A a la Z"<< endl;
std::cout<<"Puedes adivinarla?"<< endl;
std:: cin >> answer ; //lee el char desde el teclado 
if (ch == answer) cout << "**Correcto **" << endl;
else cout << "**... Sorry, esta equivocado" <<endl;
return  0;
}
