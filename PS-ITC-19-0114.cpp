#include <iostream>

using namespace std;

int main()
{
    int ID;
    int printer=550;
    int phone=700;
    int table=35;
    float vat=0.12;
    int quantity;
    int choice;
    double vat_amount;
    double amount_owed;
    double amount_you_have;
    double amount_to_add;
    double balance;
    string item;
    string item_bought;
    string name;

                      cout<<"   WELCOME TO INF SUPERMARKET "<<endl;
    cout<<"Please enter your name"<<endl<<endl;
    cin>>name;
    cout<<""<<endl;
    cout<<"Please enter your ID"<<endl;
    cin>>ID;
    cout<<""<<endl;
    cout<<"Welcome Mr./Mrs. "<<name<<" To INF SUPERMARKET"<<endl<<endl;

    cout<<"You only pay 12% vat on whatever item you purchase"<<endl<<endl;
    cout<<"Items we sell here"<<endl;
    cout<<"1. Printer -Ghc 550"<<endl;
    cout<<"2. Phone   -Ghc 700"<<endl;
    cout<<"3. Table   -Ghc 35"<<endl<<endl;



    cout<<"Please what do you want to buy?(Enter reference number)"<<endl;
    cin>>choice;
    cout<<""<<endl;


    cout<<""<<endl;
    cout<<"How many would you like to purchase?"<<endl;
    cin>>quantity;

    switch(choice){
    case 1: vat_amount=quantity*printer*vat;
    amount_owed= (printer*quantity)+vat_amount;
    item_bought="Printer";
    break;

    case 2: vat_amount=quantity*phone*vat;
    amount_owed = (phone*quantity)+vat_amount;
    item_bought="Phone";
    break;

    case 3: vat_amount=quantity*table*vat;
    amount_owed= (table*quantity)+vat_amount;
    item_bought="Table";
    break;

    default: cout<<"Enter a figure from 1 to 3";
    }
    cout<<""<<endl;

    cout<<"Please how much do you have on you?"<<endl;
    cin>>amount_you_have;

    amount_to_add=amount_owed-amount_you_have;
    balance=amount_you_have-amount_owed;





cout<<""<<endl<<endl;
cout<<"                             "<<endl;
cout<<"                         "<<endl;
cout<<"                                            Here is your receipt           "<<endl<<endl;
cout<<"                              Name of the customer  :"<<name          <<endl;
cout<<"                              Unique ID             :"<<ID                <<endl;
cout<<"                              Item bought           :"<<item_bought       <<endl;
cout<<"                              Quantity bought       :"<<quantity          <<endl;
cout<<"                              Vat amount            :"<<vat_amount        <<endl;
cout<<"                              Total cost            :"<<amount_owed       <<endl;
cout<<"                              Total amount paid     :"<<amount_you_have   <<endl;
    if (amount_you_have>amount_owed){
        cout<<""<<endl;
cout<<"                              Your balance is  Ghc   "<<balance           <<endl;
        }

else;

       if(amount_you_have<amount_owed) {        cout<<"                               Please you still owe Ghc  "<<amount_to_add<<endl<<endl;
    }

    cout<<"                               Thank You for transacting with us "<<name<<endl;


    return 0;
}
