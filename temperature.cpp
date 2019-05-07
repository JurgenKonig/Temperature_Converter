#include <iostream>

using namespace std;

// CALCULATIONS CHECK OUT
double convertFToC(double temp){ // C = 5/9 *(F -32)
    double tempc = 5/9 * (temp - 32);

    return tempc;
}

// CALCULATIONS CHECK OUT
double convertCToF(double temp){ // F = 9/5(C) + 32
    double tempf = (1.8 * temp) + 32;

    return tempf;
}

// CALCULATIONS CHECK OUT
double convertCToK(double temp){ // 
    double tempk = temp + 273.15;

    return tempk;
}

// CALCULATIONS CHECK OUT
double convertKToC(double temp){
    double tempc = temp - 273.15;

    return tempc;
}

// CALCULATIONS CHECK OUT
double convertFToK(double temp){
    double temp1 = temp - 32;
    double temp2 = temp1 * 5/9;

    double tempk = temp2 + 273.15;

    return tempk;
}

// CALCULATIONS CHECK OUT
double convertKToF(double temp){
    double tempf = ((temp - 273.15) * 1.8) + 32;

    return tempf;
}

int main(){
    double temp1;
    int option;
    bool quit = false;
    string leave = "";

    cout << "Welcome to the Temperature Calculator! Please enter the option you'd like to use: \n";
    cout << "1. Fahrenheit to Celsius. \n";
    cout << "2. Celsius to Fahrenheit. \n";
    cout << "3. Celsius to Kelvin. \n";
    cout << "4. Kelvin to Celsius. \n";
    cout << "5. Fahrenheit to Kelvin. \n";
    cout << "6. Kelvin to Fahrenheit. \n";
    cout << "0. Quit the program. \n";
    std::cin >> option;

    while (quit == false){
        switch (option){
            case 1:  
                cout << "Enter the temperature you'd like to convert to Celsius: \n";
                std::cin >> temp1;

                cout << "Your temperature is " << convertFToC(temp1) << "\370C.\n";

                cout << "Would you like to continue using the program? (Y/N)\n";

                cin >> leave;

                if (leave == "Y" || leave == "y"){
                    continue;
                }

                else if (leave == "N" || leave == "n"){
                    exit(0);
                }

                else {
                    cout << "Invalid entry. Please input a valid entry.";
                    cin >> leave;
                }
            case 2:
                cout << "Enter the temperature you'd like to convert to Fahrenheit: \n";
                std::cin >> temp1;

                cout << "Your temperature is " << convertCToF(temp1) << "\370F.\n";

                cout << "Would you like to continue using the program? (Y/N)\n";

                cin >> leave;

                if (leave == "Y" || leave == "y"){
                    continue;
                }

                else if (leave == "N" || leave == "n"){
                    exit(0);
                }

                else {
                    cout << "Invalid entry. Please input a valid entry.";
                    cin >> leave;
                }
            case 3:
                cout << "Enter the temperature you'd like to convert to Kelvin: \n";
                std::cin >> temp1;

                cout << "Your temperature is " << convertCToK(temp1) << "K.\n";
                
                cout << "Would you like to continue using the program? (Y/N)\n";

                cin >> leave;

                if (leave == "Y" || leave == "y"){
                    continue;
                }

                else if (leave == "N" || leave == "n"){
                    exit(0);
                }

                else {
                    cout << "Invalid entry. Please input a valid entry.";
                    cin >> leave;
                }
            case 4:
                cout << "Enter the temperature you'd like to convert to Celsius: \n";
                std::cin >> temp1;

                cout << "Your temperature is " << convertKToC(temp1) << "\370C.\n";
                
                cout << "Would you like to continue using the program? (Y/N)\n";

                cin >> leave;

                if (leave == "Y" || leave == "y"){
                    continue;
                }

                else if (leave == "N" || leave == "n"){
                    exit(0);
                }

                else {
                    cout << "Invalid entry. Please input a valid entry.";
                    cin >> leave;
                }
            case 5:
                cout << "Enter the temperature you'd like to convert to Kelvin: \n";
                std::cin >> temp1;

                cout << "Your temperature is " << convertFToK(temp1) << "K.\n";
                
                cout << "Would you like to continue using the program? (Y/N)\n";

                cin >> leave;

                if (leave == "Y" || leave == "y"){
                    continue;
                }

                else if (leave == "N" || leave == "n"){
                    exit(0);
                }

                else {
                    cout << "Invalid entry. Please input a valid entry.";
                    cin >> leave;
                }
            case 6:
                cout << "Enter the temperature you'd like to convert to Fahrenheit: \n";
                std::cin >> temp1;

                cout << "Your temperature is " << convertKToF(temp1) << "\370F.\n";
                
                cout << "Would you like to continue using the program? (Y/N)\n";

                cin >> leave;

                if (leave == "Y" || leave == "y"){
                    continue;
                }

                else if (leave == "N" || leave == "n"){
                    exit(0);
                }

                else {
                    cout << "Invalid entry. Please input a valid entry.";
                    cin >> leave;
                }
            case 0:
                cout << "Terminating the program...\n";
                cout << "Program terminated.";
                exit(0);
        }
    }
}