#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void buscar(vector<int> canicas,int numero)
{
    auto a=find(canicas.begin(),canicas.end(),numero);
    if(a==canicas.end())
    {
        cout<<numero<<" not found"<<endl;
    }
    else
        cout<<numero<<" found at "<<a-canicas.begin()+1<<endl;
}


int main() {
    int N,Q,c=1;
    int numero;
    while(cin>>N>>Q)
    {
        vector<int> canicas;
        if(N==0 and Q==0)
            break;
        cout<<"CASE# "<<c<<":"<<endl;
        c++;
        for(int i=0;i<N;i++){
            cin>>numero;
            canicas.push_back(numero);
        }
        sort(canicas.begin(),canicas.end());
        for (int j = 0; j < Q; ++j)
        {
            cin>>numero;
            buscar(canicas,numero);
        }

    }
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
}