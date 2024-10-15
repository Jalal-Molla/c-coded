#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> books;
    int n;
    cout<<"How many do you want to add to the queue? ";
    cin>>n;

    for(int i=0;i<n;i++){
        string book;
        cin>>book;
        books.push(book);
    }

    cout<<"The first one: "<<books.front()<<endl;
    cout<<"The last one:  "<<books.back()<<endl;
    while(!books.empty()){
    cout<<books.front()<<"find out!\n";
        books.pop();
    }
    if(books.empty()){
        cout<<"The queue is empty"<<endl;
    }
    else{
        cout<<"Having more!"<<endl;
    }


}
