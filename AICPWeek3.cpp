#include <iostream>
using namespace std;

// Function to calculate and display the bill for Slab 1 and Slab 2
void displayBillSlab1And2(const int sourceData[3][3]) {
    int slab1_cost1, slab1_cost2, slab1_cost3;
    int slab2_cost1, slab2_cost2, slab2_cost3;
    
    int slab1_units[3] = { 55 , 65 ,75 };
    
    // Calculate total cost for Slab 1 and Slab 2
    slab1_cost1 = slab1_units[0] * 10;
    slab1_cost2 = slab1_units[1] * 10;
    slab1_cost3 = slab1_units[2] * 10;

    int slab2_units[3] = { 120, 150, 170 };
    slab2_cost1 = slab2_units[0] * 15; 
    slab2_cost2 = slab2_units[1] * 15; 
    slab2_cost3 = slab2_units[2] * 15;

    // Display the bill for Slab 1 and Slab 2
    cout << "Bill for Slab 1: Rs." << "\t" << slab1_cost1 << "\t" << slab1_cost2 
         << "\t" << slab1_cost3 << endl;
    cout << "Bill for Slab 2: Rs." << "\t" << slab2_cost1 << "\t" << slab2_cost2 
         << "\t" << slab2_cost3 << endl;
}

//Function to calculate and display bill for Slab 3
void displayBillSlab3(const int sourceData[3][3])
{
    int slab3_cost1, slab3_cost2, slab3_cost3;
    int slab3_units[3] = { 210, 230, 240 };

    slab3_cost1 = slab3_units[0] * 20;
    slab3_cost2 = slab3_units[1] * 20;
    slab3_cost3 = slab3_units[2] * 20;

    //Display bill for Slab 3
    cout << "Bill for Slab 3: Rs." << "\t" << slab3_cost1 << "\t" << slab3_cost2 
         << "\t" << slab3_cost3 << endl;
    
}


int main() {
    int student_id = 1234, choice;

    int sourceData[3][3] = {
        {55, 65, 75},
        {120, 150, 170},
        {210, 230, 240}
    };

    do {
        cout << "Student ID: " << student_id << endl;
        cout << "Enter Your Choice (1-4): " << endl;
        cout << "Press 1 to display the bill of Slab 1 and Slab 2" << endl;
        cout << "Press 2 to display the bill of Slab 3" << endl;
        cout << "Press any other key to exit" << endl;
        cin  >>  choice;

        switch (choice) {
        case 1:
            displayBillSlab1And2(sourceData);
            break;
        case 2:
            displayBillSlab3(sourceData);
            break;
        default:
            cout << "Exiting the program." << endl;
            break;
        }

    } while (choice >= 1 && choice <= 2);

    return 0;
}
