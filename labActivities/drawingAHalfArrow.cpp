#include <iostream>

using namespace std;

void drawRectangle(int height, int width) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << '*';
        }
        cout << endl;
    }
}

void drawInvertedTriangle(int width) {
    for (int i = width; i >= 1; --i) {
        for (int j = 0; j < i; ++j) {
            cout << '*';
        }
        cout << endl;
    }
}

int main() {
    // Step 1: Input arrow base height and width, then draw a rectangle
    int baseHeight, baseWidth;

    cin >> baseHeight >> baseWidth;

    drawRectangle(baseHeight, baseWidth);

    // Step 2: Input arrow head width and ensure it's larger than the base width
    int headWidth;

    do {
      //  cout << "Enter arrow head width (must be larger than base width): ";
        cin >> headWidth;
    } while (headWidth <= baseWidth);

    // Step 3: Draw an inverted right triangle with the correct width
    drawInvertedTriangle(headWidth);

    return 0;
}
