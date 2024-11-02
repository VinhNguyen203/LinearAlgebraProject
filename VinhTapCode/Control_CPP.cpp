#include <bits/stdc++.h>

using namespace std;

int main(){

    // vi du he thong quan ly gio giac
    // he thong se nhan vao gio giac tu nguoi dung
    // va hien ra do la buoi sang, chieu, hay dem
    // 5h-11h59, sang
    // 12h, 17h59, chieu,
    // 18h - 4h59, dem

    // kien thuc: tat ca moi dinh dang nhap vao, deu co the la string
    // tod: "21:49:33"
    string time_of_day; 
    int gio, phut, giay; 
    scanf("%d:%d:%d", &gio, &phut, &giay);
    


    // gio
    // ep int(tod[0] - '0') bat buoc la 50-48
    // int gio = int(time_of_day[0] - '0')  * 10 + int(time_of_day[1] - '0');
    // // phut
    // int phut = (time_of_day[3]-'0') * 10 + (time_of_day[4] - '0');
    // // giay
    // int giay = (time_of_day[6] - '0') * 10 + (time_of_day[7] - '0');

    if (gio >= 5 && gio <= 11) cout << "sang" << endl;
    else if (gio >= 12 && gio < 18) cout << "chieu" << endl;
    else cout << "toi" << endl;






}
