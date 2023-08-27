#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    string uri = "AMO FAZER EXERCICIO NO URI";
    
    cout << "<" << uri << ">" << endl;
    cout << "<" << setw(30) << uri << ">" << endl;
    cout << "<" << uri.substr(0, 20) << ">" << endl;
    cout << "<" << left << setw(20) << uri << ">" << endl;
    cout << "<" << left << setw(30) << uri << ">" << endl;
    cout << "<" << uri.substr(0, 30) << ">" << endl;
    cout << "<" << right << setw(30) << uri.substr(0, 20) << ">" << endl;
    cout << "<" << left << setw(30) << uri.substr(0, 20) << ">" << endl;
    return 0;
}