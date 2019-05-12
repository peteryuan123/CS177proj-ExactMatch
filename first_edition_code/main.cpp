#include "match.h"
#include<iostream>
int main(){
    string s;
    cout << "Reference string: ";
    cin >> s;
    cout << "Read string: ";
    string s2;
    cin >> s2;
    LF_map map(10, s);
    char bwt[11];
    int sa[10];

    bwt_transform(sa,bwt,s);

    map.init_table(bwt);
    cout << bwt << endl;

    exact_match(s, bwt,s2,&map,sa);
    return 0;
}