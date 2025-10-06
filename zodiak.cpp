#include <iostream>
using namespace std;
int umur;
int tanggal;
int bulan;
int tahun;

int main() 
{
    cout<<"Welcome! Silakan masukkan data diri Anda"<<endl ;
    cout<<"Masukkan tanggal lahir: ";
    cin>>tanggal;
    cout<<"Masukkan bulan lahir (1-12): ";
    cin>>bulan;
    cout<<"Masukkan tahun lahir: ";
    cin>>tahun;
    umur=2025-tahun;
    cout<<"Umur Anda adalah "<<2025-tahun<<" tahun"<<endl;
    
    if(umur<17){
        cout<<"Peringatan: Umur Anda belum cukup";
    }
    else if(umur>=17){
        if(bulan==1){
            if(tanggal>=20){
                cout<<"Zodiak Anda adalah Aquarius";
            }
            else if(tanggal<20){
                cout<<"Zodiak Anda adalah Capricorn";
            }
        }
        else if(bulan==2){
            if(tanggal>=19){
                cout<<"Zodiak Anda adalah Pisces";
            }
            else if(tanggal<19){
                cout<<"Zodiak Anda adalah Aquarius";
            }
        }
        else if(bulan==3){
            if(tanggal>=21){
                cout<<"Zodiak Anda adalah Aries";
            }
            else if(tanggal<21){
                cout<<"Zodiak Anda adalah Pisces";
            }
        }
        else if(bulan==4){
            if(tanggal>=20){
                cout<<"Zodiak Anda adalah Taurus";
            }
            else if(tanggal<20){
                cout<<"Zodiak Anda adalah Aries";
            }
        }
        else if(bulan==5){
            if(tanggal>=21){
                cout<<"Zodiak Anda adalah Gemini";
            }
            else if(tanggal<21){
                cout<<"Zodiak Anda adalah Taurus";
            }
        }
        else if(bulan==6){
            if(tanggal>=21){
                cout<<"Zodiak Anda adalah Cancer";
            }
            else if(tanggal<21){
                cout<<"Zodiak Anda adalah Gemini";
            }
        }
        else if(bulan==7){
            if(tanggal>=23){
                cout<<"Zodiak Anda adalah Leo";
            }
            else if(tanggal<23){
                cout<<"Zodiak Anda adalah Cancer";
            }
        }
        else if(bulan==8){
            if(tanggal>=23){
                cout<<"Zodiak Anda adalah Virgo";
            }
            else if(tanggal<23){
                cout<<"Zodiak Anda adalah Leo";
            }
        }
        else if(bulan==9){
            if(tanggal>=23){
                cout<<"Zodiak Anda adalah Libra";
            }
            else if(tanggal<23){
                cout<<"Zodiak Anda adalah Virgo";
            }
        }
        else if(bulan==10){
            if(tanggal>=23){
                cout<<"Zodiak Anda adalah Scorpio";
            }
            else if(tanggal<23){
                cout<<"Zodiak Anda adalah Libra";
            }
        }
        else if(bulan==11){
            if(tanggal>=22){
                cout<<"Zodiak Anda adalah Sagitarius";
            }
            else if(tanggal<22){
                cout<<"Zodiak Anda adalah Scorpio";
            }
        }
        else if(bulan==12){
            if(tanggal>=22){
                cout<<"Zodiak Anda adalah Capricorn";
            }
            else if(tanggal<22){
                cout<<"Zodiak Anda adalah Sagitarius";
            }
        }
    }
    
    return 0;
}