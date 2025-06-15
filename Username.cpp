// 1.  By using `using namespace std;`, you can write `cout` instead of `std::cout`, making your code simpler and easier to read.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    int age;
    
    cout <<"what is your name ?";
    cin >> name;

    cout <<"what is your age";
    cin >> age ;

    cout<<"hello my name is"<< name << endl;
    cout << "my age is" << age <<endl;

    return 0;


}
