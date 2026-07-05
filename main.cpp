#include <iostream>

using namespace std;

// variable global
int kd_mkn, kd_mnm, hrg[6]={1500,2000,2500,3000,3500,5000}, jmlh, tot_hrg_mkn, tot_hrg_mnm, bayar, totmkn, totmnm, kbl, total, krg, t_mkn, t_mnm, t_semua;
float  diskon;
char loop;

// prototype
void daftar_menu();
void pesan_makan();
void pesan_minum();
void uang_kembalian();
void t_belanja();

//non prototype berparamater
int buat_hitung(int t_hitung){
    total = totmkn + totmnm;
    if (total >= 50000) 
    {
        diskon = 0.08 * total;
    }
    else if (total >= 25000) 
    {
        diskon = 0.06 * total;
    }
    else 
    {
        diskon = 0;
    }
    t_semua = total - diskon;
    return t_hitung;
}

// main
int main()
{
    // variabel main untuk percabangan dan perulangan
    int tampil;
    string pesan;
    daftar_menu();
    // perulangan dan percabangan untuk memilih menu
    do
    {
        cout << "\t\t\t Masukan Pesanan [makan/minum]?                            : " ;
        cin >> pesan;
        if(pesan == "makan"){
            pesan_makan();
        }else if(pesan == "minum"){
            pesan_minum();
        }else{
            loop = 'y';
        cout << "\t\t\t Pesanan tidak valid, Lakukan pemesanan ulang          \n " ;
        }
    }while (loop =='y'|| loop == 'Y');
    tampil=buat_hitung(t_semua);
    // menampilkan dan input pembayaran, sub total harga sebelum diskon dan uang pembayaran
    cout << "\t\t\t  Total harga pesanan anda                                  : Rp." << total << endl;
    cout << "\t\t\t  Uang Pembayaran                                           : Rp.";
    cin >> bayar;
    // menampilkan footer
    t_belanja();
    return 0;
}
void daftar_menu() 
{
    cout << "\t\t\t ____________________________________________________________________________" << endl;
    cout << "\t\t\t|                 SELAMAT DATANG DI KASIR Angkringan Mas Mul                 |" << endl;
    cout << "\t\t\t|____________________________________________________________________________|" << endl;
    cout << "\t\t\t|                                                                            |" << endl;
    cout << "\t\t\t|                                Daftar Menu                                 |" << endl;
    cout << "\t\t\t|............................................................................|" << endl;
    cout << "\t\t\t| Makanan                              | Minuman                             |" << endl;
    cout << "\t\t\t|                                      |                                     |" << endl;
    cout << "\t\t\t| 1. Nasi Bumbu Padang        Rp.2.500 | 1. Es Teh                 Rp.3.000  |" << endl;
    cout << "\t\t\t| 2. Nasi Goreng              Rp.5.000 | 2. Es Jeruk               Rp.3.500  |" << endl;
    cout << "\t\t\t| 3. Tahu Bakso               Rp.2.000 | 3. Teh Anget              Rp.2.500  |" << endl;
    cout << "\t\t\t| 4. Capjay                   Rp.2.500 | 4. Jeruk Anget            Rp.3.000  |" << endl;
    cout << "\t\t\t| 5. Nasi Kucing              Rp.3.000 | 5. Es Kopi                Rp.5.000  |" << endl;
    cout << "\t\t\t| 6. Tempura                  Rp.1.500 | 6. Es Susu                Rp.5.000  |" << endl;
    cout << "\t\t\t ============================================================================" << endl;
    cout << endl;
}

