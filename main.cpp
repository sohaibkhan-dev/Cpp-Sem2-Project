#include <iostream>
#include <string>
 
using namespace std;
class cls{
	public:
	void show(string x){
    cout << "\t\t************************************************************" << endl;
    cout << "\t\t******           "<<x<<"            ******" << endl;
    cout << "\t\t******                                                ******" << endl;
    cout << "\t\t************************************************************" << endl;
	}
};
void welcome();
void thankYou();
void exitProgram();
void board();
void upperCase();
void lowerCase();
void palindrome();
void toggleCase();
void reverseName();
void countVowelsAndConsonants();
void factorial();
void displayHelp();


int main() {
    for (int y = 0; y < 1; ) {
        board();
        int x;
        cin >> x;
        switch (x) {
            case 1:
                upperCase();
                break;
            case 2:
                lowerCase();
                break;
            case 3:
                palindrome();
                break;
            case 4:
                toggleCase();
                break;
            case 5:
                reverseName();
                break;
            case 6:
                countVowelsAndConsonants();
                break;
            case 7:
                factorial();
                break;
            case 8:
                displayHelp();
                break;
            case 0:
                exitProgram();
                y++;
                break;
            default:
                cout << "\a Invalid Input \n";
        }
        system("PAUSE");
    }

    return 0;
}

void board() {
    system("cls");
    welcome();
    cout << "\n\t => Menu\n\n";
    cout << "\t Enter 1 to convert a word to uppercase : \n";
    cout << "\t Enter 2 to convert a word to lowercase : \n";
    cout << "\t Enter 3 for checking Palindrome : \n";
    cout << "\t Enter 4 for Toggle Case : \n";
    cout << "\t Enter 5 to reverse a word : \n";
    cout << "\t Enter 6 to count vowels and consonants : \n";
    cout << "\t Enter 7 to find factorial : \n";
    cout << "\t Enter 8 for Helpmenu : \n";
    cout << "\t Enter 0 for Exiting Program : \n\t";
}

void welcome() {
    cout << "\t\t  __        __ "    << "  _____  " << "  _      " << "   ____  "  << "   ___  "  << "  __  __ "  << "  _____  \n";
    cout << "\t\t  \\ \\      / / "  << " | ____| " << " | |     " << "  / ___| "  << "  / _ \\ " << " |  \\/  |" << " | ____| \n";
    cout << "\t\t   \\ \\ /\\ / /  " << " |  _|   " << " | |     " << " | |     "  << " | | | |"  << " | |\\/| |" << " |  _|   \n";
    cout << "\t\t    \\ V  V /   "   << " | |___  " << " | |___  " << " | |___  "  << " | |_| |"  << " | |  | |"  << " | |___  \n";
    cout << "\t\t     \\_/\\_/    "  << " |_____| " << " |_____| " << "  \\____| " << "  \\___/ " << " |_|  |_| " << "|_____| \n";
}

void thankYou() {
    cout <<"\a\t\t  ______                  _     "          << "__     __             \n";
    cout << "\t\t |_   _| |               | |    "         << "\\ \\   / /           \n";
    cout << "\t\t   | | | |__   __ _ _ __ | | __  "        <<  "\\ \\_/ /__  _  _     \n";
    cout << "\t\t   | | | '_ \\ / _` | '_ \\| |/ /   "     <<   "\\   / _ \\| | | |    \n";
    cout << "\t\t   | | | | | | (_| | | | |   <     "       <<    "| | (_) | |_| |     \n";
    cout <<"\t\t   \\_/ |_| |_|\\__,_|_| |_|_|\\_\\   "    <<    " |_|\\___/ \\__,_|    \n";
    cout << "\n\t Have a Great Day! \n";
}

void exitProgram() {
    system("cls");
    thankYou();
    cout << "\n\n\t Program Exited \n";
}

void upperCase() {
                  
    system("cls");
    welcome();
	cls obj1;
	obj1.show("CONVERTING INTO UPPERCASE");
	
    char input[20];
    string result;

    cout << "Enter a word to convert into upperCase : ";
    cin >> input;
    result = strupr(input);
    cout << "\a Result = " << result << "\n";
}

void lowerCase() {
    system("cls");
    welcome();
    
    cls obj2;
	obj2.show("CONVERTING INTO LOWERCASE");

    char input[20];
    string result;

    cout << "Enter a word to convert into lowerCase : ";
    cin >> input;
    result = strlwr(input);
    cout << "\a Result = " << result << "\n";
}

void palindrome() {
    system("cls");
    welcome();
    
    cls obj3;
	obj3.show("Checking PALINDROME      ");

    string name, reverseName;
    cout << "Enter a name without space" << endl;
    cin >> name;

    for (int i = name.length() - 1; i >= 0; i--) {
        reverseName += name[i];
    }

    if (name == reverseName) {
        cout << "\a P A L I N D R O M E \n";
    } else {
        cout << "\a NOT PALINDROME \n";
    }
}

void toggleCase() {
    system("cls");
    welcome();
    
    cls obj4;
	obj4.show("	TOGGLING CASE	  ");

    string input;
    cout << "Enter a word to toggle case: ";
    cin >> input;
    for (char &c : input) {
        if (islower(c)) {
            c = toupper(c);
        } else if (isupper(c)) {
            c = tolower(c);
        }
    }
    cout << "\a Result = " << input << "\n";
}

void reverseName() {
    system("cls");
    welcome();
    
    cls obj5;
	obj5.show("	REVERSE A WORD	  ");

    string name, reverseName;
    cout << "Enter a name without space" << endl;
    cin >> name;

    for (int i = name.length() - 1; i >= 0; i--) {
        reverseName += name[i];
    }

    cout << "\a Result : " << reverseName << "\n";
}

void countVowelsAndConsonants() {
    system("cls");
    welcome();
    
    cls obj6;
	obj6.show("COUNTING VOWELS AND CONSONANTS");

    string input;
    cout << "Enter a word: ";
    cin >> input;

    int vowels = 0, consonants = 0;
    for (char &c : input) {
        if (isalpha(c)) {
            char lowerC = tolower(c);
            if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    cout << "\a Vowels: " << vowels << ", Consonants: " << consonants << "\n";
}

void factorial() {
    system("cls");
    welcome();
    
    cls obj7;
	obj7.show("  FINDING THE FACTORIAL  ");

    double long a, s;
    cout << "Enter any value: ";
    cin >> a;
    s = 1;
    while (a >= 1) {
        s = a * s;
        a = a - 1;
    }
    cout << "\a Factorial = " << s << "\n";
}

void displayHelp() {
	system("cls");
    welcome();
    cout<<endl<<endl;
	cout << "\t Welcome to the String Manipulation Program!\n";
	cout << "\t This program provides various string manipulation options.\n";
	cout << "\t Here's how to use each option:\n";
	cout << "\t 1. Upper Case: Converts a string to uppercase.\n";
	cout << "\t 2. Lower Case: Converts a string to lowercase.\n";
	cout << "\t 3. Palindrome Check: Checks if a string is a palindrome.\n";
	cout << "\t 4. Toggle Case: Toggles the case of a string.\n";
	cout << "\t 5. Reverse String: Reverses a string.\n";
	cout << "\t 6. Count Vowels and Consonants: Counts the number of vowels and consonants in a string.\n";
	cout << "\t 7. Factorial Calculation: Calculates the factorial of a number.\n";
	cout << "\t For more information, please refer to the project documentation.\n";
}

