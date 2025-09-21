#include<iostream>
using namespace std;

class ShoppingCart{
    int cart_id;
    string customer_name;
    int item_count;
    public:
    ShoppingCart(int id, string name, int count){
        cart_id = id;
        customer_name = name;
        item_count = count;
    }

    ~ShoppingCart(){
        cout<<"Thank you, "<<customer_name<<endl;
    }
    void displayCart(){
        cout<<"Cart ID: "<<cart_id<<endl;
        cout<<"Number of items in cart: "<<item_count<<endl;
        cout<<"Customer Name: "<<customer_name<<endl;
    }
};
int main(){
    int count;
        int id;
    string name;
    int Icount;
    cout<<"Enter the number of carts: ";
    cin>>count;
    ShoppingCart** arr = new ShoppingCart*[count];
    for (int i = 0; i < count; i++)
    {
        cout<<"Enter the CART ID: ";
        cin>>id;
        cin.ignore();
        cout<<"Enter customer name: ";
        cin>>name;
        cin.ignore();
        cout<<"Enter the item Count: ";
        cin>>Icount;
        arr[i] = new ShoppingCart(id,name,Icount);
    }

    for (int i = 0; i < count; i++)
    {
        arr[i]->displayCart();
        delete arr[i];
    }
    delete[]arr;
    
    
    return 0;
}