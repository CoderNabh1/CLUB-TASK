# include <iostream>
using namespace std;
int main()
{
    char Button;
    cout<<"Press Button:"<<" a "<<" b "<<" c "<<":";b
    cin>>Button;
    switch (Button)
    {
    case 'a':
        cout<<"Hello World";
        break;
    case 'b':
        cout<<"Hola";
        break;
    case 'c':
        cout<<"Bonjour";
        break;
    default:
    cout<<"Press the right Button";
        break;
    }
    return(0);
}