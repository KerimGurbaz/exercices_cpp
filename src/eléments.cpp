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
int main() {
    //string a = "Test";
    //string b = "Case";
    int num = 037;

   // a += " - " + b + to_string(num);


    cout << num << endl;

    return 0;
}
// manipulation de chaines avec des pointeurs.
int main() {

    string str1 = "hello mes amis!!" ;

    string* ptr = &str1;
    char str_p = 'Z';

    str1[0] = str_p;

    cout<< str1<<endl;
    cout<< *ptr<<endl;
    return 0;
}
int main() {
    int n(7);

    if(n<10)
        if(n>0)
            cout<<"The number is positive. "<< endl;
    else
        cout<< "The number is ----"<< endl;


    return 0;
}
void func(int &a, int *b) {

    a+=*b;
    *b = a-*b;
    a -=*b;
}

int main() {

    int x =10;
    int y = 20;
    func(x, &y);

    cout<< " x = " << x << " y = " << y<< endl;

    return 0;
}
void swapByPointer(int *a,  int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a =b;
    b =temp;
}
int main() {
    int x = 5, y =10;

    swapByPointer( &x,  &y);
    cout<< "After swapByPointer: x = " << x << ", y = " << y<<endl;

    swapByReference(x,y);

    cout << "After swapByReference : x = " << x << " , y = "<< y <<endl;
    return 0;
}

int main() {
    int arr[] ={2,4,6,8,10};
    int* ptr = arr;

    int x = 10;
    int * const ptr1= &x;
    *ptr1 = 20; // valid

    cout<<ptr1<< endl;
    cout<<x<< endl;

    cout <<*ptr<< endl;
    ++ptr;
    cout <<*ptr<< endl;
    ptr +=2;
    cout <<*ptr + 19 << endl;






    return 0;
}

void printValue(int *ptr) {
    if(ptr != nullptr) {
        cout<< "Value : " << *ptr <<endl;
    }
    else {
       cout<<" Pointer is null..." << endl;
   }
}

int main() {
    int p =12;
    int *ptr1 = &p;
    printValue(ptr1) ;
    return 0;
}
int main() {

    char c = 'A';
    char * ptr = &c;

    cout <<" Valeur de c : " << c << endl;
    cout << "Address de c : " << static_cast<void*>(ptr) << endl;
    cout << " Valeur pointée par ptr " << *ptr << endl;


    return 0;
}

int main() {

    const char c = 'A';
    const char * const ptr = &c;


    cout <<" Valeur de c : " << c << endl;
    //cout << "Address de c : " << static_cast<void*>(ptr) << endl;
    cout << " Valeur pointée par ptr " << *ptr << endl;



    return 0;
}

void func(double *a, double *b){
        return a*b;
    };
int main() {

    double a, b;
    double *ptr1 =&a;
    double *ptr2 =&b;
    func(ptr1, ptr2);

    return 0;
}
int main() {
    int n(-3);

    if(n<10)
        if(n>0)
            cout<< "The number is positive"<< endl;
    else
        cout<<" The number is ---" << endl;


    return 0;
}

int main() {

    int n = 10;

    while(n>0) {

          n /=2;
    cout<<n*n<<endl;
    }
    return 0;
}
int main() {

   int arr[3] ={1,2,3};
    int *ptr =arr;
    *(ptr+1) = 20;
    for(int i=0; i<3; i++) {
        cout<<arr[i]<<endl;
    }


    return 0 ;
}
int main() {
    int var =30;
    int *ptr = &var;
    int **pptr = &ptr;
    **pptr += 10;

    cout<<var<<endl;
    cout<<&var<<endl;

    return 0;
}
int main() {
    float income;
    char choice;
    do {
        if(!(cin >> income)) {
            cout<<"Entrée invalide. Veuillez saisir une valeur numerique. ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');//ignore les caractères restant
            continue; // Recommence la boucle.
        }

        if(income<0.0)
            cout<<"Vous accumulez davantage de dettes chaque mois."<<endl;
        else if(income < 1200.00)
            cout<< "Vous vivez dans en dessous du seuil de pauvraté."<<endl;
        else if(income < 2500.00)
            cout<<"Vous vivez dans un confort modéré."<<endl;
        else
            cout<<"vous êtes bien loti.";

        cout<< "Voulez-vous entrer un autre revenu ?(y/n)"<<endl;

    }while(choice =='y' || choice=='Y');

    return 0;

}
int main() {
    int n(7);
    cout<<"Enter an integer : ";
 //   cin >> n;

    if(n<10)
        cout<<"Less than 10";
    else if(n>5)
        cout<< "greater than 5";
    else
        cout<<"not interesting"<< endl;

    return 0;
}

int main() {

    int n = 5;
    if (n == 0) // NOTE THE OPERATOR!!!
        cout << "n is zero" << ".\n";
    else
        cout << "n is not zero \n";
    cout << "The square of n is " << n * n << ".\n";

    return 0;
}

 */
#include <iostream>
#include <limits>
#include <string>
using namespace std;




































