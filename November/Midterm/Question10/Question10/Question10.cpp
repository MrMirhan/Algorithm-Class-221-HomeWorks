/*

Declare an array named boxDim which stores the length, width and height of a box. Use this array to read the values from a user input and find the volume and area of a box.

*/

#include <iostream>

using namespace std;

int main()
{
    float boxDim[3];

    cout << "Write lenght, width and height of cuboid: ";

    cin >> boxDim[0] >> boxDim[1] >> boxDim[2];

    float  area = (2 * ((boxDim[0] * boxDim[1]) + (boxDim[1] * boxDim[2]) + (boxDim[0] * boxDim[2])));

    float volume = (boxDim[0] * boxDim[1] * boxDim[2]);

    cout << "Area of cuboid:" << area;

    cout << endl << "Volume of cuboid:" << volume;
}
