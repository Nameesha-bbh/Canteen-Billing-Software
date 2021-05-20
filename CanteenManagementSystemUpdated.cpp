#include<iostream>
#include<string>
#include<fstream>
#include<ctime>
using namespace std;
class canteen
{
    public :
            int pp=0,mp=0,bp=0,sc=0,s=0,vb=0,en=0,vn=0,total=0;
            string name;
    public:
            void displayMenu();//READY
           void takeOrder();//READY
           void decrease();
};
class billing : public canteen
{
    public:
           void calculateBill();
           void showBillInTerminal();
           void showBillInFile();
};

void canteen::decrease()
{
    string choice;
    int choiceForPlates;
    cout<<endl;
    cout<<"Enter the food's keyword to cancel or decrease number of plates:";
    jumptowrongkeyword : cin>>choice;
    if(choice.compare("pp") == 0 ||choice.compare("mp") == 0 ||choice.compare("bp") == 0 ||choice.compare("sc") == 0 ||choice.compare("s") == 0 ||choice.compare("vn") == 0 ||choice.compare("en") == 0 ||choice.compare("vb") == 0 )
    {
        cout<<"How many plates do you want to decrease?";
        cin>>choiceForPlates;
        try{
        if(choice.compare("pp") == 0)
        {
            if(pp >= choiceForPlates && choiceForPlates > -1)
            {
                pp -= choiceForPlates;
            }
            else{
                throw(1);
            }
        }
        else if(choice.compare("mp") == 0)
        {
            if(mp >= choiceForPlates && choiceForPlates > -1)
            {
                mp -= choiceForPlates;
            }
            else{
                throw(1);
            }
        }
        else if(choice.compare("bp") == 0)
        {
            if(bp >= choiceForPlates && choiceForPlates > -1)
            {
                bp -= choiceForPlates;
            }
            else{
                throw(1);
            }
        }
        else if(choice.compare("sc") == 0)
        {
            if(sc >= choiceForPlates && choiceForPlates > -1)
            {
                sc -= choiceForPlates;
            }
            else{
                throw(1);
            }
        }
        else if(choice.compare("s") == 0)
        {
            if(s >= choiceForPlates && choiceForPlates > -1)
            {
                s -= choiceForPlates;
            }
            else{
                throw(1);
            }
        }
        else if(choice.compare("vn") == 0)
        {
            if(vn >= choiceForPlates && choiceForPlates > -1)
            {
                vn -= choiceForPlates;
            }
            else{
                throw(1);
            }
        }
        else if(choice.compare("en") == 0)
        {
            if(en >= choiceForPlates && choiceForPlates > -1)
            {
                en -= choiceForPlates;
            }
            else{
                throw(1);
            }
        }
        else if(choice.compare("vb") == 0)
        {
            if(vb >= choiceForPlates && choiceForPlates > -1)
            {
                vb -= choiceForPlates;
            }
            else{
                throw(1);
            }
        }

        }
        catch(int i)
        {
            cout<<"Entered number of plates was wrong"<<endl;
        }

    }
    else{
        cout<<"Enter a valid keyword:";
        goto jumptowrongkeyword;
    }
}
void canteen::displayMenu()
{
    cout<<endl;
    cout<<"*******MENU*******"<<endl;
    cout<<"_____________________"<<endl;
    cout<<"|FOOD        | RATES |"<<endl;
    cout<<"|--------------------|"<<endl;
    cout<<"|Pani Puri   | RS.25 |"<<endl;
    cout<<"|Masala Puri | RS.25 |"<<endl;
    cout<<"|Bhel Puri   | RS.30 |"<<endl;
    cout<<"|Samosa Chat | RS.30 |"<<endl;
    cout<<"|Samosa      | RS.10 |"<<endl;
    cout<<"|Veg Biriyani| RS.150|"<<endl;
    cout<<"|Egg Noodles | RS.100|"<<endl;
    cout<<"|Veg Noodles | RS.60 |"<<endl;
    cout<<"----------------------"<<endl;
}

