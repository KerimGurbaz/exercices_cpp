#include <iostream>
using namespace std;
#include <iomanip> // setw(n)
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
/*
 *
* int main() {
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
 */
//Fibonacci
/*
* int main() {

   int n, first(1),second(2),sum;
    cin>> n;
    cout<<"saisir un entier svp "<<endl;
    cout<<setw(4)<<first<<endl;
    cout<<" ,"<<setw(2)<<second<<endl;
    do {
        sum = first + second;
        if(sum>=n) {
            break;
        }
        first = second;
        second =sum;
        cout<<" ,"<<setw(2)<<sum<<endl;
    }
   while(true);

    return 0;
}
 */
/*
*int main() {
    int x = 7;
    int* ptr =&x;
    *ptr = 17;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    cout<<x;
}
 *
 */

//la plus grande plus petit valeur
/*
 * int main() {
    int n, min(20), max(0), min_count(1), max_count(1);

    while(n!=-1) {

        cout<<"donnez une note(-1 pour finir) : ";
        cin>>n;

        if(n >= max) {
            if(max == n ) {
                max_count++;
            }else {
                max_count==1;
            }
            max = n;
        }
        else if(n>=0 && n<=min) {
            if(min==n) {
                min_count++;
            }else {
                min_count =1;
            }
            min = n;
        }
    }

    cout<<"Note maximale : "<<max<< " attribuée " << max_count<< " fois "<<endl;
    cout<<"Note minimale : "<<min<< " attribuée " << min_count<< " fois "<<endl;



    return 0;
}
 */

/*
int main() {

    int row, col;

    cout<<"    "<<setw(2)<<"I  ";
    for(int i =1; i<=10; ++i) {
        cout<<setw(2)<<i<<"  ";
    }cout<<endl;
    for(int i = 0; i<=15; i++) {
       cout<<"---";
    }
    cout<<endl;
    for(row=1; row<=10; ++row) {
        cout<< setw(2)<<row;

        for(col=1; col<=10; ++col) {

            if(col==1)cout<<setw(2)<<"  I ";
            cout<< setw(2)<<row*col<<"  ";
        }
        cout<<endl;
    }

    return 0;
}


int globalVar = 5;
void func(int& y) {
   y += ++globalVar;
}

int main() {
    int x =10;
    func(x);
    cout<<globalVar<<endl;
    cout<<x<<endl;
}


 */


/*
 * int fct(int r) {
    return 2*r;
}
int main() {
    int n, p=5;
    n = fct(p);
    cout<<"p = "<<p <<" n = "<<n;
    return 0;

}
void doubleValue(int& x) {  // 'x' referans olarak geçer
    x *= 2;  // Orijinal 'x' bu işlemle değişir
}

int main() {
    int p = 5;
    doubleValue(p);  // 'p' referans olarak geçer, bu yüzden orijinal değer değişir
    cout << "p = " << p;  // 'p' artık 10 olur
    return 0;
}
void f1(){
    cout<<"Bonjour\n";
    cout<<"\n";
}

void f2(int n) {

    for(int i=0; i<n; i++) {
       cout<<"Bonjour2\n";
    }
    cout<<"\n";
}

int f3(int n) {
    for(int i =0; i<n ; i++) {
        cout<<"Bonjour3\n";
    }
    return 0;
}
int main() {

    f1();
    f2(2);
    f3(3);

    return 0;
}

 */

int n =10, q =2; //Global value

int fct(int p); // Fonction prototipi
void f(void );

int main() {
    int n =0, p=5;
    n = fct(5);
    cout<<"A; dans main, n = "<< n << ", p = "<<p<<" q = "<<q<<"\n";

    f();// on appele fonk f.

    return 0;
}

int fct ( int p) {
    int q;
    q = 2 * p + n;
    cout<<"B; dans fct, n = "<< n << ", p = "<<p<<" q = "<<q<<"\n";
    return q;
}

void f(void){
    int p = q*n;
    cout<<"C; dans f, n = "<< n << ", p = "<<p<<" q = "<<q<<"\n";
}












