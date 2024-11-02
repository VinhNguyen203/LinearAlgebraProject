// De bai: lay vao 2 thoi gian
// in ra khoang cach cua chung
// vi du: 21:00:00, 23:59:00, in ra thoi gian da troi theo
// giay, phut, gio

#include <bits/stdc++.h>
using namespace std;

int main(){
    string time_of_day; cin >> time_of_day;

    int thoigian1 = (time_of_day[0] * 10 + time_of_day[1])*3600 +
    (time_of_day[3]*10 + time_of_day[4])*60 +
    (time_of_day[6] * 10 + time_of_day[7]);

    string time_of_day2; cin >> time_of_day2;
    int thoigian2 = (time_of_day2[0] * 10 + time_of_day2[1])*3600 +
    (time_of_day2[3]*10 + time_of_day2[4])*60 +
    (time_of_day2[6] * 10 + time_of_day2[7]);

    cout << "Giay " << fabs(thoigian2 - thoigian1) << endl;
    int phut = fabs(thoigian1 - thoigian2)/60;
    cout << phut << "m" << fabs(thoigian2 - thoigian1) - phut * 60 << "s" << endl;
    int gio = phut/60; 
    cout << gio << "h" << phut - gio * 60 << "m" <<  
    fabs(thoigian2 - thoigian1) - phut * 60 << "s" << endl;
}