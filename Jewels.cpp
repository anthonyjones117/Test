#include <iostream>
using namespace std;
int main(){
    string J, S;
    cin>>J;
    cin>>S;
    int output = 0;
    for (int i = 0; i<J.length(); i++)
        for (int k = 0; k<S.length(); k++)
            if (J[i]==S[k])
                output+=1;
    cout<<output;
    return 0;
}