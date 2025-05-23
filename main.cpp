# include <iostream>

using namespace std;

int main() {

    for (int y=0;y <= 10;y++) {
        for (int x=0;x <= 10;x++) {
            cout << y << " * " << x << " = " << x * y << "  ";
        }
        cout << endl;
    }
    cout << endl << endl << "                               GitHub.com/amirAbbaspor" << endl << endl;
    cout << "press enter to exit.";
    cin.get();
}