#include <iostream>

using namespace std;

int main() {
    
    int room_width {0};
    int room_length {0};
    
    cout << "Enter the width of the room";
    cin >> room_width;
    
    cout << "Enter the lenght of the room";
    cin << room_length;
    
    cout << "The area of the room is " << room_width * room_length << " Square feet" << endl;
    
    return 0;
}