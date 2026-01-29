#include <bits/stdc++.h>
using namespace std;

class SinhVien {
private:
    string ma, ten, lop, ns;
    float gpa;

    void chuanHoaTen() {
        stringstream ss(ten);
        string word, res = "";
        while (ss >> word) {
            word[0] = toupper(word[0]);
            for (int i = 1; i < word.size(); i++)
                word[i] = tolower(word[i]);
            res += word + " ";
        }
        res.pop_back(); 
        ten = res;
    }

public:
    SinhVien() {
        ma = ten = lop = ns = "";
        gpa = 0;
    }

    friend istream& operator >> (istream &in, SinhVien &a) {
        a.ma = "B20DCCN001";
        getline(in, a.ten);
        getline(in, a.lop);
        getline(in, a.ns);
        in >> a.gpa;

        if (a.ns[1] == '/') a.ns = "0" + a.ns;
        if (a.ns[4] == '/') a.ns.insert(3, "0");

        a.chuanHoaTen();

        return in;
    }

    friend ostream& operator << (ostream &out, SinhVien a) {
        out << a.ma << " " << a.ten << " " << a.lop << " "
            << a.ns << " " << fixed << setprecision(2) << a.gpa;
        return out;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