void canteen::takeOrder()
{
    string foodChoice;
    int n;
    cout<<"pp - Pani Puri"<<endl;
    cout<<"mp - Masala Puri"<<endl;
    cout<<"bp - Bhel Puri"<<endl;
    cout<<"sc - Samosa Chat"<<endl;
    cout<<"s  - Plain samosa"<<endl;
    cout<<"vn - Veg Noodles"<<endl;
    cout<<"en - Egg Noodles"<<endl;
    cout<<"vb - Veg Biriyani"<<endl;
    cout<<"Enter the keyword:";
    jumpto : cin>>foodChoice;
    if(foodChoice.compare("pp") == 0)
    {
        cout<<"How many plates?";
        cin>>n;
        pp += n;
    }
    else if(foodChoice.compare("mp") == 0)
    {
        cout<<"How many plates?";
        cin>>n;
        mp += n;
    }
    else if(foodChoice.compare("bp") == 0)
    {
        cout<<"How many plates?";
        cin>>n;
        bp += n;
    }
    else if(foodChoice.compare("sc") == 0)
    {
        cout<<"How many plates?";
        cin>>n;
        sc += n;
    }
    else if(foodChoice.compare("s") == 0)
    {
        cout<<"How many plates?";
        cin>>n;
        s += n;
    }
    else if(foodChoice.compare("vb") == 0)
    {
        cout<<"How many plates?";
        cin>>n;
        vb += n;
    }
    else if(foodChoice.compare("en") == 0)
    {
        cout<<"How many plates?";
        cin>>n;
        en += n;
    }
    else if(foodChoice.compare("vn") == 0)
    {
        cout<<"How many plates?";
        cin>>n;
        vn += n;
    }

    else{
        cout<<"The entered keyword was wrong."<<endl;
        cout<<"Re-enter:";
        goto jumpto;
    }
}

void billing::calculateBill()
{
    total = (en*100)+(vn*60)+(vb*150)+(pp * 25)+(mp * 25)+(bp * 30)+(sc *30)+(s * 10);
    showBillInTerminal();

    if(total > 300)
    {
        cout<<"As your order amount is greater than RS.300 , you will get a 30% discount."<<endl;
        cout<<"Your order's total amount is : "<<"RS."<<total<<endl;
        cout<<"After 30% discount , your order's total amount is "<<"RS."<<total - (total*0.3)<<endl<<endl;
    }
    else if(total >= 200 && total <= 300)
    {
        cout<<"You will get a 20% discount."<<endl;
        cout<<"Your order's total amount is : "<<"RS."<<total<<endl;
        cout<<"After 20% discount , your order's total amount is "<<"RS."<<total - (total*0.2)<<endl<<endl;
    }
    else if(total >= 100 && total <= 200)
    {
        cout<<"You will get a 10% discount on the total amount."<<endl;
        cout<<"Your order's total amount is : "<<"RS."<<total<<endl;
        cout<<"After 10% discount , your order's total amount is "<<"RS."<<total - (total*0.1)<<endl<<endl;
    }
    else{
            cout<<"Your order's total amount is : "<<"RS."<<total<<endl<<endl;
    }
}

void billing::showBillInTerminal()
{
    cout<<endl;
    cout<<"************TOTAL AMOUNT*************"<<endl;
    cout<<"FOOD          QUANTITY    RATE(In Rupee)"<<endl;
    if(pp != 0)
    {
        cout<<"Pani Puri     "<<"    "<<pp<<"    "<<"    "<<"RS."<<25*pp<<endl;
    }
    if(mp != 0)
    {
        cout<<"Masala Puri   "<<"    "<<mp<<"    "<<"    "<<"RS."<<25*mp<<endl;
    }
    if(bp != 0)
    {
        cout<<"Bhel Puri     "<<"    "<<bp<<"    "<<"    "<<"RS."<<30*bp<<endl;
    }
    if(sc != 0)
    {
        cout<<"Samosa Chat   "<<"    "<<sc<<"    "<<"    "<<"RS."<<30*sc<<endl;
    }
    if(s != 0)
    {
        cout<<"Plain Samosa  "<<"    "<<s<<"    "<<"    "<<"RS."<<10*s<<endl;
    }
    if(vn != 0)
    {
        cout<<"Veg Noodles   "<<"    "<<vn<<"    "<<"    "<<"RS."<<60*vn<<endl;
    }
    if(en != 0)
    {
        cout<<"Egg Noodles   "<<"    "<<en<<"    "<<"    "<<"RS."<<100*en<<endl;
    }
    if(vb != 0)
    {
        cout<<"Veg Biriyani  "<<"    "<<vb<<"    "<<"    "<<"RS."<<150*vb<<endl;
    }
    cout<<endl;
}

