#include <iostream>
using namespace std;

/*
* int main() {
    int n, p;

    // İlk kısım
    n = p = 0;
    while (n < 5)
        n += 2;
    p++;
    cout << "A: n = " << n << " p = " << p << "\n";

    // İkinci kısım.
    n = p = 0;
    while (n < 5) {
        n += 2;
        p++;
    }
    cout << "B: n = " << n << " p = " << p << "\n";

    return 0;
}
 int main() {
    int i, n;
     for(i=0, n = 0;i<5; i++)
         n++;
     cout<<" A : i = " << i << ", n = "<< n <<"\n";


     for(i=0, n = 0;i<5; i++, n++){}

     cout<<" B : i = " << i << ", n = "<< n <<"\n";

for(i=0, n = 50; n>10; i++, n -= i){}

     cout<<" C : i = " << i << ", n = "<< n <<"\n";

for(i=0, n = 0; i<3; i++, n +=i, cout<<" D : i = " << i << ", n = "<< n <<"\n");

     cout<<" E : i = " << i << ", n = "<< n <<"\n";
    return 0;
 }
 */
#include <cmath>

/*
 *
* //écrire un programme qui calcule les racines carrées

int main() {

    double x;
    do {
        cout<< "donnez un nobre positif :  ";
        cin>>x;
        if(x<0) cout<<"svp positif \n";
        if(x<=0) continue;

        cout<<"sa racine carrée est : "<<sqrt(x)<<endl;
    }while(x);



    return 0 ;
}

int main () {

    double x;

    do {
        cout<<"donnez un nobre positif : ";
        cin>>x;

        if(x<0) {
            cout<<"svp positif \n";
            continue;
        }
        else if(x>0) {
            cout<<"sa racine carée est : "<<sqrt(x)<<endl;
        }


    }while(x);



    return 0;
}

int main() {

    double x ;
    do {
        cout<<"donnez un nobre positif : ";
        cin>>x;

        if(x<0) {
            cout<<"svp positif"<<endl;

            continue;
        }

        if(x>0)cout<<"sa racine carée est : "<<sqrt(x)<<endl;

    }while(x);

    return 0;

}
 */

//écrire un programme qui calcule les racines carrées

#include <cmath>

//



#include <cmath>
int main() {
    float n;
    double sum(0);
    cout<<"donnez un nobre"<<"\n";
    cin>>n;

    for(double i=1; i <= n; i++) {
        sum += 1/i ;
         cout<< "la somme est : "<<sum<<endl;
    }



}