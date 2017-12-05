#include <iostream>
#include <cstring>
#include <string>

using namespace std;
void Permutations(char *a, const int k, const int m);

int main()
{

  int n;
  cin >> n;
  while(n--)
  {
    std::string s;
    cin >> s;

    char *sc = new char[s.length() + 1];

    std::strcpy(sc, s.c_str());

    Permutations(sc, 0, s.length());

    delete[] sc;
  }
}



void Permutations(char *a, const int k, const int m)
{
  // ����a[k], �K, a[m] ���Ҧ��ƦC
  if (k == m) //��X�ƦC
  {
    for (int i = 0; i <= m; i++) cout << a[i] ;
    cout << endl;
  }
  else // a [k : m] �٦��W�L�@�إH�W���ƦC�A���j���ͥ���
    for (int i = k; i <= m; i++)
    {
      swap(a[k], a[i]);
      Permutations(a, k + 1, m);
      swap(a[k], a[i]);
    }
}
