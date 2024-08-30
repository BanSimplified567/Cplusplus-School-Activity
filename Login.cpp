#include <bits/stdc++.h>
using namespace std;

map<string, string> credentials;

// void  = when used as a function return type, the void keyword specifies that the function doesn't return a value.

// createUser() = Dri na area ka mag buhat og accout og password para sa imung system.
void createUser()
{
    cout << "\t\t\t\t\t\t\t==================================================================";
    string username, password;
    cout << "\n\n\t\t\t\t\t\t\tEnter username: ";
    cin >> username;
    cout << "\n\t\t\t\t\t\t\tEnter password: ";
    cin >> password;

    credentials[username] = password;
    cout << "\n\n\t\t\t\t\t\t\tUser created successfully!\n\n";
    cout << "\t\t\t\t\t\t\t=====================================================================================================\n";
}

bool login()
{

    string username, password;
    cout << "\n\t\t\t\t\t\t\t=====================================================================================================";
    cout << "\n\n\t\t\t\t\t\t\tEnter username: ";
    cin >> username;
    cout << "\n\t\t\t\t\t\t\tEnter password: ";
    cin >> password;

    if (credentials[username] == password)
    {
        cout << "\n\n\t\t\t\t\t\t\tLogin successful! \n\n";
    }
    else
    {
        cout << "\n\n\t\t\t\t\t\t\tInvalid username or password. Please Create Account First.\n";
        return 0;
    }
    cout << "\t\t\t\t\t\t\t=====================================================================================================\n\n\n";
}

void payElectricBill()
{
    cout << "\t\t\t\t\t\t\t=====================================================================================================";
    // Progress for paying electric bills
    int previous, present, resultBill, resultElectricBill;

    cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\tElectric bill payment.\n\n\n";
    cout << "\n\t\t\t\t\t\t\tEnter Your Previous Bill: ";
    cin >> previous;
    cout << "\n\t\t\t\t\t\t\tEnter Your Present Bill: ";
    cin >> present;

    cout << "\t\t\t\t\t\t\tRate: 1.50";
    resultBill = previous - present;

    resultElectricBill = resultBill * 1.50;

    cout << "\n\t\t\t\t\t\t\tThis is result: " << resultElectricBill;
    cout << "\n\t\t\t\t\t\t\t=====================================================================================================\n\n";
}

void payWaterBill()
{
    cout << "\n\t\t\t\t\t\t\t=====================================================================================================";
    // Logic for paying water bills
    int previous, present, resultBill, resultWaterBill;

    cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\tWater bill payment processed.\n";
    cout << "\n\t\t\t\t\t\t\tEnter Your Previous Bill: ";
    cin >> previous;
    cout << "\n\t\t\t\t\t\t\tEnter Your Present Bill: ";
    cin >> present;

    cout << "\t\t\t\t\t\t\tRate: 1.50";

    resultBill = previous - present;
    resultWaterBill = resultBill * 1.50;

    cout << "\n\t\t\t\t\t\t\tThis is result: " << resultWaterBill;
    cout << "\n\t\t\t\t\t\t\t=====================================================================================================\n\n";
}

void calculator()
{

    int choiceOperator;

    cout << "\n\t\t\t\t\t\t\tWhat Operator? (+, -, /, *)";

    cout << "\n\t\t\t\t\t\t\t 1. Addition: + \n";
    cout << "\n\t\t\t\t\t\t\t 2. Subtraction: - \n";

    cout << "\n\t\t\t\t\t\t\t 3. Division: / \n";
    cout << "\n\t\t\t\t\t\t\t 4. Multiplication: * \n";

    cout << "\n\n\t\t\t\t\t\t\t\t\t Enter The Choice: ";
    cin >> choiceOperator;
    switch (choiceOperator)
    {
    case 1:
        int add, adding, addition;
        cout << "\n\t\t\t\t\t\t\tEnter FirstNumber: ";
        cin >> add;
        cout << "\n\t\t\t\t\t\t\tEnter SecondNumber: ";
        cin >> adding;

        addition = add + adding;

        cout << "\n\t\t\t\t\t\t\tResult: " << addition;
        break;
    case 2:
        int subtract, subtracting, subtraction;
        cout << "\n\t\t\t\t\t\t\tEnter FirstNumber: ";
        cin >> subtract;
        cout << "\n\t\t\t\t\t\t\tEnter SecondNumber: ";
        cin >> subtracting;

        subtraction = subtract - subtracting;

        cout << "\n\t\t\t\t\t\t\tResult: " << subtraction;
        break;
    case 3:
        int divide, dividing, division;
        cout << "\n\t\t\t\t\t\t\tEnter FirstNumber: ";
        cin >> divide;
        cout << "\n\t\t\t\t\t\t\tEnter SecondNumber: ";
        cin >> dividing;

        division = divide / dividing;

        cout << "\n\t\t\t\t\t\t\tResult: " << division;
        break;
    case 4:
        int multiply, multiplying, multiplication;
        cout << "\n\t\t\t\t\t\t\tEnter FirstNumber: ";
        cin >> multiply;
        cout << "\n\t\t\t\t\t\t\tEnter SecondNumber: ";
        cin >> multiplying;

        multiplication = multiply * multiplying;

        cout << "\n\t\t\t\t\t\t\tResult: " << multiplication;
        break;
    default:
        cout << "\n\n\t\t\t\t\t\t\tInvalid choiceOperator. Please try again.\n";
    }
}

int main()
{

    int choice;

    while (true)
    {

        cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t Welcome User Pick One In The Choices. ";
        cout << "\n\t\t\t\t\t\t\t\t\t==================================================================";
        cout << "\n\t\t\t\t\t\t\t\t\t= 1. Create Account.                         ";
        cout << "\n\t\t\t\t\t\t\t\t\t= 2. Log-In.                                 ";
        cout << "\n\t\t\t\t\t\t\t\t\t= 3. Exit.                                   ";
        cout << "\n\t\t\t\t\t\t\t\t\t==================================================================";

        cout << "\n\n\t\t\t\t\t\t\t\t\t Enter The Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            createUser();
            break;
        case 2:
            if (login())
            {
                int number;
                while (true)
                {
                    cout << "\t\t\t\t\t\t\t\t\t\tPick-One To Progress";
                    cout << "\n\t\t\t\t\t\t\t  1. PayElectricBill. ";
                    cout << "\n\t\t\t\t\t\t\t  2. PayWaterBill.";
                    cout << "\n\t\t\t\t\t\t\t  3. Calculator. ";
                    cout << "\n\t\t\t\t\t\t\t  4. Exit. ";
                    cout << "\n\n";

                    cout << "\n\t\t\t\t\t\t\tPick-One To Processed: ";
                    cin >> number;
                    cout << "\n\n";

                    switch (number)
                    {
                    case 1:
                        payElectricBill();
                        break;
                    case 2:
                        payWaterBill();
                        break;
                    case 3:
                        calculator();
                        break;
                    case 4:
                        main();
                    default:
                        cout << "\n\n\t\t\t\t\t\t\tInvalid choice. Please try again.\n";
                    }
                    if (choice == 3)
                    {
                        break;
                    }
                }
            }
            break;
        default:
            cout << "\n\t\t\t\t\t\t\t\t\t==================================================================";
            cout << "\n\n\t\t\t\t\t\t\t End Program Thank For Using Our System. \n";
            cout << "\n\t\t\t\t\t\t\t\t\t==================================================================";
            return 1;
        }
    }
    return 0;
}
