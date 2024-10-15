
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> books;
    int n;
    cout<<"How many books to insert to the stack ?";
    cin>>n;


    for(int i=0;i<n;i++)
    {
        string book;
        cout<<"Book "<<i<< "Give the book name: ";
        cin>>book;
        books.push(book);
    }
    cout<<"On the top book on stack : "<<books.top()<<endl;

    cout<<"\n the books of stack are organized in ....\n";
    while(!books.empty()){
    cout<<books.top()<<endl;
    books.pop();
    }

    if(books.empty()){
    cout<<"The stack is emty"<<endl;
    }
    else{
    cout<<"Having more!"<<endl;
    }
    return 0;

}
