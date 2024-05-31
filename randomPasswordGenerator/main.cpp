#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string generatePassword(int length) {
	const string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                   "abcdefghijklmnopqrstuvwxyz"
                                   "0123456789"
                                   "!@#$%^&*()";

    string password;

    srand(std::time(0)); // rastgelelik için tohum atma

    for (int i = 0; i < length; i++) {
        password += characters[std::rand() % characters.size()];
    }
    return password;
}

int main() {
    int length;

    // Kullanicidan sifre uzunlugu alma
    cout << "Sifre uzunlugunu giriniz: ";
    cin >> length;

    // Sifre olusturma
    string password = generatePassword(length);

    // Sifreyi ekrana yazdirma
    cout << "Olusturulan Sifre: " << password << endl;

    return 0;
}