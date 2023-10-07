/*
Latihan 1 pointer & dereference :
    - Pointer adalah variable yg menyimpan address atau alamat dari variable lainnya
    - ampersand (&) digunakan untuk menampilkan address atau memasukkan address ke pointer.
        - contoh : 
            int *a = &a; //(memasukkan ke pointer)
            std::cout << &b; // (menampilkan di konsol)
*/
#include<iostream>

int main(int argc, char const *argv[])
{
    int a = 1;
    int *b = &a; 
    
    std::cout << "a = " << a << std::endl;
    std::cout << "&a = " << &a << std::endl;//& akan menghasilkan alamat atau address asli dari sebuah variable termasuk variable pointer
    
    std::cout << std::endl;

    std::cout << "b = " << b << std::endl;// variable pointer ketika kita panggil maka valuenya berupa alamat yg kita tunjuk
    std::cout << "&b = " << &b << std::endl;//dengan menggunakan & maka kita dapat mengetahui address dari variable pointer
    std::cout << "*b = " << *b << std::endl;//dereference pointer digunakan untuk menampilkan atau mengubah value yg mana bisa berdampak pada variable yg ditunjuk pointer.
    *b = 2;//disini kita melakukan dereference pointer ubah value
    std::cout << "*b = " << *b << std::endl;
    std::cout << "a = " << a << std::endl;//value berubah karena pengubahan yg kita lakukan dengan cara dereference pointer
    return 0;
}