// studi kasus 7

#include<iostream>
#include<string.h>

using namespace std;

class  mi7{
    public:
    void input();
    void proses();
    void output();

// tempat data disimpan
    string nama[50];
    string temporary;

// variabel
    int n;
    int pil;

    char huruf;
    string temp;

};


void mi7::input(){
    cout << "\t\t\t\tU-ANIMAL\n\n";
    cout << "masukan banyak hewan ke database : ";
    cin >> n;
    cout << "\n";
    for (int i=0; i<n;i++){
        cout << "masukan nama hewan : ";
        cin >> nama[i];
    }


cout << "\n\n";

    cout << "data sebelum di urutkan : \n";
// menampilkan seluruh hasil inputan
    for(int i=0;i<n;i++){
        cout <<"nama hewan  = " << nama[i] << endl;
    }

cout << "\n\n";
}


void mi7::proses(){
//sorting
 for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(nama[j-1] > nama[j]){
                temp = nama[j-1];
                nama[j-1] = nama[j];
                nama[j] = temp;
            }

        }
    }

cout << "\n\n";

    cout << "hasil nama hewan sesudah diurutkan : \n";
    for(int i=0;i<n;i++){
        cout << "nama hewan = "<< nama[i] <<" \n";
    }


cout << endl;
    // melacak lokasi nama ada di index berapa
    cout << "pilih hewan : ";
    cin >> pil;
    cout << "hewan yang kamu pilih adalah : " << nama[pil-1] << endl;
    temporary =  nama[pil-1];

cout << "\n\n";

    cout << "masukan huruf yang ingin anda lacak lokasinya : ";
    cin >> huruf;
    cout << "\n";
    for ( int i=0;i<temporary.size();i++){
        if(temporary[i] == huruf){
           cout <<  "karakter yang kamu cari ada di index ke - " << i << endl;
        }
    }
    
}

int main(){
    mi7 x;
    x.input();
    x.proses();
    return 0;
}