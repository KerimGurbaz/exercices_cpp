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
 */
#include <iostream>
using namespace std;

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