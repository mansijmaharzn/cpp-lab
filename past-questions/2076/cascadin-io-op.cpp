// Cascading IO operators

#include <iostream>
using namespace std;

class Height {
	int feet, inches;

    public:
        // default constructor
        Height() {
            feet = 0;
            inches = 0;
        }

        // parameterized constructor
        void setData(int x, int y) {
            feet = x;
            inches = y;
        }

        void showData() {
            cout << feet << "'" << inches;
        }

        // Function for overloading of operator +
        Height operator+(Height H) {
            Height temp;

            temp.feet = feet + H.feet;
            temp.inches = inches + H.inches;

            return temp;
        }

        // Function to normalize the height
        // into proper terms of 1 feet
        // per 12 inches
        void normalize() {
            // Update the feets
            if (inches >= 12) {
                feet += 1;
                inches -= 12;

                // OR: feet = feet + inches / 12;
            }
        }
};

int main() {
	Height h1, h2, h3, h4;

	// Initialize the three heights objects
	h1.setData(5, 9);
	h2.setData(5, 2);
	h3.setData(6, 2);

	// Add all the heights using cascading of operators
	h4 = h1 + h2 + h3;

	// Normalize the heights
	h4.normalize();

	// Print the height h4
	h4.showData();

	return 0;
}
