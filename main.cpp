
// ****************** SIMPLE SHOP USING C++ **************
// Code created in VS Code using C++ program
// Code was created by Patel Parth
// If want to create personal advance shop you can contact parthp1232@gmail.com
// I am Also in Youtube , github
//Code start from here
#include <iostream>
#include <fstream>
#include <cstring> // For strcmp
#include <cstdlib> // For system

using namespace std;

int main() {
    // Declaration of variables
    char holder;
    char choice;
    char fname[25];
    char lname[25];
    char date[25];
    char email[25];
    char password[25];
    char buy;
    char select;
    char x;
    char payment;
    char upi[25];
    char bank;
    char card[25];
    char cardex[25];
    char cardcvv[3];
    char COD;
    char addr[100];
    char city[25];
    char state[25];
    char pin[25];
    char addh[100];
    char v;
    char c;

    // Displaying the main menu
    cout << "\n\n\t  ****Parth Shop (Login/Register) ****\n\n";
    cout << "\t1: Register \n"
         << "\t2: Login \n"
         << "\t3: Forgot Password\n";
    cout << "\n\tEnter your choice: ";
    cin >> choice;
    system("cls"); // Clear screen

    // Switch statement based on user choice
    switch (choice) {
        case '1': {
            // Registration process
            cout << "-------------REGISTRATION PAGE-------------" << endl << endl;
            cout << "Enter Your First Name: ";
            cin >> fname;
            cout << "Enter Your Last Name: ";
            cin >> lname;
            cout << "Enter Your Birth Date (date-month-year) eg. 1 01 1982: ";
            cin >> date;
            cout << "Enter Your Email: ";
            cin >> email;
            cout << "Create a Password (must be strong): ";
            cin >> password;

            cout << "\n-------------THANK YOU FOR REGISTERING-------------" << endl;
            break;
        }
        case '2': {
            // Login process
            cout << "-------------LOGIN PAGE-------------" << endl << endl;
            cout << "Enter Your Email: ";
            cin >> email;
            cout << "Enter Your Password: ";
            cin >> password;
            
            // Authenticating user from data stored in a file
            ifstream file("data.txt");
            if (!file.is_open()) {
                cerr << "Error opening file!" << endl;
                return 1;
            }

            bool found = false;
            char savedEmail[25];
            char savedPassword[25];

            while (file >> fname >> lname >> date >> savedEmail >> savedPassword) {
                if (strcmp(savedEmail, email) == 0 && strcmp(savedPassword, password) == 0) {
                    found = true;
                    break;
                }
            }

            file.close();

            if (found) {
                cout << "----------Parth tech----------"<<endl<<endl;
                cout << "Login successful. Welcome, " << fname << "!" << endl;
                system("cls");
                cout << "Press b to visit store or press l to leave......"<<endl;
                cin >>buy;
                system("cls");
            } else {
                cout << "Invalid email or password. Please try again." << endl;
            }
            break;
        }
        case '3': {
            // Forgot password functionality
            cout << "Forgot Password page is under construction." << endl;
            break;
        }
        default: {
            cout << "Invalid choice. Please choose again." << endl;
            break;
        }
    }

    // Switch statement for actions after login
    switch(buy){
        case 'b':{
            // Displaying store categories
            cout << "\n\n\t  ****Parth techincal****\n\n";
            cout << "\t1: R.O \n"
                 << "\t2: Water pump \n"
                 << "\t3: Large Machines(Company level)\n";
            cout << "\n\tEnter your category: ";
            cin >> select;
            system("cls");
        }
    }

    // Switch statement for selecting product category
    switch(select){
        case '1' :{
            // Displaying details of R.O
            cout<<"--------R.O---------"<<endl;
            cout<<"Range--->1000-10000"<<endl;
            cout<<"Quality--->A1"<<endl;
            cout<<"Free installment"<<endl;
            cout<<"80RS delivery fees"<<endl;
            cout<<"Click x to buy :: ";
            cin>>x;
            break;
        }
        case '2': {
            // Displaying details of Water Pumps
            cout<<"--------Water-Pumps---------"<<endl;
            cout<<"Range--->10000-100000"<<endl;
            cout<<"Quality--->Large"<<endl;
            cout<<"Only for gov use"<<endl;
            cout<<"10000RS delivery fees"<<endl;
            cout<<"Click c to buy :: ";
            cin>>c;
            system("cls");
            break;
        }
        case '3': {
            // Displaying details of Large Machines
            cout<<"--------Large plants---------"<<endl;
            cout<<"Range--->1L-1cr"<<endl;
            cout<<"Quality--->Super large"<<endl;
            cout<<"No installment"<<endl;
            cout<<"depend on place"<<endl;
            cout<<"Click v to buy :: ";
            cin>>v;
            system("cls");
            break;
        }
    }

    // Switch statement for selecting payment method
    switch(x){
        case 'x':{
            // Displaying payment options
            cout<<"***Select the Payment method***\n\n";
            cout<<"\t1: UPI\n ";
            cout<<"\t2: bank\n ";
            cout<<"\t3: emi\n ";
            cout<<"\t4: COD\n "<<endl;
            cout<<"Enter the payment method no :: ";
            cin>>payment;
            system("cls");
            break;
        }
    }

    // Switch statement for different payment methods
    switch(payment){
        case '1': {
            // UPI payment process
            cout<<"Enter your upi id :: ";
            cin>>upi;
            cout<<"Sorry under develop........";
            break;
        }
        case '2': {
            // Bank payment process
            cout<<"Enter account holder name :: ";
            cin>>holder;
            cout<<"Enter your card no :: ";
            cin>>card;
            cout<<"Enter your card expiry :: ";
            cin>>cardex;
            cout<<"Enter your card CVV no :: ";
            cin>>cardcvv;
            cout<<"Sorry under develop";
            break;
        }
        case '3': {
            // EMI payment process
            cout<<"select your bank";
            cout<<"\:t1  BOB     \n";
            cout<<"\:t2  SBI     \n";
            cout<<"\:t3  HDFC    \n";
            cout<<"\:t4  IDFC     \n";
            cin>>bank;
            break;
        }
        case '4': {
            // Cash on delivery process
            cout<<"Enter your first address :: ";
            cin>>addr;
            cout<<"Enter your second address :: ";
            cin>>

addh;
            cout<<"Enter your pincode :: ";
            cin>>pin;
            cout<<"Enter your state :: ";
            cin>>state;
            cout<<"Enter your city :: ";
            cin>>city;
            cout<<"Call on 91+ xxx-xxxx-xxx........";
            break;
        }
    }

    // Switch statement for redirecting to selected bank's website
    switch(bank){
        case '1':{
            cout<<"Redirect to Bank of Baroda.......... ";
            break;

        }
        case '2':{
            cout<<"Redirect to Bank of India....... ";
            break;
        }
        case '3':{
            cout<<"Redirect to  HDFC........ ";
            break;
        }
        case '4':{
            cout<<"Redirect to IDFC......... ";
            break;
            
        }
    }

    // Storing user data in files for future reference
    fstream file;
    file.open("data.txt", std::ios::out | std::ios::trunc); // Open for writing, truncating the file
    // Check if file is opened successfully
    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }
    // Writing data to the file
    file <<fname<<endl<<lname<<endl<<date<<endl<<email<<endl<<password<<endl;
    // Close the file
    file.close();

    // Similar operations for other data like UPI, address, and card details

  file.open("upi.txt", std::ios::out | std::ios::trunc); // Open for writing, truncating the file

    // Check if file is opened successfully
    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    // Writing data to the file
    file << upi <<endl;

    // Close the file
    file.close();


    file.open("address.txt", std::ios::out | std::ios::trunc); // Open for writing, truncating the file

    // Check if file is opened successfully
    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    // Writing data to the file
    file << addr <<endl << addh <<endl << pin <<endl << state << city;

    // Close the file
    file.close();


    file.open("card.txt", std::ios::out | std::ios::trunc); // Open for writing, truncating the file

    // Check if file is opened successfully
    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    // Writing data to the file
    file << holder <<endl << card <<endl << cardex <<endl << cardcvv <<endl;

    // Close the file
    file.close();


    return 0;
}