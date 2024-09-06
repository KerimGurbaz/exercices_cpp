#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

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

/*
 *#include <cmath>
int main() {
    float n;
    double sum(0);
    cout<<"donnez un nobre"<<"\n";
    cin>>n;

    for(double i=1; i <= n; i++) {
        sum += 1/i ;
        cout<< "la somme est : "<<sum<<endl;
    }
 */
/*
*int main() {
    int n;
    string c ="*";
    string spaces =" ";
    string result ;
    cin>>n;

    for(int row = 1; row<=n ; ++row) {
        result="";

        //add spaces;
        for(int i = 0; i < n-row ; ++i) {
            result += spaces;
        }
        // add stars
        for(int i =0 ; i<2*row-1 ; ++i) {
            result +=c;
        }

        cout<<result<< endl;


    }
    return 0;
}
 *
 */

/*
    * do {
         for(i=1; i<n; i++){
             result += spaces;
         }
         for(i=n-2 ; i>0; i--) {
             result += c;
         }

         cout<<result<<endl;
     }
        while(n>0);
 */


//afficher toutes les manières possibles d'obtenir un Euro
int main() {
    int count  = 0; // We keep a counter for the number of possibilities

    //Let's try combinations of 2c, 5c, 10c coins

    for(int num2c =0; num2c <= 50; ++num2c) {// at most 50 2c can be used

        for(int num5c = 0; num5c <= 20; ++num5c) {//at most 20 5c can be used

            for(int num10c = 0; num10c <= 10; ++num10c) {//at most 10 10c can be used


                if(num2c *2 + num5c * 5 + num10c * 10 ==100) {
                    cout<<"1 Euro = "<<setw(2)<<num2c << "x2c,";
                    cout<<setw(2)<<num5c<< "x5c, ";
                    cout<<setw(2)<<num10c<< "x10c"<<endl;
                ++count;

                }

            }

        }

    }

    cout<< "There are " << count <<" different ways...";


    return 0;
}


