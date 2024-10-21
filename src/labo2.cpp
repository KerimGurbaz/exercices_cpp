//
// Created by Krm on 08/10/2024.
//
#include <iostream>
#include <string>

using namespace std;

/*
 * string convertirUnités(int nombre) {
    if (nombre == 1) return"un";
    else if (nombre == 2) return "deux";
    else if (nombre == 3) return "trois";
    else if (nombre == 4) return "quatre";
    else if (nombre == 5) return "cinq";
    else if (nombre == 6) return "six";
    else if (nombre == 7) return "sept";
    else if (nombre == 8) return "huit";
    else if (nombre == 9) return "neuf";
    return "";
}

string convertirDizaines(int nombre) {
    if (nombre == 10) return "dix";
    else if (nombre == 11) return "onze";
    else if (nombre == 12) return "douze";
    else if (nombre == 13) return "treize";
    else if (nombre == 14) return "quatorze";
    else if (nombre == 15) return "quinze";
    else if (nombre == 16) return "seize";
    else if (nombre < 20) return "dix-" + convertirUnités(nombre - 10);
    else if (nombre < 30) return "vingt" + (nombre % 10 == 0 ? "" : "-" + convertirUnités(nombre % 10));
    else if (nombre < 40) return "trente" + (nombre % 10 == 0 ? "" : "-" + convertirUnités(nombre % 10));
    else if (nombre < 50) return "quarante" + (nombre % 10 == 0 ? "" : "-" + convertirUnités(nombre % 10));
    else if (nombre < 60) return "cinquante" + (nombre % 10 == 0 ? "" : "-" + convertirUnités(nombre % 10));
    else if (nombre < 70) return "soixante" + (nombre % 10 == 0 ? "" : "-" + convertirUnités(nombre % 10));
    else if (nombre < 80) return "soixante-dix" + (nombre % 10 == 0 ? "" : "-" + convertirUnités(nombre % 10));
    else if (nombre < 90) return "quatre-vingt" + (nombre % 10 == 0 ? "" : "-" + convertirUnités(nombre % 10));
    else return "quatre-vingt-dix" + (nombre % 10 == 0 ? "" : "-" + convertirUnités(nombre % 10));
}

string convertirCentaines(int nombre) {
    if (nombre < 100) return convertirDizaines(nombre);
    int centaines = nombre / 100;
    int reste = nombre % 100;
    string resultat;
    if (centaines == 1) resultat = "cent";
    else resultat = convertirUnités(centaines) + " cent";
    if (reste != 0) resultat += " " + convertirDizaines(reste);
    return resultat;
}

string convertirMilliers(int nombre) {
    if (nombre < 1000) return convertirCentaines(nombre);
    int milliers = nombre / 1000;
    int reste = nombre % 1000;
    string resultat;
    if (milliers == 1) resultat = "mille";
    else resultat = convertirUnités(milliers) + " mille";
    if (reste != 0) resultat += " " + convertirCentaines(reste);
    return resultat;
}

int main() {
    int nombre;
    cout << "Entrez un nombre entre 0 et 9999: ";
    cin >> nombre;

    if (nombre < 0 || nombre > 9999) {
        cout << "Nombre hors de portée." << endl;
        return 1;
    }

    if (nombre == 0) {
        cout << "zéro" << endl;
    } else {
        cout << convertirMilliers(nombre) << endl;
    }

    return 0;
}

 */

string convertirUnités(int nombre) {
    if(nombre ==1) {
        return "un";
    }else if(nombre ==2) {
        return "deux";
    }else if(nombre ==3) {
        return "trois";
    }else if(nombre ==4) {
        return "quatre";
    }else if(nombre ==5) {
        return "cinq";
    }else if(nombre ==6) {
        return "six";
    }else if(nombre ==7) {
        return "sept";
    }else if(nombre ==8) {
        return "huit";
    }else if(nombre ==9) {
        return "neuf";
    }
    return "";
}

string convertirDizaines(int nombre) {
    if(nombre == 10) {
        return "dix";
    }else if(nombre ==11) {
        return "onze";
    }else if(nombre == 12) {
        return "douze";
    }else if(nombre ==13) {
        return "treize";
    }else if(nombre  == 14) {
        return "quatorze";
    }else if(nombre == 15) {
        return "quinze";
    }else if(nombre == 16) {
        return "seize";
    }else if(nombre < 20) {
        return "dix-" + convertirUnités(nombre-10);
    }else if(nombre <30) {
        return "vingt" +(nombre % 10 == 0 ? "" : "-" + convertirUnités(nombre%10));//nombre%10 ou(nobre - 20)
    }else if(nombre <40) {
        return "trente" +(nombre % 10 == 0 ? "" : "-" + convertirUnités(nombre%10));
    }else if(nombre <50) {
        return "quarante" +(nombre % 10 == 0 ? "" : "-" + convertirUnités(nombre%10));
    }else if(nombre <60) {
        return "cinquante" +(nombre % 10 == 0 ? "" : "-" + convertirUnités(nombre%10));
    }else if(nombre <70) {
        return "soixente" +(nombre % 10 == 0 ? "" : "-" + convertirUnités(nombre%10));
    }else if(nombre <80) {
        return "septente" +(nombre % 10 == 0 ? "" : "-" + convertirUnités(nombre%10));
    }else if(nombre <90) {
        return "huitente" +(nombre % 10 == 0 ? "" : "-" + convertirUnités(nombre%10));
    }else if(nombre <100) {
        return "nonante" +(nombre % 10 == 0 ? "" : "-" + convertirUnités(nombre%10));
    }
    return "";
}


string convertirCentaines(int nombre){

    if(nombre < 100) {
        return convertirDizaines(nombre);
    }
    int centaines  = nombre / 100;
    int reste = nombre % 100;
    string resultat;

    if(centaines == 1) {
        resultat == "cent";
    }else{
        resultat = convertirUnités(centaines) + " cent";
    }
    if(reste != 0) {
        resultat += " " +convertirDizaines(reste);
    }

return resultat;}

string convertirMilliers(int nombre) {
    if(nombre <1000) {
        return convertirCentaines(nombre);
    }
    int milliers = nombre / 1000;
    int reste = nombre % 1000;

    string resultat;

    if(milliers == 1) {
        resultat ="mille";
    }
    else {
        resultat = convertirUnités(milliers) + "mille";
    }
    if(reste !=0) {
        resultat += " " + convertirCentaines(reste);
    }
    return resultat;
}

int main() {
    int nombre;

    //Obtenir le numéro de l'utilisateur
    cout<<"Entrez un nobmre entre 0 et 9999 : ";
    cin>>nombre;

    cout<<"Vous avez entré : " << convertirMilliers(nombre) <<endl;
    return 0;
}




