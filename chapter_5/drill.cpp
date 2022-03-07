#include <iostream>
#include "../std_lib_facilities.h"

int main()
try{
    //cout << "Success!\n";
    //cout << "Success!\n";
    //cout << "Success" << "!\n";
    //cout << "success" << '\n';
    /*int res = 7;
    vector<int> v(10); 
    v[5] = res; 
    cout << "Success!\n"; */
    /*vector<int> v(10); 
    v[5] = 7; 
    if (v[5]==7) cout << "Success!\n"; */
    /*bool cond = true;
    if (cond) cout << "Success!\n"; 
    else cout << "Fail!\n"; */
    /*bool c = true; 
    if (c) cout << "Success!\n"; 
    else cout << "Fail!\n"; */
    /*string s = "ape"; 
    bool c = "fool"; 
    if (c) cout << "Success!\n"; */
    /*string s = "ape"; 
    if (s=="ape") cout << "Success!\n";*/
    //string s = "ape"; if (s+"fool" == "apefool") cout << "Success!\n";
    /*vector<char> v(5); 
    for (int i=0; i<v.size(); ++i) 
        cout << i << '\n'; 
    cout << "Success!\n"; */
    /*string s = "Success!\n"; 
    for (int i=0; i<s.length(); ++i) 
        cout << s[i]; */
    /*int x = 2000; 
    int c = x; 
    if (c==2000) cout << "Success!\n"; */
    /*string s = "Success!\n"; 
    for (int i=0; i<s.size(); ++i)
        cout << s.at(i);*/
    /*int i=0; 
    int j = 9; 
    while (i<10) {
        ++i;
        cout << "Processing " << '\n';
    } 
    if (j<i) cout << "Success!\n"; */
    /*int x = 2; 
    double d = 2 * x + 0.5; 
    if (d==2*x+0.5) 
        cout << "Success!\n"; */
    /*std::string s = "Success!\n"; 
    for (int i=0; i<=s.size(); ++i) cout << s[i]; */
    cout << "Success!\n";

}
catch(exception& e){
    std::cerr << "OMG, error: " << e.what() << '\n';
    return 1;
}
catch(...){
    cerr << "Oops: unknown exception!\n";
    return 2;
}