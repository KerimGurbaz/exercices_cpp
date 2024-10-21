//
// Created by Krm on 30/09/2024.
//


/*
 *#include <iostream>
using namespace std;
 * int main(){
int i, n , som;
    som =0;

    for(i = 0; i<4; i++) {

        cout<<"Donnez un entier ";
        cin>>n;
        som +=n;
    }
    cout<< "Somme : "<< som;
return 0;
}
int main() {

    int n, som(0), i(0);

    do{
        cout<<"Donnez un entier : \n";
        cin>>n;
        som +=n;
        i++;
    }while(i<4);
    cout<<"Som" << som <<endl;
}
//Fonction pour allouer et initialiser un tableau dynamique
int* allocate_and_initialize(int n) {

    //Allocation dynamique du tableau
    int *arr = new int[n];

    //initialition des éléments;
    for(int i  = 0; i<n; ++i) {
        arr[i]=i;
    }
    return arr; // retourne le pointeur vers la tableau
};

//Fonction pour afficher le contenu du tableau;

void print_array(int* arr, int n) {
    for(int i = 0; i<n ; ++i) {
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

int main() {
    int size = 15;

    //Allouer et  initialiser le tableau
    int * my_array = allocate_and_initialize(size);

    // Afficher le contenu du tableau
    cout<<"Contenu du tableau : ";
    print_array(my_array, size);

    //Libérer la mémoire allouée
    delete[] my_array;


    return 0;
}

int main() {

    int a =19;
    int b =20;
    int c = 33;

     const int& ref = c;

    c= 44;

    int* ptr = &a; // pointeur constant vers a;
    cout << "Valeur pointée par ptr : "<< *ptr << endl;

    *ptr =15; // Modification de la valeur pointée-
    cout<<"Nouvelle valeur de a : "<< a <<endl;

    ptr = &b;
    *ptr = 21;
    cout<<"Nouvelle valeur de b : "<< b <<endl;

    cout<<"Nouvelle valeur de a : "<< &a <<"   "<< a<<endl;
    cout<<"Nouvelle valeur de b : "<< &b <<"   "<< b<<endl;
    cout<<c;

    return 0;
}
//Fonction pour échanger les valeurs de deux entiers via références
void swap_values(int& a, int& b) {
    int temp = a;
    a=b;
    b=temp;
}

//Foction pour échanger les adresses de deux pointeurs vers des entiers

void swap_pointers(int*& ptr1, int *& ptr2) {
    int* temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
}

int main() {
    //Exemple pour swap_values
    int x = 5, y =10;
    cout<<"Avant swap_values : x = "<<x <<", y = "<< y <<endl;
    swap_values(x,y);
    cout<<"Après swap_values : x = "<<x <<", y = "<< y <<endl;


    int * ptr1 =&x;
    int * ptr2 = &y;


    cout<<"Avant swap_pointers : x = "<<*ptr1<<" "<<ptr1 <<", y = "<< ptr2 <<endl;
    swap_pointers(ptr1, ptr2);
    cout<<"Après swap_pointers : x = "<<*ptr1<<" "<<ptr2<<", y = "<< ptr2 <<endl;



    return 0;
}
//MY_DEVOIR
int main() {

    int n, i(1), res(1),len;
    cin>> n;

    int my_factoriel(int n){
        int i =1;
        int res =1;
       while(res <= n)

    }


    while(res <= n) {
        ++i;
        res *=i;
    }

    n%



        len = sizeof(n);
        string str =to_string((n));

    cout<<len<< endl;


    cout<<n;

    cout<<res<<endl;

    return 0;
}

int main() {
    for(int i =1; i<=3; ++i) {
        for(int j=1; j<=3; ++j) {
            cout<< "(" << i << " , " << j  << ") ";
        }
        cout<<endl;
    }
    return 0;
}
int main() {
    int i(1) ,j;
    while(i<=3) {
        int j =1;
        while(j<=3) {
            cout<< "(" << i << " , " << j  << ") ";
            ++j;
        }
        cout<<endl;
        ++i; cout<< j<<endl;
    }




    return 0;
}

int main() {
    int n;
    int somme;

    do {
        cout<< "Entrez un entier (Negatif pour términer) : ";
        cin>>n;

       somme = n>=0 ? somme +=n : 0;
    } while(n>=0);
    cout<< somme<<endl;


    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n = 0, som = 0;
    while (n < 5)
    {
        cout << "Entrez un entier : ";
        cin >> n;
        som += n;
    }
    cout << "Somme : " << som;
    return 0;
}
int main() {
    int i, j, k;
    i = 0; k = i++;
cout << "A : i = " << i << " k = " << k << endl;

i = 1; k = ++i;
cout << "B : i = " << i << " k = " << k << endl;

i = 2; j = 3;
k = i++ * ++j;
cout << "C : i = " << i << " j = " << j << " k = " << k << endl;

i = 3; j = 4;
k = i *= --j;
cout << "D : i = " << i << " j = " << j << " k = " << k << endl;

    return 0;
}
int main() {
    string s1 = "prg1";
    string s2 = "prg2";
    string s3 = "pdl";
    string s4 = "prg";
    string s5 = "pdg23";
    string s6 = "Prg1";

    cout<<(s1 > s6)<< endl;

    return 0;
}
//Les opérateurs logiques
int main() {
    int a,b,c,x,y;
    if((a==0 && b==0 && c!=0)||
       (a==0 && c==0 && b!=0)||
       (c==0 && b==0 && a!=0));

    if(!(x<0) && !( y<=0));

    if(( x % 2 == 0 ) && ( y % 2 != 0 ) ||  ( y % 2 == 0 ) && ( x % 2 != 0 ) );

    if((b!=0 && c!=0)||
       (a!=0 && c!=0 )||
       (b!=0 && a!=0));

    if(a== 0 && b == 0);
    if(a == 0 || b == 0);
    if(a != 0 && b == 0 || a == 0 && b != 0);
    if(a != 0 || b != 0);

}
int main() {
    char x = 'A'; // 65
    char y = '0'; // 48
    char z;

    z = x + 4;
    cout << "1. " << z << endl;
    cout << "2. " << ++z << endl;

    z = x + 0;
    cout << "3. " << z << endl;

    z = x + '0';
    cout << "4. " << z << endl;


    return 0;
}
// Conversion de mètres en milles , pieds et pouces
 int main() {
     const double  metres_en_miles = 6.213711922e-4;
     const double metres_en_fit = 3.280839895;
     const double metres_en_inch =39.37007874;

     // Saisie utilisateur

     int nb_metres;
     cout << "Entrez le nobre de metres a convertir (entier >0) : " ;
     cin>> nb_metres;

     cout << nb_metres<<" [m]" << endl
     << "= " << nb_metres * metres_en_miles << " [miles]" << endl
     << "= " << nb_metres * metres_en_fit << " [ft]" << endl
     << "= " << nb_metres * metres_en_inch << " [inch]" << endl;



     return 0;
 }
double metresToMiles(double metres) {
    return metres * 6.213711922e-4;
}
double metresToFeet(double metres) {
    return metres * 3.280839895;
}
double metresToInches(double metres) {
    return metres * 39.37007874;
}

int main() {

    double metres;
    cout<<"Entrez le nombre de metres a convertir (entier > 0 ) : ";
    cin>>metres;

    if(metres >0) {
        double miles = metresToMiles(metres);
        double feet = metresToFeet(metres);
        double inches =metresToInches(metres);

        cout<<metres <<" [m] = "<<miles<< " [mile]"<< endl;
        cout<<metres <<" [m] = "<<feet<< " [ft]"<< endl;
        cout<<metres <<" [m] = "<<inches<< " [inch]"<< endl;

    }else {
        cout<<"vous avez mal saisi." ;
    }
    return 0;
}

int main() {

    int x = 10;
    int y = 20;
    const int* ptr1 = &x;
    cout<<*ptr1<<endl;
    ptr1 = &y;
    x = 15; // Est-ce possible ?
    int *ptr2 =&x;




    cout<<x<<endl;
    cout<<*ptr1<<endl;
    cout<<x<<endl;

    cout << (ptr1 == ptr2 ? "oui" : "non")<<endl;
}
int main() {

    int var1 = 1;
    int *ptr1 =&var1;
    *ptr1 = 5;
    bool reponse =(*ptr1 ==var1);

    cout<<reponse<<endl;
    return 0;
}
int main() {

    int var1 =20;
    int var2 =10;
    int* ptr1 =&var1;
    int* ptr2 =&var2;

    cout<<var1<<endl;
    cout<<var2<<endl;

    int t = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = t;

    cout<<var1<<endl;
    cout<<var2<<endl;


    return 0;
}

int main() {
    int a(5),b(4);

    b= ((a>0) ? b+1 : (a==0 ? 0 : b*=2));

    cout<<b;




    return 0;
}

int main() {

    int n;
    cin>>n;

    switch(n) {
        case 1:
            cout<<"A";
        break;
        case 2:
            cout<<"B";
        break

    }


    return 0;
}

int main() {
    int n;
    cin>>n;
    char c;
    do {
    switch(n) {
        case 1:
            case 2:
                case 3: cout<<"A";
        break;
        case 4:
            case 5:
                case 6:
        cout<<"B";
        break;
        default: cout <<"C";
        break;

    }
        cout<<"\n\n";

        cout<<"tekrar yapmak ister misiniz ? Y/N";
        cin>>c;
        if(c=='Y' || c=='y') {
            cout<< "Veuillez entrer un numero: "<<endl;
            cin>>n;
        }else {
            break;
        }

    }while(n !=0);

    return 0;
}
int main(){
    int n;
if(n>=0 && n<=0) {
    cout<<"A";
}
    else if(n>=3 && n<=5) {

        cout<<"B";
    }
    else {
        cout<<"C";
    }

    return 0;
}
// SWITCH --> IF ... ELSE
enum Color {RED, BLUE, GREEN};

int main() {
    Color c = BLUE; //Changez cette valeur pour tester

    switch(c) {
        case RED:
            cout<<"Rouge";
        break;
        case BLUE:
            cout<<"Bleu";
        break;
        case GREEN :
            cout<<"Vert";
        break;
        default :
            cout<<"Couleur inconnu "<<endl;
    }
}
int main() {
    int a;
    cin>>a;
    if(a == 0) {
        cout<<"A"<<endl;
    } else if(a == 1) {
        cout<<"Z"<<endl;
    } else if(a == 2) {
        cout<<"a"<<endl;
    }else {
        cout<<"b"<<endl;
    }
    return 0;
}int main() {

    int a(0);
     if(a==0) {
         cout<<"0D";
     }else {
         cout<<"D"<<endl;
     }

    return 0;
}
int main() {
    int a;
    cin>>a;

   switch (a) {
        case 0 : cout << "0";
        default : cout << "D"; break;
    }


    if (a == 0) {
        cout << "0";
    }
    cout << "D";
    return 0;
}
int main() {

    int n;
    if(0<=n && n<=5) {
        cout<<"A"<<endl;
    }else if(n==6) {
        cout<<"34"<<endl;
    }else if(n==7) {
        cout<<"4";
    }else {
        cout<<"D"<<endl;
    }


    return 0;
}
// product discount
int main() {

    int productCode;
    cout<<"Enter product code : "<<endl;
    cin>>productCode;

    int discount = 0;

    switch(productCode) {
        case 1:
            case 2:
            case 3:
            discount = 10;
            break;
        case 4:
            case 5:
        discount = 15;
        break;
        case 6:
            case 7:
        case 8 :
        case 9 :
        discount = 20;
        break;
        default:
            if(productCode >= 10 && productCode <=20) {
                discount =25;
                discount +=5; // une remise particulière(spéciale)
            }else {
                discount =5;
            }
    }
cout<<"Discount applied :" << discount << " %"<<endl;
    return 0;

}
//une machine distributrice
int main() {
    int codeBoisson;
    double prixBase = 1.50;// prix de base par defaut

    cout<<"Entrez le code de la boisson (1-5) : ";
    cin>>codeBoisson;

    double prixTotal = prixBase;

    switch (codeBoisson) {

            case 1:
            case 2:
            cout<< "Boisson sélectionnée : boisson gazeuse." <<endl;
            break;
            case 3:
            case 4:
        cout<<"Boisson sélectionnée : Jus de fruits."<< endl;
       switch(codeBoisson) {
           case 3:
               prixTotal +=0.25; //Taxe;
           break;
           case 4:
               prixTotal +=0.30; // Taxe;
            break;
       }
        break;
        case 5:
            cout<<"Boisson sélectionnée : boisson sppéciale.";
            prixTotal +=0.50; //Taxe
        break;
        default :
            cout<<"Code de boisson invalide."<<endl;
        //return 1;

    }

    return 0;
}
*
*
int main() {
    int niveau;
    int recompense = 0;
    cout<<"Entrez le niveau du joueur (0-9): ";
    cin>> niveau;

    switch(niveau) {

        case 9:
            recompense +=100;
        case 6:
            case 7:
        case 8 :
        recompense +=75;
        case 3:
            case 4:
        case 5:
        recompense +=50;
        case 0:
            case 1:
        case 2 :

        recompense += 25;
        break;


        default :
            cout <<"Niveau invalide"<< endl;
            return 1;
    }
cout<<"Points de récompense totaux : "<< recompense << endl;
    return 0;
}

int main() {

    int n;
    switch(n) {

        case 1:
            cout<<"A";
        break;
        case 4:
            cout<<"C";
        break;
        case 2:
            cout<<"E";
        break;
        default:
            cout<<"BA";
    }

    return 0;
}
int main() {
    int n;
    switch(n) {
        case 0:
        case 1:
        case 2:
        cout<<"A";
        break;
        case 3:
            case 4:
        cout<<"B";
        break;
        default:
            cout<<"D";break;
    }
    return 0;
}int main(){
    bool b;
    int n,i;
    b = (i < 1 ) ? true : i<2;
    return 0;
}
//Frais de livraison

int main() {
    cout << "Livraison en Suisse ? (O/N) ";
    char reponse1; cin >> reponse1;

    if(reponse1 == 'o' || reponse1 =='O') {
        cout << " Grisons ou Tessin ? (O/N) ";
        char reponse2; cin >> reponse2;
        if(reponse2 == 'o' || reponse2 =='O') {
            cout<<"votre livraison est 7.00 CHF\n";
        }else {
            cout<<"votre livraison est 5.00 CHF\n";
        }
    }else {
        cout << "Livraison en Liechtenstein ? (O/N) ";
        char reponse3; cin >> reponse3;
        if(reponse3 == 'o' || reponse3 =='O') {
            cout<<"votre livraison est 7.00 CHF\n";
        }else {
             cout<<"10.00 CHF partout ailleurs dans le monde\n";
        }

    }
}
//Nomre de jours d'un mois

int main() {

    cout<<"Entrez un no de mois (1-12) : ";
    int no_mois; cin>> no_mois;

    if(no_mois==1 || no_mois==3 ||no_mois==5 ||no_mois==7 ||no_mois==8 ||no_mois==10 ||no_mois==12) {
        cout<<"Ce mois comporte 31 jours";
    }else if(no_mois==2 ) {
        cout<<"Ce mois comporte 28 ou 29 jours\n";
    }else {
        cout<<"Ce mois comporte 30 jours\n";
    }

    cout<<"Ce mois comporte";


    return 0;
}
int main() {

    cout << "Entrez un no de mois (1-12) : ";
    int no_mois; cin >> no_mois;
    switch(no_mois) {

        case 2:
            cout<<"Ce mois comporte 28 ou 29 jours";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout<<"Ce mois comporte 30 jours";
            break;
        default:

            cout<<"Ce mois comporte 31 jours";
    }



    return 0;
}
//Note ECTS
#include <cmath>
int main() {
    double note;
    cout << "Entrez la note à convertir (entre 0 et 6) : ";
    cin >> note;

    // Vérification de la plage
    if (note < 0.0 || note > 6.0) {
        cout << "Erreur: la note doit être entre 0 et 6." << endl;
        return 1;
    }

    // Arrondir la note au quart inférieur
    note = floor(note * 4) / 4.0;

    // Conversion de la note UNIGE à la note ECTS
    char noteECTS;
    if (note >= 5.25) {
        noteECTS = 'A';
    } else if (note >= 4.75) {
        noteECTS = 'B';
    } else if (note >= 4.5) {
        noteECTS = 'C';
    } else if (note >= 4.25) {
        noteECTS = 'D';
    } else if (note >= 4.0) {
        noteECTS = 'E';
    } else {
        noteECTS = 'F';
    }

    cout << "La note ECTS équivalente est: " << noteECTS << endl;
    return 0;
}
//Equation du second degre
int main() {
    cout <<"Donnez les valeur de a, b, c de l'equation a*x^2 + b*x + c :";
    double a, b, c;
    cin>>a>>b>>c;


    if(a==0) {
        if(b==0) {
            if(c==0) {
                cout<<"tout x est un solution" << endl;
            }else {
                cout<<"pas de solution" << endl;
            }
            }else{
                cout<<"1 solution : " << -c/b << endl;
        }

    }else {
        double discriminant = b * b - 4 * a * c ;
        if(discriminant < 0) {
            cout<<"pas de solution" ;

        }else if(discriminant == 0) {
            cout<<"1 solution : "<< -b/(2*a) << endl;
        }else {
            double d = sqrt(discriminant);
            double r1 = (-b +d)/(2*a);
            double r2 = (-b -d)/(2*a);
            cout<<"2 solutions : "<< r1 <<"\n"<< r2 <<endl;
        }
    }
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i = 0;
    while(i - 10) {

        i+=2; cout<<i << " ";
    }

    return 0;
}
//Structures de controle
int main() {
    int a = 1, b = 2, c = 3;
    while (a < 5 && (b += 2) < 10 || c-- > 0) {
        cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
        a++;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 15; i++) {
        if(i % 3 == 0) {
            continue;
        }
        if(i > 10) {
            break;
        }
        cout << i << " ";
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int x = 0, y = 5;
    do {
        if (x++ > 2)
            y += x;
        else
            y -= x;
    } while (x < 5);
    cout << x << " " << y;

}

//Accroissement d'un avoir bancaire
int main() {
    double montant_initial, montant_cible, taux_interet_annuel;
    double montant_actuel;
    int annes = 0;
    //Récupère les entrées de l'utilisateur
    cout<<"Entrez le montant initial : "<< endl;
    cin>> montant_initial;

    cout<< "Entrez le montant cible : ";
    cin>>montant_cible;

    cout<<"Entrez le taux d'interet annuel en % : ";
    cin>>taux_interet_annuel;

    // Definir la quantité de départ comme quantité actuelle
    montant_actuel = montant_initial;

    // cas particulier
    if (montant_initial < montant_cible and taux_interet_annuel <= 0.0) {
        cout << "Le montant cible ne sera jamais atteint" << endl;
        return EXIT_SUCCESS;
    }

    //Compte les années jusqu'à attenindre l'objectif

    while(montant_actuel < montant_cible) {
        // Appliquer les intérêts
        montant_actuel += montant_actuel*(taux_interet_annuel/100.0);
        annes++;

    }

    //Imprimer le résultat à l'écran;
    cout<< "Le montant cible est atteint apres "<< annes<< " ans."<<endl;


    return 0;
}
*/

























































