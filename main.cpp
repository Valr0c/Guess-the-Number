#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int level,cheat,tebak,angka,range1,range2,range3;
    cout << "==== Guess The Number ====" << endl;
    cout << "Level (1/2/3) : "; cin >> level;
    if(level == 1){
        angka = rand() % 10 + 1;
        range1 = 1;
        range2 = 3;
        range3 = 6;
    }else if(level == 2){
        angka = rand() % 100 + 1;
        range1 = 10;
        range2 = 30;
        range3 = 60;
    }else if(level == 3){
        angka = rand() % 1000 + 1;
        range1 = 100;
        range2 = 300;
        range3 = 600;
    }
    cout << "Cheat (0/1) : "; cin >> cheat;
    if(cheat == 1){
        cout << "The number : " << angka << endl;
    }
    cout << "Guess : "; cin >> tebak;
    if(tebak == angka){
        cout << "You win! The number is " << angka << endl;
    }else{
        if((angka + range1) >= tebak && (angka - range1) <= tebak){
            cout << "Hot!! You almost guess it!" << endl;
        }else if((angka + range2) >= tebak && (angka - range2) <= tebak){
            cout << "Warm! Try again.." << endl;
        }else if((angka + range3) >= tebak && (angka - range3) <= tebak){
            cout << "Cold.. Try again.." << endl;
        }else{
            cout << "Freezing" << endl;
        }

        cout << "Guess : "; cin >> tebak;
        if(tebak == angka){
            cout << "You win! The number is " << angka << endl;
        }else{
            if((angka + range1) >= tebak && (angka - range1) <= tebak){
                cout << "Hot!! You almost guess it!" << endl;
            }else if((angka + range2) >= tebak && (angka - range2) <= tebak){
                cout << "Warm! Try again.." << endl;
            }else if((angka + range3) >= tebak && (angka - range3) <= tebak){
                cout << "Cold.. Try again.." << endl;
            }else{
                cout << "Freezing" << endl;
            }

            cout << "Guess : "; cin >> tebak;
            if(tebak == angka){
                cout << "You win! The number is " << angka << endl;
            }else{
                if((angka + range1) >= tebak && (angka - range1) <= tebak){
                    cout << "Hot!! You almost guess it!" << endl;
                }else if((angka + range2) >= tebak && (angka - range2) <= tebak){
                    cout << "Warm! Try again.." << endl;
                }else if((angka + range3) >= tebak && (angka - range3) <= tebak){
                    cout << "Cold.. Try again.." << endl;
                }else{
                    cout << "Freezing" << endl;
                }

                cout << "No attempt left. The number is " << angka << endl;
            }
        }
    }
    return 0;
}
