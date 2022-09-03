#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int main()
{
    string S;
    getline(cin, S);
    
    try
    {
        int no;
        no=stoi(S); // solo soporta c++ 11 o superior
        cout<<no<<endl;
    }
    catch(exception a)
    {
        cout<<"Bad String";
    }
    
    return 0;
}

