#include <iostream>

double addieren(double zahl1, double zahl2)
{
    return zahl1 + zahl2;
}

double subtrahieren(double zahl1, double zahl2)
{
    return zahl1 - zahl2;
}

double multiplizieren(double zahl1, double zahl2)
{
    return zahl1 * zahl2;
}

double dividieren(double zahl1, double zahl2)
{
        return zahl1 / zahl2;
}

void main()
{
    double zahl1;
    double zahl2;

    std::cout << "Bitte geben Sie erst Zahl 1 und dann die Zahl 2 ein";
    std::cin >> zahl1;
    std::cin >> zahl2;

    double A = addieren(zahl1, zahl2);
    double S = subtrahieren(zahl1, zahl2);
    double M = multiplizieren(zahl1, zahl2);
    if (zahl2 != 0)
    {
        double D = dividieren(zahl1, zahl2);
        std::cout << "Das Ergebnis der Addition betraegt: " << A << "\nDas Ergebnis der Substitutuion betraegt " << S << "\nDas Ergebnis der Multiplikation betraegt " << M << "\nDas Ergebnis der Division betraegt " << D;
    }
    else
    {
        std::cout << "Das Ergebnis der Addition betraegt: " << A << "\nDas Ergebnis der Substitutuion betraegt " << S << "\nDas Ergebnis der Multiplikation betraegt " << M;
        std::cout << "Fehler: Der Dividend darf nicht Null sein!\n";
    }
}