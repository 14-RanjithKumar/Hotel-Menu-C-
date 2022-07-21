#include<iostream>

using namespace std;
class getDetails
{
protected:
    string name;
    int tableNo=0;

public:
    void customerDetails()
    {
        cout<<"\t\t-------------------------------------"<<endl;
        cout<<"\n\t\t Welcome To Foodie Corner"<<endl;

        cout<<"\n Date:"<<__DATE__<<endl;
        cout<<"\n Time:"<<__TIME__<<endl;
        cout<<"\n Enter the name: ";
        getline(cin,name);
        cout<<"\n Enter the table no: ";
        cin>>tableNo;

        cout<<"\n\t\t--------------------------------------"<<endl;
    }
};

class Menu
{
public:
    void displayMenu()
    {

        cout<<"\n 1.Veg Rice        Rs:50";
        cout<<"\n 2.Curd Rice       Rs:40";
        cout<<"\n 3.Lemon Rice      Rs:30";
        cout<<"\n 4.Chicken Rice    Rs:90";
        cout<<"\n 5.Chicken Noodles Rs:90";
        cout<<"\n 6.Ghee Rice       Rs:60";

    }
};

class getOrder
{
private:
    float total=0,quantity;
    int choice;

public:
    void selectDish()
    {
        cout<<"\n Enter the No of the dish to order: ";
        cin>>choice;

            switch(choice)
            {
            case 1:
                cout<<"\n Your Selected Veg Rice";
                cout<<"\n Enter the quantity of Veg Rice: ";
                cin>>quantity;
                total = total + (quantity * 50);
                break;

            case 2:
                cout<<"\n Your Selected Curd Rice";
                cout<<"\n Enter the quantity of Curd Rice: ";
                cin>>quantity;
                total = total + (quantity * 40);
                break;

            case 3:
                cout<<"\n Your Selected Lemon Rice";
                cout<<"\n Enter the quantity of Lemon Rice: ";
                cin>>quantity;
                total = total + (quantity * 30);
                break;

            case 4:
                cout<<"\n Your Selected Chicken Rice";
                cout<<"\n Enter the quantity of Chicken Rice: ";
                cin>>quantity;
                total = total + (quantity * 90);
                break;

            case 5:
                cout<<"\n Your Selected Chicken Noodles";
                cout<<"\n Enter the quantity of Chicken Noodles: ";
                cin>>quantity;
                total = total + (quantity * 90);
                break;

            case 6:
                cout<<"\n Your Selected Ghee Rice";
                cout<<"\n Enter the quantity of Ghee Rice: ";
                cin>>quantity;
                total = total + (quantity * 60);
                break;


            default:
                cout<<"\n Invalid Dish Selection ";
                break;
            }


    }

    void Bill()
    {
        cout<<"\n Total Amount : Rs  "<<total<<endl;

        cout<<"\n\t\t Thank you come & visit again :-)";
    }


};

int main()
{
    getDetails gobj;
    gobj.customerDetails();

    Menu obj;
    obj.displayMenu();

    getOrder oobj;
    oobj.selectDish();
    oobj.Bill();

    return 0;
}
