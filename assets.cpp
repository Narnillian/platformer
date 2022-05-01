#include <iostream>
//#include "test.cpp"
using namespace std;

bool showBoxes=true;

//add assets here
class texture {
    string lines[8] = {"", "", "", "", "", "", "", ""};


    public:
        int setLine(int line, string value) {
            lines[line] = value;
            return 0;
        }

        int printTexture() {
            if (showBoxes) {
                cout << " ------------\n";
                for (int i = 0; i < 8; i++) {
                    cout << " " << lines[i] << "\n";
                }
                cout << " ------------";
                cout << "\033[G\033[8A";
                for (int i = 0; i < 8; i++) {
                    cout << "|\033[12C|\n";
                }
                cout << "\n";
            } else {
                for (int i = 0; i < 8; i++) {
                    cout << lines[i] << "\n";
                }
            }
            return 0;
        }

        texture(string row1, string row2, string row3, string row4, string row5, string row6, string row7, string row8) {
            setLine(0,row1);
            setLine(1,row2);
            setLine(2,row3);
            setLine(3,row4);
            setLine(4,row5);
            setLine(5,row6);
            setLine(6,row7);
            setLine(7,row8);
            printTexture();
        }

    private:
        int checkLengths() {
            for(int line = 0; line < 6; line++) {
                cout << lines[line] << "\n";
            }

            return 0;
        };
    
};
texture mobbo(" /‾‾\\ ","djdjd", "3", "4", "5", "6", "7", "823456789AB");
