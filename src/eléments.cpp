//
// Created by Krm on 19/09/2024.
//

/*
 * using namespace std;

int main() {

    cout << "Hello world " << endl;
    cout << "Fin de programme " << endl;

    return EXIT_SUCCESS;
}#include <iostream>
#include <cstdlib>

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    cout<< "Hello "<< endl;

    return EXIT_SUCCESS;

}

#include <iostream>
#include <cmath>
using namespace std;
int abs(int x){
    cout<< x<<endl;
  return (x < 0 )? -x : x;
}

float sqr(float x) {

    return x*x;
}
void myFunction() {
    // corps de la function
}
int main() {

    int i = 5 ; // une définition
    // int i; => declaration;
    int result = abs(-100);
    float result2 = sqr(2.2);
    cout<<result<< endl;
    cout<<result2 << endl;
    int x =25;// initialisation de x avec la valeur 0;

    void(*f)()=&myFunction;

    struct Point {double x; double y;};

    struct Thing;

    //

return 0;
//int abs(int x); // ceci une déclaration(elle indique qu'il existe une fonction appelp abs qui prend un rntier x en paramètre et retourne un entier.

//float sqr(float x); il s'agit d'une déclaration.
}
#include <iostream>
using namespace std;


#include <iostream>
    using namespace std;

    int main() {
        char c = 'A';
        char* ptr = &c;

        cout << "Value of c: " << c << endl;                      // 'A'
        cout << "Address stored in ptr (interpreted as string): " << ptr << endl;
        cout << "Dereferenced value of ptr: " << *ptr << endl;    // 'A' yazdırılır.

    return 0;
}

int main() {
    //int i(2), j(3), k(0);
    //k=i += j++ +2;

    // int i(1), j(17), k(5);
    //  i=(k = j % k )+ 3 ;

    // int i(1), j(17), k(5);
    // i=11 + j/4 +3;

    //int i(1), j(17), k(5);
    //i= k/2 + (j+=1);

    /*
     *    int i(1), j(0), k(3);
    i= ++j and k--;


    cout<<"i = " << i<<endl;
    cout<<"j = " << j<<endl;
    cout<<"k = " << k<<endl;

    return 0;

}
     /*


    int x =10;
    int y =19;
    x=y;

    int *ptr = &x;

    //cout<<*ptr<<endl;
    //cout<<x<<endl;
    //cout<<&x<<endl;
    //cout<<ptr<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
}

//combien font 1729 centimes en francs?


int main() {
    // Declaration  de la variable
    int centimes =1792;
    double a;
    float b;
    a=2.12;
    b=2.43;
    bool resultat1= a<b;
    cout<< resultat1<<endl;
    cout<< a<<endl;
    cout<< b<<endl;


    //conversion en francs ( 1 franc = 100 centimes)
    int francs = centimes / 100 ; //division entière pour obtenir les francs.
    int rest_centimes = centimes  % 100 ;

    //affichage du resultat
    cout << centimes <<" centimes font " << francs << " francs et " << rest_centimes<< " centimes.";


    return 0;
}

int main() {
    // Déclaration des variables

    float fraisExpedition =10.0;
    string pays, etat;
    pays = "USA";
    etat = "AK";

    if(pays != "USA" || etat =="AK" || etat =="HI") {
        fraisExpedition = 20.0;

        // Affichage du résultat
        cout<< " Frais d'éxpédition : $  " << fraisExpedition << endl;


        return 0;
    }
}
 int main() {
    int number;
    cout<< " Entrer un number svp ? " << endl;
    cin >> number;

    if(number < 0) {
        cout <<" votre number est negatif" << endl;
    }
    else if(number > 0){
        cout <<" votre number est positif" << endl;
    }
    else
        cout <<" votre number est zéro" << endl;


    return 0;
}
//Boucles et if-else

int main() {
int i(5);

    for(int i=0; i<10; ++i){

        cout<<i<<endl;

    }
    cout<<i<<endl;

    return 0 ;
}
// renvoie le carré
int sqr(int x) {
    return x*x;
}

int main() {

    cout<< "Saisir un nombre svp : ";
    int a;
    cin>> a;

    int result = sqr(a);

   cout<< result<<endl;
    return 0;
}
//Tableaux (Arrays)
int main() {

    int nombres[5] = {1,2,3,4,5};

    for(int i = 0; i < 5 ; i++ ) {

        cout << nombres[i];
        if(i !=4) {
          cout<<" - ";
       }
    }
    cout<<endl;

    return 0;
}
// Manipulation de chaines
int main() {
    cout<< "Saisir un texte : "<<endl;
    string str;
    getline(cin, str);

    cout<<"longeur de votre text  est: "<< str.length() << endl;

    return 0;
}

// Chaines de carècteres
int main() {

    char str[] = "HEIG-VD";

    for(int i =0; i<sizeof(str); i++) {
        cout<<str[i]<<endl;
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    double a, b;  // Utiliser double pour permettre les opérations sur les décimales
    char opt;

    cout << "Premier nombre s'il vous plaît : ";
    cin >> a;
    cout << "Deuxième nombre s'il vous plaît : ";
    cin >> b;
    cout << "Saisir une des opérations : +, -, *, / : ";
    cin >> opt;

    switch (opt) {
        case '+':
            cout << "Résultat : " << a + b << endl;  // Affiche le résultat
        break;

        case '-':
            cout << "Résultat : " << a - b << endl;  // Affiche le résultat
        break;

        case '*':
            cout << "Résultat : " << a * b << endl;  // Affiche le résultat
        break;

        case '/':
            if (b != 0) {  // Vérifie si b est différent de zéro
                cout << "Résultat : " << a / b << endl;  // Affiche le résultat
            } else {
                cout << "Erreur : Division par zéro !" << endl;  // Message d'erreur
            }
        break;

        default:
            cout << "Votre opération n'est pas correcte." << endl;  // Message d'erreur
    }

    return 0;
}
int main() {
    int num, res(1);
    cin>> num;

     while(num>0) {
         res *=num;
         num--;
     }

    cout<< res<<endl;

    return 0;
}
// Trouver le plus grand nombre dans un tableau;
int main() {
    int numbers[5] = {111,334,643,765,324};
    int my_max(0);
    int size = sizeof(numbers)/ sizeof(numbers[0]);

    for(int i =0 ; i<size ; i++) {
        my_max =  (my_max <= numbers[i]) ? numbers[i] : my_max;
    }
    cout<< "maximum number est :"<< my_max;

    return 0;
}
//Chaines de caractères et accès aux éléments
int main() {

    string str1 = "Kerim";
string str2 = "Gurbaz";

str1[1]= str2[1];

cout<< str1<<endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {

    string str1 = "HEIG";
    string str2 = "VD";
    int num1= 1234;

    str1 += " - " + str2 + to_string(num1);

    cout<< str1 <<endl;


    return 0;
}

 */
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "Test";
    string b = "Case";
    int num = 42;

    a += " - " + b + to_string(num);

    cout << a << endl;

    return 0;
}

















