/*
Latihan 1 pengenalan :
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
    
    std::cout << "b = " << b << std::endl;
    std::cout << "*b = " << *b << std::endl;
    std::cout << "&b = " << &b << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "&a = " << &a << std::endl;
    return 0;
}
