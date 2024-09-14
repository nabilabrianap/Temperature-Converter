#include <iostream>
#include <iomanip> // Library untuk mengatur format output
using namespace std;

// Fungsi untuk mengkonversi dari Celsius ke Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Fungsi untuk mengkonversi dari Celsius ke Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273;
}

// Fungsi untuk mengkonversi dari Fahrenheit ke Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

// Fungsi untuk mengkonversi dari Fahrenheit ke Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273;
}

// Fungsi untuk mengkonversi dari Kelvin ke Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273;
}

// Fungsi untuk mengkonversi dari Kelvin ke Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273) * 9.0 / 5.0 + 32.0;
}

int main() {
    double suhu;
    char unit;
    
    cout << "Masukkan suhu: ";
    cin >> suhu;
    cout << "Masukkan satuan suhu (C untuk Celsius, F untuk Fahrenheit, K untuk Kelvin): ";
    cin >> unit;
    
    cout << fixed << setprecision(2); // Mengatur presisi output menjadi 2 angka di belakang koma
    
    if (unit == 'C' || unit == 'c') {
        cout << "Suhu dalam Fahrenheit: " << celsiusToFahrenheit(suhu) << " F" << endl;
        cout << "Suhu dalam Kelvin: " << celsiusToKelvin(suhu) << " K" << endl;
    } 
    else if (unit == 'F' || unit == 'f') {
        cout << "Suhu dalam Celsius: " << fahrenheitToCelsius(suhu) << " C" << endl;
        cout << "Suhu dalam Kelvin: " << fahrenheitToKelvin(suhu) << " K" << endl;
    } 
    else if (unit == 'K' || unit == 'k') {
        cout << "Suhu dalam Celsius: " << kelvinToCelsius(suhu) << " C" << endl;
        cout << "Suhu dalam Fahrenheit: " << kelvinToFahrenheit(suhu) << " F" << endl;
    } 
    else {
        cout << "Satuan yang Anda masukkan tidak valid." << endl;
    }
    
    return 0;
}