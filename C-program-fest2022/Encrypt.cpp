// C++ implementation of a program to encrypt and decrypt a text file and handle the error by displaying suitable error message.
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
  char echar;
  char dchar;
  char opt;
  int r=0;
  cout << "Enter program in which mode:"
       << "1:Encryption mode" << endl
       << "2.Decryption Mode" << endl;
  cin >> r;
  if (r == 1)
  {
    goto E;
  }
  else if (r == 2)
  {
    goto D;
  }
  else
  {
    cout << "Enter a proper mode to begin with !!";
    exit(0);
  }
E:
{
  fstream encrypt_fin;
  encrypt_fin.open("SAMPLEQ5.txt");
  if (encrypt_fin.good())
  {
    cout << "File opened successfully!!" << endl
         << "Encryption Operation started!!" << endl;
  }
  else
  {
    cout << "File not found so not opened!! EXITING PROGRAM" << endl;
    exit(0);
  }
  while (encrypt_fin.eof() != 1)
  {
    encrypt_fin.get(echar);
    if (echar == ' ')
    {
      encrypt_fin.seekp(0, ios::cur);
      encrypt_fin.put('$');
    }
    else if (echar > 'b' && echar < 'x')
    {
      encrypt_fin.seekp(0, ios::cur);
      encrypt_fin.put((char)((int)echar + 1));
    }
    else if (echar > 'B' && echar < 'X')
    {
      encrypt_fin.seekp(0, ios::cur);
      encrypt_fin.put((char)((int)echar - 1));
    }
    else if (echar >= '2' && echar <= '7')
    {
      encrypt_fin.seekp(0, ios::cur);
      encrypt_fin.put(echar + 1);
    }
    else
    {
    }
  }

  encrypt_fin.close();
}
  cout << "File encrypted successfully!" << endl
       << "If u wish to decrypt it enter D or d:" << endl;
  cin >> opt;
  if (opt == 'd' || opt == 'D')
  {
  D:
  {
    fstream decrypt_fin;
    decrypt_fin.open("SAMPLEQ5.txt");
    if (decrypt_fin.good())
    {
      cout << "File opened successfully!!" << endl
           << "Decryption Operation started!!" << endl;
    }
    else
    {
      cout << "Decryption failed as file linking failed!! EXITING PROGRAM" << endl;
      exit(0);
    }
    while (decrypt_fin.eof() != 1)
    {
      decrypt_fin.get(dchar);
      if (dchar == '$')
      {
        decrypt_fin.seekp(0, ios::cur);
        decrypt_fin.put(' ');
      }
      else if (dchar > 'b' && dchar < 'x')
      {
        decrypt_fin.seekp(0, ios::cur);
        decrypt_fin.put((char)((int)echar - 1));
      }
      else if (dchar > 'B' && dchar < 'X')
      {
        decrypt_fin.seekp(0, ios::cur);
        decrypt_fin.put((char)((int)echar + 1));
      }
      else if (dchar >= '2' && dchar <= '7')
      {
        decrypt_fin.seekp(0, ios::cur);
        decrypt_fin.put(echar - 1);
      }
      else
      {
      }
    }
    cout << "File Decrypted Successfully!!" << endl
         << "Now file can be read normally!!" << endl;
    decrypt_fin.close();
  }
  }

  else
  {
    cout << "File remains encrypted forever now!!" << endl;
    exit(0);
  }
  
  return 0;
}