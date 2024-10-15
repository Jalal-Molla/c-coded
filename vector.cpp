#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> shoppingCart;
    // adding products
    shoppingCart.push_back("Apple Latop");
    shoppingCart.push_back("Dell laptop");
    shoppingCart.push_back("Gigabyte Latop");

    cout<<"The products are added to the card: Here is the products"<<endl;
    for(int i=0;i<shoppingCart.size();i++){
    cout<<i+1<<". "<<shoppingCart[i]<<endl;
    }
    cout<<"First Time of Vector size: "<<shoppingCart.size()<<endl;

    shoppingCart.push_back("Windows");
    shoppingCart.push_back("Kali Linux");
    shoppingCart.push_back("Mac Os");

    cout<<"\n new products"<<endl;
    for(int i=0; i<shoppingCart.size();i++)
    {
        cout<<i+1<<". "<<shoppingCart[i]<<endl;

    }
    cout<<"Second Time of Vector size: "<<shoppingCart.size()<<endl;
    return 0;
}