void billing::showBillInFile()
{
    time_t now = time(0);
    char* dt = ctime(&now);
    try{
        ofstream to("billFile.txt");
        if(!to)
        {
            throw('e');
        }
        to << "Customer Name : "<<name<<endl;
    to << "Local date and time : "<<dt<<endl;
    to << endl<<endl;
    to<<"************TOTAL AMOUNT*************"<<endl;
    to<<"FOOD          QUANTITY    RATE(In Rupee)"<<endl;
    if(pp != 0)
    {
        to<<"Pani Puri     "<<"    "<<pp<<"    "<<"    "<<"RS."<<25*pp<<endl;
    }
    if(mp != 0)
    {
        to<<"Masala Puri   "<<"    "<<mp<<"    "<<"    "<<"RS."<<25*mp<<endl;
    }
    if(bp != 0)
    {
        to<<"Bhel Puri     "<<"    "<<bp<<"    "<<"    "<<"RS."<<30*bp<<endl;
    }
    if(sc != 0)
    {
        to<<"Samosa Chat   "<<"    "<<sc<<"    "<<"    "<<"RS."<<30*sc<<endl;
    }
    if(s != 0)
    {
        to<<"Plain Samosa  "<<"    "<<s<<"    "<<"    "<<"RS."<<10*s<<endl;
    }
    if(vn != 0)
    {
        to<<"Veg Noodles   "<<"    "<<vn<<"    "<<"    "<<"RS."<<60*vn<<endl;
    }
    if(en != 0)
    {
        to<<"Egg Noodles   "<<"    "<<en<<"    "<<"    "<<"RS."<<100*en<<endl;
    }
    if(vb != 0)
    {
        to<<"Veg Biriyani  "<<"    "<<vb<<"    "<<"    "<<"RS."<<150*vb<<endl;
    }
    to<<endl;
    to<<endl;
    if(total > 300)
    {
        to<<"As your order amount is greater than RS.300 , you will get a 30% discount."<<endl;
        to<<"Your order's total amount is : "<<"RS."<<total<<endl;
        to<<"After 30% discount , your order's total amount is "<<"RS."<<total - (total*0.3)<<endl<<endl;
    }
    else if(total >= 200 && total <= 300)
    {
        to<<"You will get a 20% discount."<<endl;
        to<<"Your order's total amount is : "<<"RS."<<total<<endl;
        to<<"After 20% discount , your order's total amount is "<<"RS."<<total - (total*0.2)<<endl<<endl;
    }
    else if(total >= 100 && total <= 200)
    {
        to<<"You will get a 10% discount on the total amount."<<endl;
        to<<"Your order's total amount is : "<<"RS."<<total<<endl;
        to<<"After 10% discount , your order's total amount is "<<"RS."<<total - (total*0.1)<<endl<<endl;
    }
    else{
            to<<"Your order's total amount is : "<<"RS."<<total<<endl<<endl;
    }
    to.close();
    }
    catch(char a)
    {
        cout<<"ERROR";
        exit(0);
    }

}
int main()
{
    canteen c;
    billing b;
    bool choice = true;
    char choice1,re,choice2;
    cout<<"******WELCOME TO CANTEEN BILLING SYSYTEM******"<<endl;
    cout<<"Enter your name:";
    cin>>b.name;
    while(choice != false)
    {
        c.displayMenu();//Display the menu
        b.takeOrder();
        cout<<endl;
        cout<<endl;
        cout<<"Do you want ot order more(y/n/c/d)?"<<endl;
        jump : cin>>choice1;
        if(choice1 == 'y' || choice1 == 'n')
        {
            if(choice1 == 'y')
            {
                choice = true;
            }
            else{
                choice = false;
            }
        }
        else if(choice1 == 'c')
        {
            cout<<"ORDER CANCELED"<<endl;
            exit(0);
        }
        else if(choice1 == 'd')
        {
            cout<<endl<<"CURRENT BILL"<<endl;
            more : b.showBillInTerminal();
            b.decrease();
            cout<<endl<<"UPDATED BILL"<<endl;
            b.showBillInTerminal();
            remoreabc :cout<<"Do you want to decrease more?";
             cin>>choice2;
            if(choice2 == 'y')
                goto more;
            if(choice2 == 'n')
                goto ordermoreagain;
            if(choice2 != 'y' || choice2 != 'n')
                cout<<"INVALID CHOICE"<<endl<<"Re-enter:";
                goto remoreabc;
            ordermoreagain : cout<<"Do you want to order more(y/n)?";
             cin>>re;
            if(re == 'n')
                break;
            if(re == 'y')
                continue;
            if(re != 'y' || re != 'n')
                cout<<"Enter a valid choice:";
                goto ordermoreagain;

        }

        else{
            cout<<"Enter y or n only"<<endl;
            cout<<"Re-enter the choice:"<<endl;
            goto jump;
        }
    }
    calc : b.calculateBill();
    char a;
    try{
    cout<<"Do you want a soft copy of your bill(y/n)?";
    cin>>a;
    if(a == 'y' || a == 'n')
    {
        if(a == 'y')
            b.showBillInFile();
    }
    else{
        throw(a);
    }
    }
    catch(char i){
        cout<<i<<" is a invalid choice.Enter a valid choice:";
        cin>>a;
        if(a == 'y')
            b.showBillInFile();
    }

}
