#include "Circle.h"
#include "IsoscelesTrapezoid.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void addFigure(vector<Figure*>& figures) {
    int k;
    cout << "1. Circle\n"
            "2. Isosceles trapezoid\n";
    cin >> k;
    switch(k) {
        case 1:
            figures.push_back(new Circle());
            figures[figures.size() - 1]->initFromDialog();
            break;
        case 2:
            figures.push_back(new IsoscelesTrapezoid());
            figures[figures.size() - 1]->initFromDialog();
            break;
        default:
            cout << "Invalid figure was entered\n";
    }
}

void showFigures(const vector<Figure*>& figures) {
    for (const auto & figure : figures) {
        figure->draw();
    }
}

void getSquare(const vector<Figure*>& figures) {
    double result = 0;
    for (const auto & figure : figures) {
        result += figure->square();
    }
    cout << result << "\n";
}

void getPerimeter(const vector<Figure*>& figures) {
    double result = 0;
    for (const auto & figure: figures) {
        result += figure->perimeter();
    }
    cout << result << "\n";
}

void getCenter(const vector<Figure*>& figures) {
    Vector2D result;
    double mass = 0;
    for (const auto & figure: figures) {
        result += figure->position() * figure->mass();
        mass += figure->mass();
    }
    cout << result / mass << "\n";
}

void getSize(const vector<Figure*>& figures) {
    unsigned int result = 0;
    for (const auto & figure: figures) {
        result += figure->size();
    }
    cout << result << "\n";
}

bool cmp(Figure* a, Figure* b) {
    return *a < *b;
}

void sortFigures(vector<Figure*> & figures) {
    sort(figures.begin(), figures.end(), cmp);
}

int main() {
    vector<Figure*> figures;
    while (true) {
        cout << "1. Add figure\n"
                "2. Show figures\n"
                "3. Get square of all figures\n"
                "4. Get perimeter of all figures\n"
                "5. Get center of mass of all figures\n"
                "6. Get size of all figures\n"
                "7. Sort figures by their mass\n"
                "8. Exit\n";
        int n;
        cin >> n;
        switch(n){
            case 1: addFigure(figures); break;
            case 2: showFigures(figures); break;
            case 3: getSquare(figures); break;
            case 4: getPerimeter(figures); break;
            case 5: getCenter(figures); break;
            case 6: getSize(figures); break;
            case 7: sortFigures(figures); break;
            case 8: exit(0);
            default:
                cout << "Unknown command\n";
        }
    }
}
