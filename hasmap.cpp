#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<long long, string> contactlist;

    // Adding contacts to the unordered_map
    contactlist[1643215061] = "Md Jalal Molla";
    contactlist[1991544487] = "Md Easmile Molla";
    contactlist[1764933744] = "MD JALAL MOLLA";

    // User input
    string nameToSearch;
    cout << "Enter the name to search for: ";
    getline(cin, nameToSearch);

    // Search for the name and find the corresponding number
    bool found = false; // Flag to check if the name is found
    for (const auto& contact : contactlist) {
        if (contact.second == nameToSearch) {
            cout << "The phone number for " << nameToSearch << " is: " << contact.first << endl;
            found = true;
            break; // Exit the loop once the number is found
        }
    }

    // If the name is not found
    if (!found) {
        cout << "Contact not found!" << endl;
    }

    return 0;
}
