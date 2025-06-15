// 1.  By using `using namespace std;`, you can write `cout` instead of `std::cout`, making your code simpler and easier to read.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cout <<"what is your name" << endl;
    cin >> name ;
    cout << "my name is "<< name ;
    return 0;
}
