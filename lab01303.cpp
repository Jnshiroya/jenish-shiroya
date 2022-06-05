
#include<bits/stdc++.h>
using namespace std;

int main()
{
  char s[100];
  cout << "Enter string !!" << endl;
  gets(s);
  int length = strlen(s);
  fstream file;
  file.open("ctext", ios::out);
  for (int i = 0; i < length; i++)
  {
    file.put((s[i] + 5));
  }
  file.close();
  char ch[length];
  file.open("ctext", ios::in);
  file.read((char *)&ch, sizeof(ch));
  cout << "This is encrypted string" << endl;
  for (int i = 0; i < length; i++)
  {
    cout << ch[i];
  }
  cout << "\nThis is decrypted string" << endl;

  for (int i = 0; i < length; i++)
  {
    ch[i] = (ch[i] - 5);
    cout << ch[i];
  }
  file.close();

  return 0;
}