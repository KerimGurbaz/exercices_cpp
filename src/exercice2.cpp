//
// Created by Krm on 30/09/2024.
//
#include <iostream>
using namespace std;

/*
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


 */
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























