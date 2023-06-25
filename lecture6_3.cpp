// #include <iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     while (i<101)
//     {
//         cout<<i<<endl;
//         i++;
//     }
    
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int i = 100;
    int input;
    for(i=1;i<101;i++){
        cin>>input;
        if(input == 65){
            cout<<"correct guess";
            break;
        }
    }
    return 0;
}