// memilih makanan dan jumlah porsi
void pesan_makan() 
{
    cout << "\t\t\t makan apa hari ini bos?"<<endl;
    cout << "\t\t\t Note: Silahkan ketik '0' jika tidak memesan makanan        :";
    cin >> kd_mkn;
    cout << endl;
    switch (kd_mkn)
    {
    
    case 0:
        cout << "\t\t\t  tanpa makanan" << endl;
        cout << "\t\t\t  Ketik Y jika ingin menambah menu, Ketik T jika tidak      : ";
        cin >> loop;
        break;
        
    case 1:
        cout << "\t\t\t  Nasi Bumbu Padang" << endl;
        cout << "\t\t\t  Harga 1 Porsi Makanan                                     : Rp." << hrg[2] << endl;
        cout << "\t\t\t  Jumlah Porsi                                              : ";
        cin >> jmlh;
        tot_hrg_mkn = hrg[2] * jmlh;
        totmkn = totmkn + tot_hrg_mkn;
        cout << "\t\t\t  Total Harga Makanan                                       : Rp." << totmkn << endl;
        cout << "\t\t\t  Ketik Y jika ingin menambah menu, Ketik T jika tidak      : ";
        cin >> loop;
        break;

    case 2:
    cout << "\t\t\t  Nasi Goreng" << endl;
        cout << "\t\t\t  Harga 1 Porsi Makanan                                     : Rp." << hrg[5] << endl;
        cout << "\t\t\t  Jumlah Porsi                                              : ";
        cin >> jmlh;
        tot_hrg_mkn = hrg[5] * jmlh;
        totmkn =totmkn + tot_hrg_mkn;
        cout << "\t\t\t  Total Harga Makanan                                       : Rp." << totmkn << endl;
        cout << "\t\t\t  Ketik Y jika ingin menambah menu, Ketik T jika tidak      : ";
        cin >> loop;
        break;
        
    case 3:
        cout << "\t\t\t  Tahu Bakso" << endl;
        cout << "\t\t\t  Harga 1 Porsi Makanan                                     : Rp." << hrg[1] << endl;
        cout << "\t\t\t  Jumlah Porsi                                              : ";
        cin >> jmlh;
        tot_hrg_mkn = hrg[1] * jmlh;
        totmkn = totmkn + tot_hrg_mkn;
        cout << "\t\t\t  Total Harga Makanan                                       : Rp." << totmkn << endl;
        cout << "\t\t\t  Ketik Y jika ingin menambah menu, Ketik T jika tidak      : ";
        cin >> loop;
        break;

    case 4:
        cout << "\t\t\t  Capjay" << endl;
        cout << "\t\t\t  Harga 1 Porsi Makanan                                     : Rp." << hrg[2] << endl;
        cout << "\t\t\t  Jumlah Porsi                                              : ";
        cin >> jmlh;
        tot_hrg_mkn = hrg[2] * jmlh;
        totmkn = totmkn + tot_hrg_mkn;
        cout << "\t\t\t  Total Harga Makanan                                       : Rp." << totmkn << endl;
        cout << "\t\t\t  Ketik Y jika ingin menambah menu, Ketik T jika tidak      : ";
        cin >> loop;
        break;

    case 5:
        cout << "\t\t\t  Nasi Kucing" << endl;
        cout << "\t\t\t  Harga 1 Porsi Makanan                                     : Rp." << hrg[4] << endl;
        cout << "\t\t\t  Jumlah Porsi                                              : ";
        cin >> jmlh;
        tot_hrg_mkn = hrg[4] * jmlh;
        totmkn = totmkn + tot_hrg_mkn;
        cout << "\t\t\t  Total Harga Makanan                                       : Rp." << totmkn << endl;
        cout << "\t\t\t  Ketik Y jika ingin menambah menu, Ketik T jika tidak      : ";
        cin >> loop;
        break;
        
    case 6:
    cout << "\t\t\t  Tempura" << endl;
    cout << "\t\t\t  Harga 1 Porsi Makanan                                     : Rp." << hrg[1] << endl;
    cout << "\t\t\t  Jumlah Porsi                                              : ";
    cin >> jmlh;
    tot_hrg_mkn = hrg[1] * jmlh;
    totmkn = totmkn + tot_hrg_mkn;
    cout << "\t\t\t  Total Harga Makanan                                       : Rp." << totmkn << endl;
    cout << "\t\t\t  Ketik Y jika ingin menambah menu, Ketik T jika tidak      : ";
    cin >> loop;
    break;

        cout << "\t\t\t  total harga pesanan makanan anda : " << totmkn << endl;
    }
    
    cout << "\t\t\t ============================================================================" << endl;
}

