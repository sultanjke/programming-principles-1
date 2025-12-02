#include <iostream>
#include <map>

using namespace std;

int main(){

    int n;
    cin >> n;

    map<string, string> m;
    string x, y;

    for (int i = 0; i < n ; i++){
        cin >> x >> y;
        m[x] = y;
    }

    int l;
    cin >> l;

    for (int i = 0  ; i < l ; i++){
        cin >> x >> y;
        if(m.find(x) == m.end())
            cout<<"login error"<<endl;
        else if(m[x] == y)
            cout<<"correct password"<<endl;
        else if(m[x] != y)
            cout<<"password error"<<endl;
    }

    return 0;
}