// memilih minum dan jumlah
void pesan_minum() 
{
    cout << endl;
    cout << "\t\t\t  Note: Silahkan ketik '0' jika tidak memesan minuman" << endl;
    cout << "\t\t\t  minumnya bos?                                             : "; cin >> kd_mnm;

    switch (kd_mnm)
    {

    case 0:
        cout << "\t\t\t  tanpa minuman" << endl;
        cout << "\t\t\t  Ketik Y jika ingin menambah menu, Ketik T jika tidak      : ";
        cin >> loop;
        break;

    case 1:
        cout << "\t\t\t  Es Teh" << endl;
        cout << "\t\t\t  Harga 1 Minuman                                           : Rp." << hrg[3] << endl;
        cout << "\t\t\t  Jumlah minum                                              : ";
        cin >> jmlh;
        tot_hrg_mnm = hrg[3] * jmlh;
        totmnm = totmnm + tot_hrg_mnm;
        cout << "\t\t\t  Total Harga Minuman                                       : Rp." << totmnm << endl;
        cout << "\t\t\t  Ketik Y jika ingin menambah menu, Ketik T jika tidak      : ";
        cin >> loop;
        break;


    case 2:
        cout << "\t\t\t  Es Jeruk" << endl;
        cout << "\t\t\t  Harga 1 Minuman                                           : Rp." << hrg[4] << endl;
        cout << "\t\t\t  Jumlah minum                                              : ";
        cin >> jmlh;
        tot_hrg_mnm = hrg[4] * jmlh;
        totmnm = totmnm + tot_hrg_mnm;
        cout << "\t\t\t  Total Harga Minuman                                       : Rp." << totmnm << endl;
        cout << "\t\t\t  Ketik Y jika ingin menambah menu, Ketik T jika tidak      : ";
        cin >> loop;
        break;

    case 3:
        cout << "\t\t\t  Teh Anget" << endl;
        cout << "\t\t\t  Harga 1 Minuman                                           : Rp." << hrg[2] << endl;
        cout << "\t\t\t  Jumlah minuman                                            : ";
        cin >> jmlh;
        tot_hrg_mnm = hrg[2] * jmlh;
        totmnm = totmnm + tot_hrg_mnm;
        cout << "\t\t\t  Total Harga Minuman                                       : Rp." << totmnm << endl;
        cout << "\t\t\t  Ketik Y jika ingin menambah menu, Ketik T jika tidak      : ";
        cin >> loop;
        break;

    case 4:
        cout << "\t\t\t  Jeruk Anget" << endl;
        cout << "\t\t\t  Harga 1 Minuman                                           : Rp." << hrg[3] << endl;
        cout << "\t\t\t  Jumlah minuman                                            : ";
        cin >> jmlh;
        tot_hrg_mnm = hrg[3] * jmlh;
        totmnm = totmnm + tot_hrg_mnm;
        cout << "\t\t\t  Total Harga Minuman                                       : Rp." << totmnm << endl;
        cout << "\t\t\t  Ketik Y jika ingin menambah menu, Ketik T jika tidak      : ";
        cin >> loop;
        break;

    case 5:
        cout << "\t\t\t  Es Kopi" << endl;
        cout << "\t\t\t  Harga 1 Minuman                                           : Rp." << hrg[5] << endl;
        cout << "\t\t\t  Jumlah minuman                                            : ";
        cin >> jmlh;
        tot_hrg_mnm = hrg[5] * jmlh;
        totmnm = totmnm + tot_hrg_mnm;
        cout << "\t\t\t  Total Harga Minuman                                       : Rp." << totmnm << endl;
        cout << "\t\t\t  Ketik Y jika ingin menambah menu, Ketik T jika tidak      : ";
        cin >> loop;
        break;
        
    case 6:
        cout << "\t\t\t  Es Susu" << endl;
        cout << "\t\t\t  Harga 1 Minuman                                           : Rp." << hrg[5] << endl;
        cout << "\t\t\t  Jumlah minuman                                            : ";
        cin >> jmlh;
        tot_hrg_mnm = hrg[5] * jmlh;
        totmnm = totmnm + tot_hrg_mnm;
        cout << "\t\t\t  Total Harga Minuman                                       : Rp." << totmnm << endl;
        cout << "\t\t\t  Ketik Y jika ingin menambah menu, Ketik T jika tidak      : ";
        cin >> loop;
        break;

        cout << "\t\t\t  total harga pesanan minuman anda   : Rp." << totmnm << endl;

    }
    
    cout << "\t\t\t============================================================================" << endl;
}
// menghitung uang kembali
void uang_kembalian(){
    // jika uang berlebih
    if (bayar > t_semua)
    {
        kbl = bayar - t_semua;
        cout << "\t\t\t  Uang kembali                                              : Rp." << kbl << endl;
    cout << "\t\t\t                     Pesanan anda sedang di proses.                         " << endl;
    }
    // jika uang kurang
    else
    {
        cout << "\t\t\t  uang anda Kurang                                          : Rp." << bayar - t_semua << endl;
    cout << "\t\t\t                    Lakukan pembayaran yang valid                           " << endl;
    }
}

// footer belanja untuk menampilkan diskon dan total belanja akhir
void t_belanja() 
{
    cout << "\t\t\t  Diskon                                                    : Rp." << diskon << endl;
    cout << "\t\t\t  total belanja                                             : Rp." << t_semua << endl;
    uang_kembalian();
    cout << "\t\t\t****************************************************************************" << endl;
    cout << "\t\t\t*                                                                          *" << endl;
    cout << "\t\t\t*          Terima kasih Telah Berbelanja Di Angkringan Mas Mul             *" << endl;
    cout << "\t\t\t*                                                                          *" << endl;
    cout << "\t\t\t****************************************************************************" << endl;
    cout << "\t\t\t*                                                                          *" << endl;
    cout << "\t\t\t****************************************************************************" << endl;
        
}